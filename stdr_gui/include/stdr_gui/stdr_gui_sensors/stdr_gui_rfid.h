/******************************************************************************
   STDR Simulator - Simple Two DImensional Robot Simulator
   Copyright (C) 2013 STDR Simulator
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
   
   Authors : 
   * Manos Tsardoulias, etsardou@gmail.com
   * Aris Thallas, aris.thallas@gmail.com
   * Chris Zalidis, zalidis@gmail.com 
******************************************************************************/

#ifndef STDR_GUI_RFID_CONTAINER
#define STDR_GUI_RFID_CONTAINER

#include "stdr_gui/stdr_tools.h"
#include "stdr_msgs/RfidSensorMsg.h"

namespace stdr_gui
{
	class CGuiRfid
	{
		private:
			std::string topic_;
			stdr_msgs::RfidSensorMsg msg_;
			ros::Subscriber subscriber_;
			
		public:
			CGuiRfid(stdr_msgs::RfidSensorMsg msg,std::string baseTopic);
			~CGuiRfid(void);
			
			void paint(QImage *m);
	};	
}

#endif
