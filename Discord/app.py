from flask import Flask, jsonify, request
from bot import Bot
import asyncio
import threading
from dotenv import load_dotenv
import os

load_dotenv()

app = Flask(__name__)

bot = Bot(os.environ.get("BOT_TOKEN"), int(os.environ.get("BOT_GUILD_ID")))

@app.route('/update', methods=['POST'])
async def send_update():
    global bot
    body = request.get_json()
    asyncio.run_coroutine_threadsafe(bot.send_on_channel("updates", f"@everyone\n{body['username']} upade Arcade-Share :\n{body['message']}"), bot.get_instance().loop)
    return jsonify("OK")

def start_flask():
    app.run(host="0.0.0.0", port=4242)

def start_bot():
    asyncio.run(bot.run())

if __name__ == "__main__":
    bot_thread = threading.Thread(target=start_bot)
    flask_thread = threading.Thread(target=start_flask)

    bot_thread.start()
    flask_thread.start()

    bot_thread.join()
    flask_thread.join()