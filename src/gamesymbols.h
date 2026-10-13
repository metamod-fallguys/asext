#pragma once

#include <signatures_template.h>

// XXXX_GameSymbol is the symbolName of XXXX in the GoldSrc_VibeSignatures
// gamedata (scripts/manifests/asext.json), resolved by FILL_FROM_GAMEDATA /
// VAR_FROM_GAMEDATA. C++ signatures are spelled differently per platform.

#ifdef _WIN32

#    define CASDocumentation_RegisterObjectType_GameSymbol      "CASDocumentation::RegisterObjectType(char const*, char const*, int, unsigned int)"
#    define CASDocumentation_RegisterGlobalFunction_GameSymbol  "CASDocumentation::RegisterGlobalFunction(char const*, char const*, asSFuncPtr const&, unsigned int, void*)"
#    define CASDocumentation_RegisterObjectMethod_GameSymbol    "CASDocumentation::RegisterObjectMethod(char const*, char const*, char const*, asSFuncPtr const&, unsigned int)"
#    define CASDocumentation_RegisterObjectBehaviour_GameSymbol "CASDocumentation::RegisterObjectBehaviour(char const*, char const*, asEBehaviours, char const*, asSFuncPtr const&, unsigned int, void*)"
#    define CASBaseManager_GetTypeInfoByName_GameSymbol         "CASBaseManager::GetTypeInfoByName(std::string const&)"

#else

#    define CASDocumentation_RegisterObjectType_GameSymbol      "CASDocumentation::RegisterObjectType(char const*, char const*, int, unsigned long)"
#    define CASDocumentation_RegisterGlobalFunction_GameSymbol  "CASDocumentation::RegisterGlobalFunction(char const*, char const*, asSFuncPtr const&, unsigned long, void*)"
#    define CASDocumentation_RegisterObjectMethod_GameSymbol    "CASDocumentation::RegisterObjectMethod(char const*, char const*, char const*, asSFuncPtr const&, unsigned long)"
#    define CASDocumentation_RegisterObjectBehaviour_GameSymbol "CASDocumentation::RegisterObjectBehaviour(char const*, char const*, asEBehaviours, char const*, asSFuncPtr const&, unsigned long, void*)"
#    define CASBaseManager_GetTypeInfoByName_GameSymbol         "CASBaseManager::GetTypeInfoByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)"

#endif

#define CASHook_CASHook_GameSymbol                         "CASHook_CASHook"
#define CASHook_Call_GameSymbol                            "CASHook_Call"
#define CString_Assign_GameSymbol                          "CString::Assign(const char*, unsigned int)"
#define CString_dtor_GameSymbol                            "CString::~CString()"
#define asGetActiveContext_GameSymbol                      "asGetActiveContext"
#define CASDocumentation_RegisterObjectProperty_GameSymbol "CASDocumentation::RegisterObjectProperty(char const*, char const*, char const*, int)"
#define CASDocumentation_RegisterGlobalProperty_GameSymbol "CASDocumentation::RegisterGlobalProperty(char const*, char const*, void*)"
#define CASDocumentation_RegisterFuncDef_GameSymbol        "CASDocumentation::RegisterFuncDef(char const*, char const*)"
#define CASDocumentation_RegisterEnum_GameSymbol           "CASDocumentation::RegisterEnum(char const*, char const*, CASDocumentation::ENUM_TYPE)"
#define CASDocumentation_RegisterEnumValue_GameSymbol      "CASDocumentation::RegisterEnumValue(char const*, char const*, char const*, int)"
#define CASDocumentation_SetDefaultNamespace_GameSymbol    "CASDocumentation::SetDefaultNamespace(char const*)"
#define CASDirectoryList_CreateDirectory_GameSymbol        "CASDirectoryList::CreateDirectory(char const*, unsigned char, unsigned char, unsigned char, unsigned char)"
#define CASFunction_Create_GameSymbol                      "CASFunction::Create(asIScriptFunction*, CASModule*, bool)"
#define CASBaseCallable_Call_GameSymbol                    "CASBaseCallable::Call(int, ...)"
#define CASRefCountedBaseClass_InternalRelease_GameSymbol  "CASRefCountedBaseClass::InternalRelease() const"
#define CScriptAny_Release_GameSymbol                      "CScriptAny::Release() const"
#define CScriptArray_Release_GameSymbol                    "CScriptArray::Release() const"
#define CScriptBuilder_DefineWord_GameSymbol               "CScriptBuilder::DefineWord(const char*)"

#define CScriptDictionary_Create_GameSymbol                "CScriptDictionary::Create(asIScriptEngine*)"
#define CScriptDictionary_AddRef_GameSymbol                "CScriptDictionary::AddRef() const"
#define CScriptDictionary_Release_GameSymbol               "CScriptDictionary::Release() const"
#define CScriptDictionary_Set_GameSymbol                   "CScriptDictionary::Set(const CString&, void*, int)"
#define CScriptDictionary_Get_GameSymbol                   "CScriptDictionary::Get(const CString&, void*, int) const"
#define CScriptDictionary_Exists_GameSymbol                "CScriptDictionary::Exists(const CString&) const"
#define CScriptDictionary_IsEmpty_GameSymbol               "CScriptDictionary::IsEmpty() const"
#define CScriptDictionary_GetSize_GameSymbol               "CScriptDictionary::GetSize() const"
#define CScriptDictionary_Delete_GameSymbol                "CScriptDictionary::Delete(const CString&)"
#define CScriptDictionary_DeleteAll_GameSymbol             "CScriptDictionary::DeleteAll()"
#define CScriptDictionary_begin_GameSymbol                 "CScriptDictionary::begin() const"
#define CScriptDictionary_end_GameSymbol                   "CScriptDictionary::end() const"
#define CScriptDictionary_CIterator_GetKey_GameSymbol      "CScriptDictionary::CIterator::GetKey() const"
#define CScriptDictionary_CIterator_operator_NE_GameSymbol "CScriptDictionary::CIterator::operator!=(const CIterator&) const"
#define CScriptDictionary_CIterator_GetValue_GameSymbol    "CScriptDictionary::CIterator::GetValue(void*, int) const"
#define CScriptDictionary_CIterator_operator_PP_GameSymbol "CScriptDictionary::CIterator::operator++()"

// Address of CASServerManager::GetInstance()::pInstance (CASServerManager**).
#define g_pServerManager_GameSymbol "CASServerManager::GetInstance()::pInstance"
