# textfur

TextFur is a textgame that was originally written in Mono C# in 2017 and recently ported to C++/Qt in 2021.

This game has served as a means for me to learn how to code, especially with respect to C++/Qt.

The "default" preset builds with C++20, Ninja, MinSizeRel, compile_commands.json and .kateproject.

```bash
cmake --preset default
cmake --build build/
cmake --install build/
```

To build and run as a flatpak, use:

```bash
# Once, to add the --user remote
flatpak remote-add --user --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo
# As many times as needed to recompile
flatpak-builder build --install-deps-from=flathub --user --install --force-clean --ccache com.text.fur.json
# To run
flatpak run com.text.fur
```

![](textfurinterface.png)
