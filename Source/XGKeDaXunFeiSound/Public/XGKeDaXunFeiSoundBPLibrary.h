// Copyright (c) XiaoGang.2023.All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "XGKeDaXunFeiSoundBPLibrary.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FXGBeginSpeachToTextDelegate,bool,bBeginSpeachToText);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FXGSpeachToTextDelegate, FString, OutSrcText,FString, OutDstText);

UCLASS()
class UXGKeDaXunFeiSoundBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "BeginSpeachToText", Keywords = "KeDaXunFei ", WorldContext = "WorldContextObject"), Category = "XGKeDaXunFeiSoundTesting")
	static void XGBeginSpeachToText(const UObject* WorldContextObject, FXGBeginSpeachToTextDelegate XGBeginSpeachToTextDelegate, FXGSpeachToTextDelegate XGSpeachToTextDelegat);


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "StopSpeachToText", Keywords = "KeDaXunFei ", WorldContext = "WorldContextObject"), Category = "XGKeDaXunFeiSoundTesting")
	static void XGStopSpeachToText(const UObject* WorldContextObject);
};
