#/usr/bin/env bash

# Terminate already running bar instances
killall -q polybar

#wait until the perocesses have been shut down
while pgrep -u $UID -x polybar >/dev/nul; do sleep 1; done

#launch bar with name example
polybar topbar -r &

my_laptop_external_monitor=$(xrandr --query | grep 'VGA1')
if [[ $my_laptop_external_monitor = *connected* ]]; then
        polybar top_external -r &
fi

echo "Bars launched ..."
