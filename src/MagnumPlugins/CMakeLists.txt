#
#   This file is part of Magnum.
#
#   Copyright © 2010, 2011, 2012, 2013, 2014
#             Vladimír Vondruš <mosra@centrum.cz>
#
#   Permission is hereby granted, free of charge, to any person obtaining a
#   copy of this software and associated documentation files (the "Software"),
#   to deal in the Software without restriction, including without limitation
#   the rights to use, copy, modify, merge, publish, distribute, sublicense,
#   and/or sell copies of the Software, and to permit persons to whom the
#   Software is furnished to do so, subject to the following conditions:
#
#   The above copyright notice and this permission notice shall be included
#   in all copies or substantial portions of the Software.
#
#   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
#   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
#   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
#   DEALINGS IN THE SOFTWARE.
#

# Wrapper for creating given plugin type
macro(add_plugin plugin_name debug_install_dir release_install_dir metadata_file)
    if(NOT BUILD_STATIC)
        corrade_add_plugin(${plugin_name} ${debug_install_dir} ${release_install_dir} ${metadata_file} ${ARGN})
    else()
        corrade_add_static_plugin(${plugin_name} ${release_install_dir} ${metadata_file} ${ARGN})
    endif()
endmacro()

if(WITH_TEXT AND WITH_MAGNUMFONT)
    add_subdirectory(MagnumFont)
endif()

if(WITH_TEXT AND WITH_MAGNUMFONTCONVERTER AND NOT MAGNUM_TARGET_GLES)
    add_subdirectory(MagnumFontConverter)
endif()

if(WITH_OBJIMPORTER)
    add_subdirectory(ObjImporter)
endif()

if(WITH_TGAIMAGECONVERTER)
    add_subdirectory(TgaImageConverter)
endif()

if(WITH_TGAIMPORTER)
    add_subdirectory(TgaImporter)
endif()

if(WITH_AUDIO AND WITH_WAVAUDIOIMPORTER)
    add_subdirectory(WavAudioImporter)
endif()
