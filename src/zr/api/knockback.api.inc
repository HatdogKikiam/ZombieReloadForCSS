/*
 * ============================================================================
 *
 *  Zombie:Reloaded
 *
 *  File:          knockback.api.inc
 *  Type:          Core
 *  Description:   Native handlers for the ZR API. (Knockback module)
 *
 *  Copyright (C) 2009-2013  Greyscale, Richard Helgeby
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ============================================================================
 */

/**
 * Initializes all natives and forwards related to infection.
 */
APIKnockbackInit()
{
	// Class module natives/forwards (knockback.zr.inc)

	// Natives
	CreateNative("ZR_SetClientKnockbackScale", APISetClientKnockbackScale);
}

/**
 * Native call function (ZR_SetClientKnockbackScale)
 *
 * int ZR_SetClientKnockbackScale(int client, float fScale);
 */
public int APISetClientKnockbackScale(Handle plugin, int numParams)
{
	int client = GetNativeCell(1);
	float fScale = view_as<float>(GetNativeCell(2));

	APIValidateClientIndex(client);

	KnockbackSetClientScale(client, fScale);
}