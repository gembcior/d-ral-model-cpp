// =================================================================================
//
// MIT License
//
// Copyright (c) 2024 Gembcior
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// ==================================================================================

#ifndef DRAL_ACCESS_TYPE_H
#define DRAL_ACCESS_TYPE_H

#include <type_traits>

namespace dral {

enum class AccessType
{
  ReadOnly = 0x1,
  WriteOnly = 0x2,
  ReadWrite = ReadOnly | WriteOnly
};

template<AccessType AccessRequired, AccessType AccessAvailable>
inline constexpr bool IsAccessSupported{ (static_cast<std::underlying_type_t<AccessType>>(AccessRequired) &
                                          static_cast<std::underlying_type_t<AccessType>>(AccessAvailable)) ==
                                         static_cast<std::underlying_type_t<AccessType>>(AccessRequired) };

template<AccessType Access>
concept IsReadable = IsAccessSupported<AccessType::ReadOnly, Access>;

template<AccessType Access>
concept IsWritable = IsAccessSupported<AccessType::WriteOnly, Access>;

template<AccessType Access>
concept IsReadWrite = (Access == AccessType::ReadWrite);

}  // namespace dral

#endif  // DRAL_ACCESS_TYPE_H
