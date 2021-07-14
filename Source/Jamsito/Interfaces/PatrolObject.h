

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PatrolObject.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPatrolObject : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class JAMSITO_API IPatrolObject
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual TArray<class ATargetPoint*> GetWaypoints() = 0;
};
