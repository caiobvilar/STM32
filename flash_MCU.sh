/opt/openocd/bin/openocd -f openocd.cfg -c "init" -c "targets" -c "reset halt" -c "program $1 verify reset exit"