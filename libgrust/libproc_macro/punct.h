// Copyright (C) 2023 Free Software Foundation, Inc.
//
// This file is part of the GNU Proc Macro Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

#ifndef PUNCT_H
#define PUNCT_H

#include <cstdint>

namespace ProcMacro {

enum Spacing
{
  ALONE,
  JOINT
};

struct Punct
{
  std::uint32_t ch;
  Spacing spacing;

public:
  static Punct make_punct (std::uint32_t ch, Spacing spacing = Spacing::ALONE);
};

} // namespace ProcMacro

#endif /* ! PUNCT_H */
