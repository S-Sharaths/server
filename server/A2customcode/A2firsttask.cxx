//@<COPYRIGHT>@
//==================================================
//Copyright $2025.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@

/* 
 * @file 
 *
 *   This file contains the implementation for the Extension A2firsttask
 *
 */
#include <A2customcode/A2firsttask.hxx>

int A2firsttask( METHOD_message_t * msg, va_list /*args*/ )
{
	TC_write_syslog("\n entering the task one....  \n \n");

	tag_t revTag=msg->object_tag;

    char * propValue= "desc is set through itk code";

    TC_write_syslog("property value before setting the value\n\n");

    AOM_refresh(revTag, true);

    AOM_set_value_string(revTag,"object_desc",propValue);

    AOM_save_with_extensions(revTag);

    AOM_refresh(revTag, false);

    TC_write_syslog("done setting\n\n");


 return 0;

}
