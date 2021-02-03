## Usage

#### Setup environment
```
mkdir -p ~/sdks/zephyr
cd ~/sdks/zephyr
python3 -m pip install west --user
west init
west update
python3 -m pip install -r ~/sdks/zephyr/zephyr/scripts/requirements.txt
```
add these to your .bashrc/.zshrc
```
export ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb
export GNUARMEMB_TOOLCHAIN_PATH=/usr/local
export ZEPHYR_BASE=~/sdks/zephyr/zephyr
```

#### Initial compile
```
cd <PATH_TO_THIS_FOLDER>
west build -b <BOARD_NAME> app
```

#### Compile
```
west build
```

#### Flash
```
west flash
```