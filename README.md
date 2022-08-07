# Suckless Koala
Any patches applied can be found in a patches folder within the respective application's directory.\
dwm, dmenu, st and slock all have xresources/xrdb patches so their colours are sourced from my xresources file
(which can be found in [my dotfiles repo](https://github.com/koalagang/dotfiles))

**NOTE 1:** before compiling my dmenu build, you should install libxft-bgra (to enable emoji support)
***OR*** uncomment the `iscol` function in `dmenu/drw.c` (the latter will cause dmenu to use colourless emojis)
otherwise dmenu will crash whenever emojis are displayed.

**NOTE 2:** both my dwm builds use the xrdb patch but I have slightly modified them so that they look
for variables like `background` and `color15` instead of `normbordercolor` and `selfgcolor`.
The same goes for dmenu.

## sxiv

New bindings:
* J - zoom out
* K - zoom in
* L - go to next image
* H - go to previous image
* space - flip image
* p - play gif
* control+h - go to previous gif frame
* control+l - go to next gif frame

At some point I will create a script like [this](https://github.com/LukeSmithxyz/voidrice/blob/master/.config/sxiv/exec/key-handler).
