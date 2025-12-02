// dllmain.h : Declaration of module class.

class CComServer2Module : public ATL::CAtlDllModuleT< CComServer2Module >
{
public :
	DECLARE_LIBID(LIBID_ComServer2Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMSERVER2, "{befeb99b-fa04-47a1-85e8-e61d6002e679}")
};

extern class CComServer2Module _AtlModule;
