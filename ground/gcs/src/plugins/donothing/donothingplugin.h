/**
 ******************************************************************************
 *
 * @file       donothingplugin.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup DoNothingPlugin Do Nothing Plugin
 * @{
 * @brief A minimal example plugin 
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */
#ifndef DONOTHINGPLUGIN_H 
#define DONOTHINGPLUGIN_H 

#include <extensionsystem/iplugin.h> 

class DoNothingPlugin : public ExtensionSystem::IPlugin 
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.dronin.plugins.DoNothing")
public: 
   DoNothingPlugin(); 
   ~DoNothingPlugin(); 

   void extensionsInitialized(); 
   bool initialize(const QStringList & arguments, QString * errorString); 
   void shutdown(); 
}; 

#endif // DONOTHINGPLUGIN_H
