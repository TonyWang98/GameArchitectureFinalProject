#include "ga_label.h"
#include "framework/ga_frame_params.h"



#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>


static void updateHardInformation(ga_frame_params* params)
{
	
	//std::string st = "Here!" + std::to_string(temp);
	//const char* cc = st.c_str();
	//ga_label(cc, 0.0f, 15.0f, params);
	ga_label("The Button was pressed000!", 0.0f, 30.0f, params);
	ga_label("The Button was pressed111!", 0.0f, 45.0f, params);
}
