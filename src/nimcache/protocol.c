/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -pthread  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/protocol.o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/protocol.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
#define _GNU_SOURCE
#include <pthread.h>
#include <string.h>
#include <sys/types.h>
                          #include <pthread.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw;
typedef struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw;
typedef struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g tySequence_MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ tySequence_oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct tyTuple_jq7X5k7hWG0tdTZTDkiyGQ tyTuple_jq7X5k7hWG0tdTZTDkiyGQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_awOivLjlO76sGdHY7nQUjQ tyTuple_awOivLjlO76sGdHY7nQUjQ;
typedef struct Exception Exception;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw;
typedef struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw {
NimStringDesc* username;
NimStringDesc* message;
};
typedef NU8 tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg;
struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw {
tySequence_MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q {
tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw fields;
} S6;
struct {tySequence_oLpBKXzW3hF9aCVMo5EymfQ* elems;
} S7;
} kindU;
};
typedef NF tyArray_SBX73RxxTewX4sqVYGfdEA[1001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_SBX73RxxTewX4sqVYGfdEA tls;
};
struct tyTuple_jq7X5k7hWG0tdTZTDkiyGQ {
NimStringDesc* Field0;
tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* Field1;
};
typedef tyTuple_jq7X5k7hWG0tdTZTDkiyGQ tyArray_rnBfBeuXQMeTae3dUyC1Bw[2];
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyTuple_awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
pthread_mutex_t lock;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw toDispose;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyProc_IIomJ6ptE6vfJ5zRbATgkQ cbproc, void* ClE_0);
void* ClE_0;
} tyProc_Ig6kXMs9apW5862wHsbFhGw;
struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  tyTuple_awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};
struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
struct tySequence_WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  tyProc_IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
typedef struct {tyProc_hgOQFBQi19biNdOUUkFOOxA localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
tySequence_WF89a8QyKeDCh4DYWTmSiBg* threadDestructionHandlers_8OmU3x0fNdA0DLtOmU3kWw;
NI threadId_wzrdPYhtL9czkCWS4o9an9cRw;
TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL envComputed_OC1kQm9aRvX8VnmaXglp57Q;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* environment_rnCB7Cc69bd2mlM49cn9czO2Q;
NIM_BOOL isSlave_t9a8wsVVRYqGEKhg1vb49b3g;
tyProc_Ig6kXMs9apW5862wHsbFhGw callSoonProc_9b9b4iUSd60RO2UqC52ifJ6A;
tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ* gDisp_yIbBArLUsg2pBJkilx4yvg;
} NimThreadVars;
N_NIMCALL(void, parseMessage_o4A5gwcp9ceItjXMTgniqGw)(NimStringDesc* data, tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw* Result);
N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, parseJson_q2jt59czHU4BW88Mb7EJDUA)(NimStringDesc* buffer);
N_NIMCALL(NimStringDesc*, getStr_z2Itmc4KJ7uMBtaTVQ09cqw)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* n, NimStringDesc* default_0);
static N_INLINE(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, X5BX5D__bm6Lzuv1zmaV42IeMuikggjson)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* node, NimStringDesc* name);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q**, X5BX5D__9bcSZUFhwESDEYXhkxOm8Hg)(tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw* t, NimStringDesc* key);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, createMessage_JbgjbMPl1qaYMNy6TAhBwQ)(NimStringDesc* username, NimStringDesc* message);
N_NIMCALL(NimStringDesc*, dollar__f9cKpuwjrLNwYtym1kuFzjQ)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* node);
N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, percent__9bR9b9aepApwIZEZZtX9cb7RFA)(tyTuple_jq7X5k7hWG0tdTZTDkiyGQ* keyVals, NI keyValsLen_0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, percent__8iXO9aRAijCPe58pujCBbuQ_3)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
TNimType NTI_xoh5rXnWwbqFwYAt1NMfNw_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_2, "not isNil(node) ", 16);
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_3, "node.kind == JObject ", 21);
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_4, "fields", 6);
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_5, "username", 8);
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_6, "", 0);
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_7, "message", 7);
STRING_LITERAL(TM_6YwNZhDxCxVxXWRgvYG9cPw_8, "\015\012", 2);

static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s) {
	void* result;
	result = (void*)0;
	result = pthread_getspecific(s);
	return result;
}

static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem(globalsSlot_ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	T1_ = (NI)0;
	{
		if (!(NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*, X5BX5D__bm6Lzuv1zmaV42IeMuikggjson)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* node, NimStringDesc* name) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* result;
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q** T9_;
	nimfr_("[]", "json.nim");
	result = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	nimln_(880, "json.nim");
	{
		if (!!(!((node == 0)))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_2));
	}
	LA3_: ;
	nimln_(881, "json.nim");
	{
		if (!!(((*node).kind == ((tyEnum_JsonNodeKind_RUngo7nCHe6O8aBGIcrhtg) 5)))) goto LA7_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_3));
	}
	LA7_: ;
	nimln_(884, "json.nim");
	if (!(((32 &(1U<<((NU)((*node).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_4));
	T9_ = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q**)0;
	T9_ = X5BX5D__9bcSZUFhwESDEYXhkxOm8Hg((&(*node).kindU.S6.fields), name);
	result = (*T9_);
	popFrame();
	return result;
}

N_NIMCALL(void, parseMessage_o4A5gwcp9ceItjXMTgniqGw)(NimStringDesc* data, tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw* Result) {
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* dataJson;
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* T1_;
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* T2_;
	nimfr_("parseMessage", "protocol.nim");
	nimln_(9, "protocol.nim");
	dataJson = parseJson_q2jt59czHU4BW88Mb7EJDUA(data);
	nimln_(10, "protocol.nim");
	T1_ = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	T1_ = X5BX5D__bm6Lzuv1zmaV42IeMuikggjson(dataJson, ((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_5));
	unsureAsgnRef((void**) (&(*Result).username), getStr_z2Itmc4KJ7uMBtaTVQ09cqw(T1_, ((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_6)));
	nimln_(11, "protocol.nim");
	T2_ = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	T2_ = X5BX5D__bm6Lzuv1zmaV42IeMuikggjson(dataJson, ((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_7));
	unsureAsgnRef((void**) (&(*Result).message), getStr_z2Itmc4KJ7uMBtaTVQ09cqw(T2_, ((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_6)));
	popFrame();
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, createMessage_JbgjbMPl1qaYMNy6TAhBwQ)(NimStringDesc* username, NimStringDesc* message) {
	NimStringDesc* result;
	NimStringDesc* T1_;
	tyArray_rnBfBeuXQMeTae3dUyC1Bw T2_;
	tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* T3_;
	NimStringDesc* T4_;
	nimfr_("createMessage", "protocol.nim");
	result = (NimStringDesc*)0;
	nimln_(14, "protocol.nim");
	T1_ = (NimStringDesc*)0;
	memset((void*)T2_, 0, sizeof(T2_));
	T2_[0].Field0 = copyString(((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_5));
	nimln_(15, "protocol.nim");
	T2_[0].Field1 = percent__8iXO9aRAijCPe58pujCBbuQ_3(username);
	T2_[1].Field0 = copyString(((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_7));
	nimln_(16, "protocol.nim");
	T2_[1].Field1 = percent__8iXO9aRAijCPe58pujCBbuQ_3(message);
	T3_ = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
	T3_ = percent__9bR9b9aepApwIZEZZtX9cb7RFA(T2_, 2);
	T4_ = (NimStringDesc*)0;
	T4_ = dollar__f9cKpuwjrLNwYtym1kuFzjQ(T3_);
	T1_ = rawNewString(T4_->Sup.len + 2);
appendString(T1_, T4_);
appendString(T1_, ((NimStringDesc*) &TM_6YwNZhDxCxVxXWRgvYG9cPw_8));
	result = T1_;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, unknown_protocolInit000)(void) {
	nimfr_("protocol", "protocol.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, unknown_protocolDatInit000)(void) {
static TNimNode* TM_6YwNZhDxCxVxXWRgvYG9cPw_9[2];
static TNimNode TM_6YwNZhDxCxVxXWRgvYG9cPw_0[3];
NTI_xoh5rXnWwbqFwYAt1NMfNw_.size = sizeof(tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw);
NTI_xoh5rXnWwbqFwYAt1NMfNw_.kind = 18;
NTI_xoh5rXnWwbqFwYAt1NMfNw_.base = 0;
NTI_xoh5rXnWwbqFwYAt1NMfNw_.flags = 2;
TM_6YwNZhDxCxVxXWRgvYG9cPw_9[0] = &TM_6YwNZhDxCxVxXWRgvYG9cPw_0[1];
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[1].kind = 1;
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[1].offset = offsetof(tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw, username);
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[1].name = "username";
TM_6YwNZhDxCxVxXWRgvYG9cPw_9[1] = &TM_6YwNZhDxCxVxXWRgvYG9cPw_0[2];
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[2].kind = 1;
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[2].offset = offsetof(tyObject_Message_xoh5rXnWwbqFwYAt1NMfNw, message);
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[2].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[2].name = "message";
TM_6YwNZhDxCxVxXWRgvYG9cPw_0[0].len = 2; TM_6YwNZhDxCxVxXWRgvYG9cPw_0[0].kind = 2; TM_6YwNZhDxCxVxXWRgvYG9cPw_0[0].sons = &TM_6YwNZhDxCxVxXWRgvYG9cPw_9[0];
NTI_xoh5rXnWwbqFwYAt1NMfNw_.node = &TM_6YwNZhDxCxVxXWRgvYG9cPw_0[0];
}

