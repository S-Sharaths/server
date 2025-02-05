//@<COPYRIGHT>@
//==================================================
//Copyright $2025.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@


#include <common/library_indicators.h>

#if !defined(EXPORTLIBRARY)
#   error EXPORTLIBRARY is not defined
#endif

#undef EXPORTLIBRARY

#if !defined(LIBA2CUSTOMCODE) && !defined(IPLIB)
#   error IPLIB or LIBA2CUSTOMCODE is not defined
#endif

#undef A2CUSTOMCODE_API
#undef A2CUSTOMCODEEXPORT
#undef A2CUSTOMCODEGLOBAL
#undef A2CUSTOMCODEPRIVATE
