
import discord


class Bot:
    def __init__(self, token: str, guild_id: str) -> None:
        self.__token = token
        self.__guild_id = guild_id
        self.__intents = discord.Intents.default()
        self.__intents.messages = True
        self.__instance = discord.Client(command_prefix='!', intents=self.__intents)
        self.__channels = {}

        @self.__instance.event
        async def on_ready() -> None:
            await self.__on_ready()

    async def send_on_channel(self, name: str, msg: str) -> None:
        print(self.__channels[name])
        await self.__channels[name].send(msg)

    def add_channel(self, name: str, id: int):
        self.__channels.update({
            name: self.__guild.get_channel(id)
        })
        return self.__channels[name]

    def get_instance(self):
        return self.__instance

    async def __on_ready(self) -> None:
        print(f'Connected with {self.__instance.user}')

        self.__guild = self.__instance.get_guild(int(self.__guild_id))
        if self.__guild:
            if self.add_channel("updates", 1219307119145123952):
                print("Channel update found")
            else:
                print(f"Could not find general channel on {self.__guild.name}")
        else:
            print(f"Could not find server with ID {self.__guild_id}")

    async def run(self) -> None:
        await self.__instance.start(self.__token)
