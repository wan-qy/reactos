#include <windows.h>

#define STUB(x) void x(void) { NtDisplayString("NTDLL: Stub for "#x"\n"); }

// ?Allocate@CBufferAllocator@@UAEPAXK@Z
STUB(PropertyLengthAsVariant)
STUB(RtlCompareVariants)
STUB(RtlConvertPropertyToVariant)
STUB(RtlConvertVariantToProperty)
STUB(CsrAllocateCaptureBuffer)
STUB(CsrAllocateCapturePointer)
STUB(CsrAllocateMessagePointer)
STUB(CsrCaptureMessageBuffer)
STUB(CsrCaptureMessageString)
STUB(CsrCaptureTimeout)
STUB(CsrClientCallServer)
STUB(CsrClientConnectToServer)
STUB(CsrFreeCaptureBuffer)
STUB(CsrIdentifyAlertableThread)
STUB(CsrNewThread)
STUB(CsrProbeForRead)
STUB(CsrProbeForWrite)
STUB(CsrSetPriorityClass)
STUB(DbgBreakPoint)
STUB(DbgPrint)
STUB(DbgPrompt)
STUB(DbgSsHandleKmApiMsg)
STUB(DbgSsInitialize)
STUB(DbgUiConnectToDbg)
STUB(DbgUiContinue)
STUB(DbgUiWaitStateChange)
STUB(DbgUserBreakPoint)
STUB(KiRaiseUserExceptionDispatcher)
STUB(KiUserApcDispatcher)
STUB(KiUserCallbackDispatcher)
STUB(KiUserExceptionDispatcher)
STUB(LdrAccessResource)
STUB(LdrDisableThreadCalloutsForDll)
STUB(LdrEnumResources)
STUB(LdrFindEntryForAddress)
STUB(LdrFindResourceDirectory_U)
STUB(LdrFindResource_U)
STUB(LdrGetDllHandle)
STUB(LdrGetProcedureAddress)
STUB(LdrInitializeThunk)
STUB(LdrLoadDll)
STUB(LdrProcessRelocationBlock)
STUB(LdrQueryImageFileExecutionOptions)
STUB(LdrQueryProcessModuleInformation)
STUB(LdrShutdownProcess)
STUB(LdrShutdownThread)
STUB(LdrUnloadDll)
STUB(LdrVerifyImageMatchesChecksum)
STUB(NPXEMULATORTABLE)
STUB(NlsAnsiCodePage)
STUB(NlsMbCodePageTag)
STUB(NlsMbOemCodePageTag)
STUB(PfxFindPrefix)
STUB(PfxInitialize)
STUB(PfxInsertPrefix)
STUB(PfxRemovePrefix)
STUB(RestoreEm87Context)
STUB(RtlAbortRXact)
STUB(RtlAbsoluteToSelfRelativeSD)
STUB(RtlAcquirePebLock)
STUB(RtlAcquireResourceExclusive)
STUB(RtlAcquireResourceShared)
STUB(RtlAddAccessAllowedAce)
STUB(RtlAddAccessDeniedAce)
STUB(RtlAddAce)
STUB(RtlAddActionToRXact)
STUB(RtlAddAtomToAtomTable)
STUB(RtlAddAttributeActionToRXact)
STUB(RtlAddAuditAccessAce)
STUB(RtlAddCompoundAce)
STUB(RtlAdjustPrivilege)
STUB(RtlAllocateAndInitializeSid)
STUB(RtlAllocateHandle)
STUB(RtlAllocateHeap)
STUB(RtlAnsiCharToUnicodeChar)
STUB(RtlAppendAsciizToString)
STUB(RtlAppendStringToString)
STUB(RtlApplyRXact)
STUB(RtlApplyRXactNoFlush)
STUB(RtlAreAllAccessesGranted)
STUB(RtlAreAnyAccessesGranted)
STUB(RtlAreBitsClear)
STUB(RtlAreBitsSet)
STUB(RtlAssert)
STUB(RtlCaptureStackBackTrace)
STUB(RtlCheckRegistryKey)
STUB(RtlClearAllBits)
STUB(RtlClearBits)
STUB(RtlClosePropertySet)
STUB(RtlCompactHeap)
STUB(RtlCompareMemory)
STUB(RtlCompareMemoryUlong)
STUB(RtlCompressBuffer)
STUB(RtlConsoleMultiByteToUnicodeN)
STUB(RtlConvertExclusiveToShared)
STUB(RtlConvertLongToLargeInteger)
STUB(RtlConvertSharedToExclusive)
STUB(RtlConvertSidToUnicodeString)
STUB(RtlConvertUiListToApiList)
STUB(RtlConvertUlongToLargeInteger)
STUB(RtlCopyLuid)
STUB(RtlCopyLuidAndAttributesArray)
STUB(RtlCopySecurityDescriptor)
STUB(RtlCopySid)
STUB(RtlCopySidAndAttributesArray)
STUB(RtlCreateAcl)
STUB(RtlCreateAndSetSD)
STUB(RtlCreateAtomTable)
STUB(RtlCreateEnvironment)
STUB(RtlCreateHeap)
STUB(RtlCreateProcessParameters)
STUB(RtlCreatePropertySet)
STUB(RtlCreateQueryDebugBuffer)
STUB(RtlCreateRegistryKey)
STUB(RtlCreateSecurityDescriptor)
STUB(RtlCreateTagHeap)
STUB(RtlCreateUnicodeString)
STUB(RtlCreateUnicodeStringFromAsciiz)
STUB(RtlCreateUserProcess)
STUB(RtlCreateUserSecurityObject)
STUB(RtlCreateUserThread)
STUB(RtlCustomCPToUnicodeN)
STUB(RtlCutoverTimeToSystemTime)
STUB(RtlDeNormalizeProcessParams)
STUB(RtlDecompressBuffer)
STUB(RtlDecompressFragment)
STUB(RtlDelete)
STUB(RtlDeleteAce)
STUB(RtlDeleteAtomFromAtomTable)
STUB(RtlDeleteCriticalSection)
STUB(RtlDeleteElementGenericTable)
STUB(RtlDeleteNoSplay)
STUB(RtlDeleteRegistryValue)
STUB(RtlDeleteResource)
STUB(RtlDeleteSecurityObject)
STUB(RtlDestroyAtomTable)
STUB(RtlDestroyEnvironment)
STUB(RtlDestroyHandleTable)
STUB(RtlDestroyHeap)
STUB(RtlDestroyProcessParameters)
STUB(RtlDestroyQueryDebugBuffer)
STUB(RtlDetermineDosPathNameType_U)
STUB(RtlDoesFileExists_U)
STUB(RtlDosPathNameToNtPathName_U)
STUB(RtlDosSearchPath_U)
STUB(RtlDowncaseUnicodeString)
STUB(RtlDumpResource)
STUB(RtlEmptyAtomTable)
STUB(RtlEnlargedIntegerMultiply)
STUB(RtlEnlargedUnsignedDivide)
STUB(RtlEnlargedUnsignedMultiply)
STUB(RtlEnterCriticalSection)
STUB(RtlEnumProcessHeaps)
STUB(RtlEnumerateGenericTable)
STUB(RtlEnumerateGenericTableWithoutSplaying)
STUB(RtlEnumerateProperties)
STUB(RtlEqualComputerName)
STUB(RtlEqualDomainName)
STUB(RtlEqualLuid)
STUB(RtlEqualPrefixSid)
STUB(RtlEqualSid)
STUB(RtlEraseUnicodeString)
STUB(RtlExpandEnvironmentStrings_U)
STUB(RtlExtendHeap)
STUB(RtlExtendedIntegerMultiply)
STUB(RtlExtendedLargeIntegerDivide)
STUB(RtlExtendedMagicDivide)
STUB(RtlFillMemory)
STUB(RtlFillMemoryUlong)
STUB(RtlFindClearBits)
STUB(RtlFindClearBitsAndSet)
STUB(RtlFindLongestRunClear)
STUB(RtlFindLongestRunSet)
STUB(RtlFindMessage)
STUB(RtlFindSetBits)
STUB(RtlFindSetBitsAndClear)
STUB(RtlFirstFreeAce)
STUB(RtlFlushPropertySet)
STUB(RtlFormatCurrentUserKeyPath)
STUB(RtlFormatMessage)
STUB(RtlFreeHandle)
STUB(RtlFreeHeap)
STUB(RtlFreeOemString)
STUB(RtlFreeSid)
STUB(RtlFreeUserThreadStack)
STUB(RtlGenerate8dot3Name)
STUB(RtlGetAce)
STUB(RtlGetCallersAddress)
STUB(RtlGetCompressionWorkSpaceSize)
STUB(RtlGetControlSecurityDescriptor)
STUB(RtlGetCurrentDirectory_U)
STUB(RtlGetDaclSecurityDescriptor)
STUB(RtlGetElementGenericTable)
STUB(RtlGetFullPathName_U)
STUB(RtlGetGroupSecurityDescriptor)
STUB(RtlGetLongestNtPathLength)
STUB(RtlGetNtGlobalFlags)
STUB(RtlGetNtProductType)
STUB(RtlGetOwnerSecurityDescriptor)
STUB(RtlGetProcessHeaps)
STUB(RtlGetSaclSecurityDescriptor)
STUB(RtlGetUserInfoHeap)
STUB(RtlGuidToPropertySetName)
STUB(RtlIdentifierAuthoritySid)
STUB(RtlImageDirectoryEntryToData)
STUB(RtlImageNtHeader)
STUB(RtlImageRvaToSection)
STUB(RtlImageRvaToVa)
STUB(RtlImpersonateSelf)
STUB(RtlInitCodePageTable)
STUB(RtlInitNlsTables)
STUB(RtlInitializeAtomPackage)
STUB(RtlInitializeBitMap)
STUB(RtlInitializeContext)
STUB(RtlInitializeCriticalSection)
STUB(RtlInitializeCriticalSectionAndSpinCount)
STUB(RtlInitializeGenericTable)
STUB(RtlInitializeHandleTable)
STUB(RtlInitializeRXact)
STUB(RtlInitializeResource)
STUB(RtlInitializeSid)
STUB(RtlInsertElementGenericTable)
STUB(RtlIntegerToChar)
STUB(RtlIsDosDeviceName_U)
STUB(RtlIsGenericTableEmpty)
STUB(RtlIsNameLegalDOS8Dot3)
STUB(RtlIsTextUnicode)
STUB(RtlIsValidHandle)
STUB(RtlIsValidIndexHandle)
STUB(RtlLargeIntegerAdd)
STUB(RtlLargeIntegerArithmeticShift)
STUB(RtlLargeIntegerDivide)
STUB(RtlLargeIntegerNegate)
STUB(RtlLargeIntegerShiftLeft)
STUB(RtlLargeIntegerShiftRight)
STUB(RtlLargeIntegerSubtract)
STUB(RtlLargeIntegerToChar)
STUB(RtlLeaveCriticalSection)
STUB(RtlLengthRequiredSid)
STUB(RtlLengthSecurityDescriptor)
STUB(RtlLengthSid)
STUB(RtlLocalTimeToSystemTime)
STUB(RtlLockHeap)
STUB(RtlLookupAtomInAtomTable)
STUB(RtlLookupElementGenericTable)
STUB(RtlMakeSelfRelativeSD)
STUB(RtlMapGenericMask)
STUB(RtlMoveMemory)
STUB(RtlMultiByteToUnicodeN)
STUB(RtlMultiByteToUnicodeSize)
STUB(RtlNewInstanceSecurityObject)
STUB(RtlNewSecurityGrantedAccess)
STUB(RtlNewSecurityObject)
STUB(RtlNormalizeProcessParams)
/*STUB(RtlNtStatusToDosError)*/
STUB(RtlNumberGenericTableElements)
STUB(RtlNumberOfClearBits)
STUB(RtlNumberOfSetBits)
STUB(RtlOemStringToUnicodeSize)
STUB(RtlOemStringToUnicodeString)
STUB(RtlOemToUnicodeN)
STUB(RtlOnMappedStreamEvent)
STUB(RtlOpenCurrentUser)
STUB(RtlPcToFileHeader)
STUB(RtlPinAtomInAtomTable)
STUB(RtlPrefixString)
STUB(RtlPrefixUnicodeString)
STUB(RtlPropertySetNameToGuid)
STUB(RtlProtectHeap)
STUB(RtlQueryAtomInAtomTable)
STUB(RtlQueryEnvironmentVariable_U)
STUB(RtlQueryInformationAcl)
STUB(RtlQueryProcessBackTraceInformation)
STUB(RtlQueryProcessDebugInformation)
STUB(RtlQueryProcessHeapInformation)
STUB(RtlQueryProcessLockInformation)
STUB(RtlQueryProperties)
STUB(RtlQueryPropertyNames)
STUB(RtlQueryPropertySet)
STUB(RtlQueryRegistryValues)
STUB(RtlQuerySecurityObject)
STUB(RtlQueryTagHeap)
STUB(RtlQueryTimeZoneInformation)
STUB(RtlRaiseException)
STUB(RtlRaiseStatus)
STUB(RtlRandom)
STUB(RtlReAllocateHeap)
STUB(RtlRealPredecessor)
STUB(RtlRealSuccessor)
STUB(RtlReleasePebLock)
STUB(RtlReleaseResource)
STUB(RtlRemoteCall)
STUB(RtlResetRtlTranslations)
STUB(RtlRunDecodeUnicodeString)
STUB(RtlRunEncodeUnicodeString)
STUB(RtlSecondsSince1970ToTime)
STUB(RtlSecondsSince1980ToTime)
STUB(RtlSelfRelativeToAbsoluteSD)
STUB(RtlSetAllBits)
STUB(RtlSetAttributesSecurityDescriptor)
STUB(RtlSetBits)
STUB(RtlSetCriticalSectionSpinCount)
STUB(RtlSetCurrentDirectory_U)
STUB(RtlSetCurrentEnvironment)
STUB(RtlSetDaclSecurityDescriptor)
STUB(RtlSetEnvironmentVariable)
STUB(RtlSetGroupSecurityDescriptor)
STUB(RtlSetInformationAcl)
STUB(RtlSetOwnerSecurityDescriptor)
STUB(RtlSetProperties)
STUB(RtlSetPropertyNames)
STUB(RtlSetPropertySetClassId)
STUB(RtlSetSaclSecurityDescriptor)
STUB(RtlSetSecurityObject)
STUB(RtlSetTimeZoneInformation)
STUB(RtlSetUnicodeCallouts)
STUB(RtlSetUserFlagsHeap)
STUB(RtlSetUserValueHeap)
STUB(RtlSizeHeap)
STUB(RtlSplay)
STUB(RtlStartRXact)
STUB(RtlSubAuthorityCountSid)
STUB(RtlSubAuthoritySid)
STUB(RtlSubtreePredecessor)
STUB(RtlSubtreeSuccessor)
STUB(RtlSystemTimeToLocalTime)
STUB(RtlTimeFieldsToTime)
STUB(RtlTimeToElapsedTimeFields)
STUB(RtlTimeToSecondsSince1970)
STUB(RtlTimeToSecondsSince1980)
STUB(RtlTimeToTimeFields)
STUB(RtlTryEnterCriticalSection)
STUB(RtlUnicodeStringToAnsiSize)
STUB(RtlUnicodeStringToCountedOemString)
STUB(RtlUnicodeStringToOemSize)
STUB(RtlUnicodeStringToOemString)
STUB(RtlUnicodeToCustomCPN)
STUB(RtlUnicodeToMultiByteN)
STUB(RtlUnicodeToMultiByteSize)
STUB(RtlUnicodeToOemN)
STUB(RtlUniform)
STUB(RtlUnlockHeap)
STUB(RtlUnwind)
STUB(RtlUpcaseUnicodeChar)
STUB(RtlUpcaseUnicodeStringToAnsiString)
STUB(RtlUpcaseUnicodeStringToCountedOemString)
STUB(RtlUpcaseUnicodeStringToOemString)
STUB(RtlUpcaseUnicodeToCustomCPN)
STUB(RtlUpcaseUnicodeToMultiByteN)
STUB(RtlUpcaseUnicodeToOemN)
STUB(RtlUpperChar)
STUB(RtlUsageHeap)
STUB(RtlValidAcl)
STUB(RtlValidSecurityDescriptor)
STUB(RtlValidSid)
STUB(RtlValidateHeap)
STUB(RtlValidateProcessHeaps)
STUB(RtlWalkHeap)
STUB(RtlWriteRegistryValue)
STUB(RtlZeroHeap)
STUB(RtlZeroMemory)
STUB(RtlpNtCreateKey)
STUB(RtlpNtEnumerateSubKey)
STUB(RtlpNtMakeTemporaryKey)
STUB(RtlpNtOpenKey)
STUB(RtlpNtQueryValueKey)
STUB(RtlpNtSetValueKey)
STUB(RtlpUnWaitCriticalSection)
STUB(RtlpWaitForCriticalSection)
STUB(RtlxAnsiStringToUnicodeSize)
STUB(RtlxOemStringToUnicodeSize)
STUB(RtlxUnicodeStringToAnsiSize)
STUB(RtlxUnicodeStringToOemSize)
STUB(SaveEm87Context)
STUB(_CIpow)
STUB(__eCommonExceptions)
STUB(__eEmulatorInit)
STUB(__eF2XM1)
STUB(__eFABS)
STUB(__eFADD32)
STUB(__eFADD64)
STUB(__eFADDPreg)
STUB(__eFADDreg)
STUB(__eFADDtop)
STUB(__eFCHS)
STUB(__eFCOM)
STUB(__eFCOM32)
STUB(__eFCOM64)
STUB(__eFCOMP)
STUB(__eFCOMP32)
STUB(__eFCOMP64)
STUB(__eFCOMPP)
STUB(__eFCOS)
STUB(__eFDECSTP)
STUB(__eFDIV32)
STUB(__eFDIV64)
STUB(__eFDIVPreg)
STUB(__eFDIVR32)
STUB(__eFDIVR64)
STUB(__eFDIVRPreg)
STUB(__eFDIVRreg)
STUB(__eFDIVRtop)
STUB(__eFDIVreg)
STUB(__eFDIVtop)
STUB(__eFFREE)
STUB(__eFIADD16)
STUB(__eFIADD32)
STUB(__eFICOM16)
STUB(__eFICOM32)
STUB(__eFICOMP16)
STUB(__eFICOMP32)
STUB(__eFIDIV16)
STUB(__eFIDIV32)
STUB(__eFIDIVR16)
STUB(__eFIDIVR32)
STUB(__eFILD16)
STUB(__eFILD32)
STUB(__eFILD64)
STUB(__eFIMUL16)
STUB(__eFIMUL32)
STUB(__eFINCSTP)
STUB(__eFINIT)
STUB(__eFIST16)
STUB(__eFIST32)
STUB(__eFISTP16)
STUB(__eFISTP32)
STUB(__eFISTP64)
STUB(__eFISUB16)
STUB(__eFISUB32)
STUB(__eFISUBR16)
STUB(__eFISUBR32)
STUB(__eFLD1)
STUB(__eFLD32)
STUB(__eFLD64)
STUB(__eFLD80)
STUB(__eFLDCW)
STUB(__eFLDENV)
STUB(__eFLDL2E)
STUB(__eFLDLN2)
STUB(__eFLDPI)
STUB(__eFLDZ)
STUB(__eFMUL32)
STUB(__eFMUL64)
STUB(__eFMULPreg)
STUB(__eFMULreg)
STUB(__eFMULtop)
STUB(__eFPATAN)
STUB(__eFPREM)
STUB(__eFPREM1)
STUB(__eFPTAN)
STUB(__eFRNDINT)
STUB(__eFRSTOR)
STUB(__eFSAVE)
STUB(__eFSCALE)
STUB(__eFSIN)
STUB(__eFSQRT)
STUB(__eFST)
STUB(__eFST32)
STUB(__eFST64)
STUB(__eFSTCW)
STUB(__eFSTENV)
STUB(__eFSTP)
STUB(__eFSTP32)
STUB(__eFSTP64)
STUB(__eFSTP80)
STUB(__eFSTSW)
STUB(__eFSUB32)
STUB(__eFSUB64)
STUB(__eFSUBPreg)
STUB(__eFSUBR32)
STUB(__eFSUBR64)
STUB(__eFSUBRPreg)
STUB(__eFSUBRreg)
STUB(__eFSUBRtop)
STUB(__eFSUBreg)
STUB(__eFSUBtop)
STUB(__eFTST)
STUB(__eFUCOM)
STUB(__eFUCOMP)
STUB(__eFUCOMPP)
STUB(__eFXAM)
STUB(__eFXCH)
STUB(__eFXTRACT)
STUB(__eFYL2X)
STUB(__eFYL2XP1)
STUB(__eGetStatusWord)
STUB(__isascii)
STUB(__iscsym)
STUB(__iscsymf)
STUB(__toascii)
STUB(_alldiv)
STUB(_allmul)
STUB(_alloca_probe)
STUB(_allrem)
STUB(_allshl)
STUB(_allshr)
STUB(_atoi64)
STUB(_aulldiv)
STUB(_aullrem)
STUB(_aullshr)
//STUB(_chkstk)
STUB(_fltused)
STUB(_ftol)
STUB(_i64toa)
STUB(_i64tow)
STUB(_itoa)
STUB(_itow)
STUB(_ltoa)
STUB(_ltow)
STUB(_memccpy)
STUB(_memicmp)
STUB(_snprintf)
STUB(_snwprintf)
STUB(_splitpath)
STUB(_strcmpi)
STUB(_stricmp)
STUB(_strlwr)
STUB(_strnicmp)
STUB(_strupr)
STUB(_tolower)
STUB(_toupper)
STUB(_ultoa)
STUB(_ultow)
STUB(_vsnprintf)
STUB(_wcsicmp)
STUB(_wcslwr)
STUB(_wcsnicmp)
STUB(_wcsupr)
STUB(_wtoi)
STUB(_wtoi64)
STUB(_wtol)
STUB(abs)
STUB(atan)
STUB(atoi)
STUB(atol)
STUB(ceil)
STUB(cos)
STUB(fabs)
STUB(floor)
STUB(isalnum)
STUB(iscntrl)
STUB(isgraph)
STUB(isprint)
STUB(ispunct)
STUB(isupper)
STUB(iswalpha)
STUB(iswctype)
STUB(labs)
STUB(log)
STUB(mbstowcs)
STUB(memchr)
STUB(memcmp)
STUB(memcpy)
STUB(memmove)
STUB(memset)
STUB(pow)
STUB(qsort)
STUB(sin)
STUB(sqrt)
STUB(sscanf)
STUB(strcat)
STUB(strchr)
STUB(strcmp)
STUB(strcpy)
STUB(strcspn)
STUB(strncat)
STUB(strncmp)
STUB(strncpy)
STUB(strpbrk)
STUB(strrchr)
STUB(strspn)
STUB(strstr)
STUB(strtol)
STUB(strtoul)
STUB(swprintf)
STUB(tan)
STUB(towlower)
