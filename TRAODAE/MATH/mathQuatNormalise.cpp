/* Tomb Raider - The Angel of Darkness Animation Exporter
Copyright (c) 2017-2019 Nakamichi680

This file is part of "Tomb Raider - The Angel of Darkness Animation Exporter".

"Tomb Raider - The Angel of Darkness Animation Exporter" is free software: you can redistribute it and/or modify it under the terms of the
GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

"Tomb Raider - The Angel of Darkness Animation Exporter" is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with "Tomb Raider - The Angel of Darkness Animation Exporter".
If not, see <http://www.gnu.org/licenses/>.

Copyright (c) Square Enix Ltd. Lara Croft and Tomb Raider are trademarks or registered trademarks of Square Enix Ltd.*/


/*------------------------------------------------------------------------------------------------------------------
Normalizza il quaternione
INPUT: Quaternion *quat
OUTPUT: Quaternion *quat
------------------------------------------------------------------------------------------------------------------*/

#include "stdafx.h"
#include "Classes.h"


void mathQuatNormalise (Quaternion *quat)
{
    float norm = sqrt(pow(quat->x, 2) + pow(quat->y, 2) + pow(quat->z, 2) + pow(quat->w, 2));	// Calcola la norma del quaternione
    quat->x /= norm;																			// Normalizza la X
    quat->y /= norm;																			// Normalizza la Y
    quat->z /= norm;																			// Normalizza la Z
    quat->w /= norm;																			// Normalizza la W
}