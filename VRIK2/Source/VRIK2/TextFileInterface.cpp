// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileInterface.h"

#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"

FString UTextFileInterface::ReadStringFromFile(FString FilePath, bool& bOutSuccess, FString& OutInfoMessage)
{
	// Check if file exists
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read string from file failed - File doesn't exist - %s"), *FilePath);
		return "";
	}

	FString RetString = "";

	if (!FFileHelper::LoadFileToString(RetString, *FilePath))
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read string from file failed - Is this a text file? - %s"), *FilePath);
		return "";
	}

	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Read string from file succeeded - %s"), *FilePath);
	return RetString;
}
