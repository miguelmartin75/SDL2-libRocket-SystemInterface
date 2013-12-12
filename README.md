# SDL2-libRocket-SystemInterface

System integration with [libRocket](https://github.com/lloydw/libRocket) via [Magnum](https://github.com/mosra/magnum).

# Usage

Usage is quite simple and straight-foward, you simply create an object of `SystemInterface` and register it to libRocket, via `Rocket::Core::SetSystemInterface()`.

# Dependencies

The code within LogMessage, depends on the logging library easylogging++, which is a simple logging library that is within one header file. If you do not wish to use this library, or integrate your own logging platform, then you can do so quite easily by altering the code within `LogMessage()` within the `SystemInteface`.

# License
Copyright (C) 2013 Miguel Martin (miguel.martin7.5@hotmail.com)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
