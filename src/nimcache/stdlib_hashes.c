/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -pthread  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_hashes.o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_hashes.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
#define _GNU_SOURCE
#include <pthread.h>
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
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw tyObject_OrderedTable_AF39bJ7XDr6gpANuGpxkHrw;
typedef struct tySequence_MlAD6nAPq9bHKla9cWiIZP0g tySequence_MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence_oLpBKXzW3hF9aCVMo5EymfQ tySequence_oLpBKXzW3hF9aCVMo5EymfQ;
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
typedef NF tyArray_SBX73RxxTewX4sqVYGfdEA[1001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_SBX73RxxTewX4sqVYGfdEA tls;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
static N_INLINE(NI, emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes)(NI h);
N_NIMCALL(NI, hashData_yovoXItSw1cVwd06rHjO3Q)(void* data, NI size);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
static N_INLINE(NI, hash_ik2gygLR0dil3Sp9aYFpg9cQhashes)(void* x);
static N_INLINE(NI, hash_M6zZEYz39abIOUmj0QsNREghashes)(NI x);
static N_INLINE(NI, hash_wXLApNp4hVfHIRffgEB6jwhashes)(NI64 x);
static N_INLINE(NI, hash_dhRs9ctgdvantAislvio9b8ghashes)(NU x);
static N_INLINE(NI, hash_NG8iNI45ueAs5Mn0BFI3Iwhashes)(NU64 x);
static N_INLINE(NI, hash_pHd9bQtK7hxXdD9blc45ElOQhashes)(NIM_CHAR x);
N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NI, hash_jI32kLEzL20xGDPOKccuRg)(NCSTRING x);
N_NIMCALL(NI, hash_cEF5Tk3m50EURxpIqAvuYg)(NimStringDesc* sBuf, NI sPos, NI ePos);
N_NIMCALL(NI, hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_2)(NimStringDesc* x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NI, hashIgnoreStyle_cEF5Tk3m50EURxpIqAvuYg_2)(NimStringDesc* sBuf, NI sPos, NI ePos);
N_NIMCALL(NI, hashIgnoreCase_uBstFm5SYVQeOL3j9c9bc58A_3)(NimStringDesc* x);
N_NIMCALL(NI, hashIgnoreCase_cEF5Tk3m50EURxpIqAvuYg_3)(NimStringDesc* sBuf, NI sPos, NI ePos);
static N_INLINE(NI, hash_6GPBATuIA6xplfOnZj9bPQghashes)(NF x);
N_NIMCALL(NI, hash_1r8KCEmq7uHhZ2GR9c7tsOA)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* n);
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;

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

static N_INLINE(NI, emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes)(NI h, NI val) {
	NI result;
	nimfr_("!&", "hashes.nim");
	result = (NI)0;
	nimln_(53, "hashes.nim");
	result = (NI)((NU64)(h) + (NU64)(val));
	nimln_(54, "hashes.nim");
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 10)))));
	nimln_(55, "hashes.nim");
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 6))));
	popFrame();
	return result;
}

static N_INLINE(NI, emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes)(NI h) {
	NI result;
	nimfr_("!$", "hashes.nim");
	result = (NI)0;
	nimln_(60, "hashes.nim");
	result = (NI)((NU64)(h) + (NU64)((NI)((NU64)(h) << (NU64)(((NI) 3)))));
	nimln_(61, "hashes.nim");
	result = (NI)(result ^ (NI)((NU64)(result) >> (NU64)(((NI) 11))));
	nimln_(62, "hashes.nim");
	result = (NI)((NU64)(result) + (NU64)((NI)((NU64)(result) << (NU64)(((NI) 15)))));
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI, hashData_yovoXItSw1cVwd06rHjO3Q)(void* data, NI size) {
	NI result;
	NI h;
	NCSTRING p;
	NI i;
	NI s;
	nimfr_("hashData", "hashes.nim");
	result = (NI)0;
	nimln_(66, "hashes.nim");
	h = ((NI) 0);
	nimln_(71, "hashes.nim");
	p = ((NCSTRING) (data));
	nimln_(72, "hashes.nim");
	i = ((NI) 0);
	nimln_(73, "hashes.nim");
	s = size;
	{
		nimln_(74, "hashes.nim");
		while (1) {
			NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_2;
			NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_3;
			if (!(((NI) 0) < s)) goto LA2;
			nimln_(75, "hashes.nim");
			h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(p[i])))));
			nimln_(76, "hashes.nim");
			TM_7tkD9cFJSchVDwHuwaY9bP9bA_2 = addInt(i, ((NI) 1));
			i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_2);
			nimln_(77, "hashes.nim");
			TM_7tkD9cFJSchVDwHuwaY9bP9bA_3 = subInt(s, ((NI) 1));
			s = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_3);
		} LA2: ;
	}
	nimln_(78, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_ik2gygLR0dil3Sp9aYFpg9cQhashes)(void* x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(97, "hashes.nim");
	result = (NI)((NU64)(((NI) (x))) >> (NU64)(((NI) 3)));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_M6zZEYz39abIOUmj0QsNREghashes)(NI x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(109, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, hash_wXLApNp4hVfHIRffgEB6jwhashes)(NI64 x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(113, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_dhRs9ctgdvantAislvio9b8ghashes)(NU x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(117, "hashes.nim");
	result = ((NI) (x));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_NG8iNI45ueAs5Mn0BFI3Iwhashes)(NU64 x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(121, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(((NI64) (((NI) (x))))))));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_pHd9bQtK7hxXdD9blc45ElOQhashes)(NIM_CHAR x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(125, "hashes.nim");
	result = ((NI) (((NU8)(x))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(133, "hashes.nim");
	h = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_4;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(134, "hashes.nim");
		TM_7tkD9cFJSchVDwHuwaY9bP9bA_4 = subInt((x ? x->Sup.len : 0), ((NI) 1));
		colontmp_ = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_4);
		nimln_(1986, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1987, "system.nim");
			while (1) {
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_5;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(1988, "system.nim");
				i = res;
				nimln_(135, "hashes.nim");
				if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(x->data[i])))));
				nimln_(1989, "system.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_5 = addInt(res, ((NI) 1));
				res = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_5);
			} LA3: ;
		}
	}
	nimln_(136, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_jI32kLEzL20xGDPOKccuRg)(NCSTRING x) {
	NI result;
	NI h;
	NI i;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(140, "hashes.nim");
	h = ((NI) 0);
	nimln_(141, "hashes.nim");
	i = ((NI) 0);
	{
		nimln_(147, "hashes.nim");
		while (1) {
			NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_6;
			nimln_(378, "system.nim");
			nimln_(147, "hashes.nim");
			if (!!(((NU8)(x[i]) == (NU8)(0)))) goto LA2;
			nimln_(148, "hashes.nim");
			h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(x[i])))));
			nimln_(149, "hashes.nim");
			TM_7tkD9cFJSchVDwHuwaY9bP9bA_6 = addInt(i, ((NI) 1));
			i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_6);
		} LA2: ;
	}
	nimln_(150, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_cEF5Tk3m50EURxpIqAvuYg)(NimStringDesc* sBuf, NI sPos, NI ePos) {
	NI result;
	NI h;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(157, "hashes.nim");
	h = ((NI) 0);
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(1986, "system.nim");
		res = sPos;
		{
			nimln_(1987, "system.nim");
			while (1) {
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_7;
				if (!(res <= ePos)) goto LA3;
				nimln_(1988, "system.nim");
				i = res;
				nimln_(159, "hashes.nim");
				if ((NU)(i) > (NU)(sBuf->Sup.len)) raiseIndexError();
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(sBuf->data[i])))));
				nimln_(1989, "system.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_7 = addInt(res, ((NI) 1));
				res = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_7);
			} LA3: ;
		}
	}
	nimln_(160, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI, hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_2)(NimStringDesc* x) {
	NI result;
	NI h;
	NI i;
	NI xLen;
	nimfr_("hashIgnoreStyle", "hashes.nim");
	result = (NI)0;
	nimln_(164, "hashes.nim");
	h = ((NI) 0);
	nimln_(165, "hashes.nim");
	i = ((NI) 0);
	nimln_(166, "hashes.nim");
	xLen = (x ? x->Sup.len : 0);
	{
		nimln_(167, "hashes.nim");
		while (1) {
			NIM_CHAR c;
			if (!(i < xLen)) goto LA2;
			nimln_(168, "hashes.nim");
			if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
			c = x->data[i];
			nimln_(169, "hashes.nim");
			{
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_8;
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				nimln_(170, "hashes.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_8 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_8);
			}
			goto LA3_;
			LA5_: ;
			{
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_10;
				nimln_(172, "hashes.nim");
				{
					NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_9;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					nimln_(173, "hashes.nim");
					TM_7tkD9cFJSchVDwHuwaY9bP9bA_9 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_9), ((NI) 0), ((NI) 255)))));
				}
				LA10_: ;
				nimln_(174, "hashes.nim");
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(c)))));
				nimln_(175, "hashes.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_10 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_10);
			}
			LA3_: ;
		} LA2: ;
	}
	nimln_(177, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashIgnoreStyle_cEF5Tk3m50EURxpIqAvuYg_2)(NimStringDesc* sBuf, NI sPos, NI ePos) {
	NI result;
	NI h;
	NI i;
	nimfr_("hashIgnoreStyle", "hashes.nim");
	result = (NI)0;
	nimln_(185, "hashes.nim");
	h = ((NI) 0);
	nimln_(186, "hashes.nim");
	i = sPos;
	{
		nimln_(187, "hashes.nim");
		while (1) {
			NIM_CHAR c;
			if (!(i <= ePos)) goto LA2;
			nimln_(188, "hashes.nim");
			if ((NU)(i) > (NU)(sBuf->Sup.len)) raiseIndexError();
			c = sBuf->data[i];
			nimln_(189, "hashes.nim");
			{
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_11;
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				nimln_(190, "hashes.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_11 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_11);
			}
			goto LA3_;
			LA5_: ;
			{
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_13;
				nimln_(192, "hashes.nim");
				{
					NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_12;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					nimln_(193, "hashes.nim");
					TM_7tkD9cFJSchVDwHuwaY9bP9bA_12 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_12), ((NI) 0), ((NI) 255)))));
				}
				LA10_: ;
				nimln_(194, "hashes.nim");
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(c)))));
				nimln_(195, "hashes.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_13 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_13);
			}
			LA3_: ;
		} LA2: ;
	}
	nimln_(196, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashIgnoreCase_uBstFm5SYVQeOL3j9c9bc58A_3)(NimStringDesc* x) {
	NI result;
	NI h;
	nimfr_("hashIgnoreCase", "hashes.nim");
	result = (NI)0;
	nimln_(200, "hashes.nim");
	h = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_14;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(201, "hashes.nim");
		TM_7tkD9cFJSchVDwHuwaY9bP9bA_14 = subInt((x ? x->Sup.len : 0), ((NI) 1));
		colontmp_ = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_14);
		nimln_(1986, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1987, "system.nim");
			while (1) {
				NIM_CHAR c;
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_16;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(1988, "system.nim");
				i = res;
				nimln_(202, "hashes.nim");
				if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
				c = x->data[i];
				nimln_(203, "hashes.nim");
				{
					NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_15;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					nimln_(204, "hashes.nim");
					TM_7tkD9cFJSchVDwHuwaY9bP9bA_15 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_15), ((NI) 0), ((NI) 255)))));
				}
				LA6_: ;
				nimln_(205, "hashes.nim");
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(c)))));
				nimln_(1989, "system.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_16 = addInt(res, ((NI) 1));
				res = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_16);
			} LA3: ;
		}
	}
	nimln_(206, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

N_NIMCALL(NI, hashIgnoreCase_cEF5Tk3m50EURxpIqAvuYg_3)(NimStringDesc* sBuf, NI sPos, NI ePos) {
	NI result;
	NI h;
	nimfr_("hashIgnoreCase", "hashes.nim");
	result = (NI)0;
	nimln_(214, "hashes.nim");
	h = ((NI) 0);
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(1986, "system.nim");
		res = sPos;
		{
			nimln_(1987, "system.nim");
			while (1) {
				NIM_CHAR c;
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_18;
				if (!(res <= ePos)) goto LA3;
				nimln_(1988, "system.nim");
				i = res;
				nimln_(216, "hashes.nim");
				if ((NU)(i) > (NU)(sBuf->Sup.len)) raiseIndexError();
				c = sBuf->data[i];
				nimln_(217, "hashes.nim");
				{
					NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_17;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					nimln_(218, "hashes.nim");
					TM_7tkD9cFJSchVDwHuwaY9bP9bA_17 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
					c = ((NIM_CHAR) (((NI)chckRange((NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_17), ((NI) 0), ((NI) 255)))));
				}
				LA6_: ;
				nimln_(219, "hashes.nim");
				h = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(h, ((NI) (((NU8)(c)))));
				nimln_(1989, "system.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_18 = addInt(res, ((NI) 1));
				res = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_18);
			} LA3: ;
		}
	}
	nimln_(220, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(h);
	popFrame();
	return result;
}

static N_INLINE(NI, hash_6GPBATuIA6xplfOnZj9bPQghashes)(NF x) {
	NI result;
	NF y;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(224, "hashes.nim");
	y = ((NF)(x) + (NF)(1.0000000000000000e+00));
	nimln_(225, "hashes.nim");
	result = (*((NI*) ((&y))));
	popFrame();
	return result;
}

N_NIMCALL(NI, hash_1GTjRzRJDyKjtHlS5zMpEw)(tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q** x, NI xLen_0) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	{
		tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q* it;
		NI i;
		it = (tyObject_JsonNodeObj_df9bshXB7C9cTiWPIOtX3j1Q*)0;
		nimln_(2078, "system.nim");
		i = ((NI) 0);
		{
			nimln_(2079, "system.nim");
			while (1) {
				NI T4_;
				NI TM_7tkD9cFJSchVDwHuwaY9bP9bA_19;
				if (!(i < xLen_0)) goto LA3;
				nimln_(2080, "system.nim");
				if ((NU)(i) >= (NU)(xLen_0)) raiseIndexError();
				it = x[i];
				nimln_(242, "hashes.nim");
				T4_ = (NI)0;
				T4_ = hash_1r8KCEmq7uHhZ2GR9c7tsOA(it);
				result = emarkamp__6dtCP6C39bxOkT4wrIPJwKghashes(result, T4_);
				nimln_(2081, "system.nim");
				TM_7tkD9cFJSchVDwHuwaY9bP9bA_19 = addInt(i, ((NI) 1));
				i = (NI)(TM_7tkD9cFJSchVDwHuwaY9bP9bA_19);
			} LA3: ;
		}
	}
	nimln_(243, "hashes.nim");
	result = emarkdollar__zs9byUtT9cNi2e9clB27b2cUAhashes(result);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void) {
	nimfr_("hashes", "hashes.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void) {
}

