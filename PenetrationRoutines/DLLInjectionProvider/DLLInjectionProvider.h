#include <string>
#include "../AttackProvider/AttackProvider.h"
#include "../../AttackServices/DLLInjectionAttack/Injector.h"
#include "../../Core/MemWarsServicesCore.h"

using namespace std;

class DLLInjectionProvider : public AttackProvider {
public:
    BOOL SetTargetProcessByName(wstring) ;
    BOOL ExecuteAttack() ;
    BOOL SetTargetDLL(wstring);
    
protected:
    wstring dllPath = L"";
    HANDLE hProcess = NULL;
};