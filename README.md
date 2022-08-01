# textfur

TextFur is a textgame that was originally written in Mono C# in 2017 and recently ported to C++/Qt in 2021.

This game has served as a means for me to learn how to code, especially with respect to C++/Qt.

The "default" preset builds with C++20, Ninja, MinSizeRel, compile_commands.json and .kateproject.

```
cmake --preset default
cmake --build build/
cmake --install build/
```

![](textfurinterface.png)
