// dllmain.h : Declaration of module class.

class CComServerModule : public ATL::CAtlDllModuleT< CComServerModule >
{
public :
	DECLARE_LIBID(LIBID_ComServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMSERVER, "{6c8a161f-eb0f-46a4-a8f6-97436f3ca8ca}")
};

extern class CComServerModule _AtlModule;
