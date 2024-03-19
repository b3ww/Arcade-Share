name: update_discord

on:
  push:
    branches:
      - main

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - name: Checkout repository
      uses: actions/checkout@v2

    - name: Install Git
      run: sudo apt-get install git -y

    - name: send update
      run: ./update.sh . 193.70.40.62