# 
# This file is part of the LaserShark 3d Printer host application.
# 
# Copyright (C) 2014 Jeffrey Nelson <nelsonjm@macpod.net>
# 
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
# 

set(base64_SRC
	base64_cpp.h
	base64.h
	base64.c
)
add_library(base64 ${base64_SRC})

