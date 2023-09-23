#include "STUGameInstance.h"
#include "Sound/STUSoundFuncLibr.h"

void USTUGameInstance::ToggleVolume() 
{
    USTUSoundFuncLibr::ToggleSoundClassVolume(MasterSoundClass);
}
