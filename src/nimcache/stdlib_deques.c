/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -pthread  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_deques.o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_deques.c */
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
typedef struct tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct tyObject_Deque_104cP4q8EyDjHrsh1Phrmw tyObject_Deque_104cP4q8EyDjHrsh1Phrmw;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
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
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg {
tySequence_WF89a8QyKeDCh4DYWTmSiBg* data;
NI head;
NI tail;
NI count;
NI mask;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
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
typedef NF tyArray_SBX73RxxTewX4sqVYGfdEA[1001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_SBX73RxxTewX4sqVYGfdEA tls;
};
struct tyObject_Deque_104cP4q8EyDjHrsh1Phrmw {
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* data;
NI head;
NI tail;
NI count;
NI mask;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
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
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef void* tyArray_Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* next;
NI dataLen;
tyArray_Rrw59cMvNu8cDA9cQDh4v2oA d;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyProc_IIomJ6ptE6vfJ5zRbATgkQ cbproc, void* ClE_0);
void* ClE_0;
} tyProc_Ig6kXMs9apW5862wHsbFhGw;
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
N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, expandIfNeeded_yUfcbmt639aJ6tr007RgLpQ)(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg* deq);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tySequence_WF89a8QyKeDCh4DYWTmSiBg*, newSeq_FGDbRopuA4y4tNQGp9cEEsg)(NI len);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
extern TNimType NTI_WF89a8QyKeDCh4DYWTmSiBg_;
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
TNimType NTI_lXZKLUMbpAcAUzeVrG09bNg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_104cP4q8EyDjHrsh1Phrmw_;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
STRING_LITERAL(TM_NdgYN5HU2ty0qMI5oazWyg_2, "isPowerOfTwo(initialSize) ", 26);

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

N_NIMCALL(void, initDeque_ReEIfP39bwVCXJ79bSWPO49aw)(NI initialSize, tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg* Result) {
	NI TM_NdgYN5HU2ty0qMI5oazWyg_3;
	nimfr_("initDeque", "deques.nim");
	nimln_(58, "deques.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg(initialSize);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_NdgYN5HU2ty0qMI5oazWyg_2));
	}
	LA4_: ;
	nimln_(59, "deques.nim");
	TM_NdgYN5HU2ty0qMI5oazWyg_3 = subInt(initialSize, ((NI) 1));
	(*Result).mask = (NI)(TM_NdgYN5HU2ty0qMI5oazWyg_3);
	nimln_(60, "deques.nim");
	unsureAsgnRef((void**) (&(*Result).data), (tySequence_WF89a8QyKeDCh4DYWTmSiBg*) newSeq((&NTI_WF89a8QyKeDCh4DYWTmSiBg_), ((NI)chckRange(initialSize, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	popFrame();
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

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	NimThreadVars* NimTV_;
	nimfr_("rtlAddZCT", "gc.nim");
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&NimTV_->gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(269, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(378, "system.nim");
		nimln_(269, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(270, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(378, "system.nim");
		nimln_(270, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(271, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(void, expandIfNeeded_yUfcbmt639aJ6tr007RgLpQ)(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg* deq) {
	NI cap;
	NI TM_NdgYN5HU2ty0qMI5oazWyg_6;
	nimfr_("expandIfNeeded", "deques.nim");
	nimln_(129, "deques.nim");
	TM_NdgYN5HU2ty0qMI5oazWyg_6 = addInt((*deq).mask, ((NI) 1));
	cap = (NI)(TM_NdgYN5HU2ty0qMI5oazWyg_6);
	nimln_(130, "deques.nim");
	{
		NIM_BOOL T3_;
		tySequence_WF89a8QyKeDCh4DYWTmSiBg* n;
		NI TM_NdgYN5HU2ty0qMI5oazWyg_7;
		NI TM_NdgYN5HU2ty0qMI5oazWyg_10;
		NI TM_NdgYN5HU2ty0qMI5oazWyg_11;
		T3_ = (NIM_BOOL)0;
		T3_ = unlikely((cap <= (*deq).count));
		if (!T3_) goto LA4_;
		nimln_(131, "deques.nim");
		TM_NdgYN5HU2ty0qMI5oazWyg_7 = mulInt(cap, ((NI) 2));
		n = newSeq_FGDbRopuA4y4tNQGp9cEEsg(((NI)chckRange((NI)(TM_NdgYN5HU2ty0qMI5oazWyg_7), ((NI) 0), ((NI) IL64(9223372036854775807)))));
		{
			NI i;
			tyProc_IIomJ6ptE6vfJ5zRbATgkQ x;
			tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg colontmp_;
			NI i_2;
			i = (NI)0;
			memset((void*)(&x), 0, sizeof(x));
			memset((void*)(&colontmp_), 0, sizeof(colontmp_));
			nimln_(132, "deques.nim");
			memcpy((void*)(&colontmp_), (NIM_CONST void*)(&(*deq)), sizeof(colontmp_));
			nimln_(112, "deques.nim");
			i_2 = colontmp_.head;
			{
				NI c;
				NI colontmp__2;
				NI i_3;
				c = (NI)0;
				colontmp__2 = (NI)0;
				nimln_(113, "deques.nim");
				colontmp__2 = colontmp_.count;
				nimln_(3832, "system.nim");
				i_3 = ((NI) 0);
				{
					nimln_(3833, "system.nim");
					while (1) {
						NI TM_NdgYN5HU2ty0qMI5oazWyg_8;
						NI TM_NdgYN5HU2ty0qMI5oazWyg_9;
						if (!(i_3 < colontmp__2)) goto LA9;
						nimln_(3834, "system.nim");
						c = i_3;
						nimln_(114, "deques.nim");
						i = c;
						if ((NU)(i_2) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						x.ClE_0 = colontmp_.data->data[i_2].ClE_0;
						x.ClP_0 = colontmp_.data->data[i_2].ClP_0;
						if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
						nimln_(133, "deques.nim");
						asgnRef((void**) (&n->data[i].ClE_0), x.ClE_0);
						n->data[i].ClP_0 = x.ClP_0;
						nimln_(115, "deques.nim");
						TM_NdgYN5HU2ty0qMI5oazWyg_8 = addInt(i_2, ((NI) 1));
						i_2 = (NI)((NI)(TM_NdgYN5HU2ty0qMI5oazWyg_8) & colontmp_.mask);
						nimln_(3835, "system.nim");
						TM_NdgYN5HU2ty0qMI5oazWyg_9 = addInt(i_3, ((NI) 1));
						i_3 = (NI)(TM_NdgYN5HU2ty0qMI5oazWyg_9);
					} LA9: ;
				}
			}
		}
		nimln_(134, "deques.nim");
		unsureAsgnRef((void**) (&(*deq).data), n);
		nimln_(135, "deques.nim");
		TM_NdgYN5HU2ty0qMI5oazWyg_10 = mulInt(cap, ((NI) 2));
		TM_NdgYN5HU2ty0qMI5oazWyg_11 = subInt((NI)(TM_NdgYN5HU2ty0qMI5oazWyg_10), ((NI) 1));
		(*deq).mask = (NI)(TM_NdgYN5HU2ty0qMI5oazWyg_11);
		nimln_(136, "deques.nim");
		(*deq).tail = (*deq).count;
		nimln_(137, "deques.nim");
		(*deq).head = ((NI) 0);
	}
	LA4_: ;
	popFrame();
}

N_NIMCALL(void, addLast_vqmMzAk3ZYGwAn5hysAc6w)(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg* deq, tyProc_IIomJ6ptE6vfJ5zRbATgkQ item) {
	NI TM_NdgYN5HU2ty0qMI5oazWyg_12;
	NI TM_NdgYN5HU2ty0qMI5oazWyg_13;
	nimfr_("addLast", "deques.nim");
	nimln_(148, "deques.nim");
	expandIfNeeded_yUfcbmt639aJ6tr007RgLpQ(deq);
	nimln_(149, "deques.nim");
	TM_NdgYN5HU2ty0qMI5oazWyg_12 = addInt((*deq).count, ((NI) 1));
	(*deq).count = (NI)(TM_NdgYN5HU2ty0qMI5oazWyg_12);
	if ((NU)((*deq).tail) >= (NU)((*deq).data->Sup.len)) raiseIndexError();
	nimln_(150, "deques.nim");
	asgnRef((void**) (&(*deq).data->data[(*deq).tail].ClE_0), item.ClE_0);
	(*deq).data->data[(*deq).tail].ClP_0 = item.ClP_0;
	nimln_(151, "deques.nim");
	TM_NdgYN5HU2ty0qMI5oazWyg_13 = addInt((*deq).tail, ((NI) 1));
	(*deq).tail = (NI)((NI)(TM_NdgYN5HU2ty0qMI5oazWyg_13) & (*deq).mask);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dequesInit000)(void) {
	nimfr_("deques", "deques.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dequesDatInit000)(void) {
static TNimNode* TM_NdgYN5HU2ty0qMI5oazWyg_4[5];
static TNimNode* TM_NdgYN5HU2ty0qMI5oazWyg_5[5];
static TNimNode TM_NdgYN5HU2ty0qMI5oazWyg_0[12];
NTI_lXZKLUMbpAcAUzeVrG09bNg_.size = sizeof(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg);
NTI_lXZKLUMbpAcAUzeVrG09bNg_.kind = 18;
NTI_lXZKLUMbpAcAUzeVrG09bNg_.base = 0;
TM_NdgYN5HU2ty0qMI5oazWyg_4[0] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[1];
TM_NdgYN5HU2ty0qMI5oazWyg_0[1].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[1].offset = offsetof(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg, data);
TM_NdgYN5HU2ty0qMI5oazWyg_0[1].typ = (&NTI_WF89a8QyKeDCh4DYWTmSiBg_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[1].name = "data";
TM_NdgYN5HU2ty0qMI5oazWyg_4[1] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[2];
TM_NdgYN5HU2ty0qMI5oazWyg_0[2].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[2].offset = offsetof(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg, head);
TM_NdgYN5HU2ty0qMI5oazWyg_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[2].name = "head";
TM_NdgYN5HU2ty0qMI5oazWyg_4[2] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[3];
TM_NdgYN5HU2ty0qMI5oazWyg_0[3].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[3].offset = offsetof(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg, tail);
TM_NdgYN5HU2ty0qMI5oazWyg_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[3].name = "tail";
TM_NdgYN5HU2ty0qMI5oazWyg_4[3] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[4];
TM_NdgYN5HU2ty0qMI5oazWyg_0[4].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[4].offset = offsetof(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg, count);
TM_NdgYN5HU2ty0qMI5oazWyg_0[4].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[4].name = "count";
TM_NdgYN5HU2ty0qMI5oazWyg_4[4] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[5];
TM_NdgYN5HU2ty0qMI5oazWyg_0[5].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[5].offset = offsetof(tyObject_Deque_lXZKLUMbpAcAUzeVrG09bNg, mask);
TM_NdgYN5HU2ty0qMI5oazWyg_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[5].name = "mask";
TM_NdgYN5HU2ty0qMI5oazWyg_0[0].len = 5; TM_NdgYN5HU2ty0qMI5oazWyg_0[0].kind = 2; TM_NdgYN5HU2ty0qMI5oazWyg_0[0].sons = &TM_NdgYN5HU2ty0qMI5oazWyg_4[0];
NTI_lXZKLUMbpAcAUzeVrG09bNg_.node = &TM_NdgYN5HU2ty0qMI5oazWyg_0[0];
NTI_104cP4q8EyDjHrsh1Phrmw_.size = sizeof(tyObject_Deque_104cP4q8EyDjHrsh1Phrmw);
NTI_104cP4q8EyDjHrsh1Phrmw_.kind = 18;
NTI_104cP4q8EyDjHrsh1Phrmw_.base = 0;
NTI_104cP4q8EyDjHrsh1Phrmw_.flags = 2;
TM_NdgYN5HU2ty0qMI5oazWyg_5[0] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[7];
TM_NdgYN5HU2ty0qMI5oazWyg_0[7].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[7].offset = offsetof(tyObject_Deque_104cP4q8EyDjHrsh1Phrmw, data);
TM_NdgYN5HU2ty0qMI5oazWyg_0[7].typ = (&NTI_sM4lkSb7zS6F7OVMvW9cffQ_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[7].name = "data";
TM_NdgYN5HU2ty0qMI5oazWyg_5[1] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[8];
TM_NdgYN5HU2ty0qMI5oazWyg_0[8].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[8].offset = offsetof(tyObject_Deque_104cP4q8EyDjHrsh1Phrmw, head);
TM_NdgYN5HU2ty0qMI5oazWyg_0[8].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[8].name = "head";
TM_NdgYN5HU2ty0qMI5oazWyg_5[2] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[9];
TM_NdgYN5HU2ty0qMI5oazWyg_0[9].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[9].offset = offsetof(tyObject_Deque_104cP4q8EyDjHrsh1Phrmw, tail);
TM_NdgYN5HU2ty0qMI5oazWyg_0[9].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[9].name = "tail";
TM_NdgYN5HU2ty0qMI5oazWyg_5[3] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[10];
TM_NdgYN5HU2ty0qMI5oazWyg_0[10].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[10].offset = offsetof(tyObject_Deque_104cP4q8EyDjHrsh1Phrmw, count);
TM_NdgYN5HU2ty0qMI5oazWyg_0[10].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[10].name = "count";
TM_NdgYN5HU2ty0qMI5oazWyg_5[4] = &TM_NdgYN5HU2ty0qMI5oazWyg_0[11];
TM_NdgYN5HU2ty0qMI5oazWyg_0[11].kind = 1;
TM_NdgYN5HU2ty0qMI5oazWyg_0[11].offset = offsetof(tyObject_Deque_104cP4q8EyDjHrsh1Phrmw, mask);
TM_NdgYN5HU2ty0qMI5oazWyg_0[11].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_NdgYN5HU2ty0qMI5oazWyg_0[11].name = "mask";
TM_NdgYN5HU2ty0qMI5oazWyg_0[6].len = 5; TM_NdgYN5HU2ty0qMI5oazWyg_0[6].kind = 2; TM_NdgYN5HU2ty0qMI5oazWyg_0[6].sons = &TM_NdgYN5HU2ty0qMI5oazWyg_5[0];
NTI_104cP4q8EyDjHrsh1Phrmw_.node = &TM_NdgYN5HU2ty0qMI5oazWyg_0[6];
}

