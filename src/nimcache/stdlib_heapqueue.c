/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -pthread  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_heapqueue.o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_heapqueue.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tySequence_tCXsCfAd03XtyGJVg3kHhg tySequence_tCXsCfAd03XtyGJVg3kHhg;
typedef struct tyTuple_h8SeyS9aRwdD6lpWqt9anV3A tyTuple_h8SeyS9aRwdD6lpWqt9anV3A;
typedef struct tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg;
typedef struct RootObj RootObj;
typedef struct tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ;
typedef struct Exception Exception;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TSafePoint TSafePoint;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ;
struct tyTuple_h8SeyS9aRwdD6lpWqt9anV3A {
NF Field0;
tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg* Field1;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NF tyArray_SBX73RxxTewX4sqVYGfdEA[1001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_SBX73RxxTewX4sqVYGfdEA tls;
};
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
struct RootObj {
TNimType* m_type;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ {
tyProc_IIomJ6ptE6vfJ5zRbATgkQ function;
tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ* next;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg {
  RootObj Sup;
tyObject_CallbackList_tKSBWiaJMWD3JZxwqg7UFQ callbacks;
NIM_BOOL finished;
Exception* error;
NimStringDesc* errorStackTrace;
NimStringDesc* stackTrace;
NI id;
NimStringDesc* fromProc;
};
struct tyObject_FuturecolonObjectType__SmxCgsot45ayPNDBegkWAg {
  tyObject_FutureBasecolonObjectType__cnXnCCtV9cjKaEq9alHheOFg Sup;
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
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
Exception* up;
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
struct tySequence_tCXsCfAd03XtyGJVg3kHhg {
  TGenericSeq Sup;
  tyTuple_h8SeyS9aRwdD6lpWqt9anV3A data[SEQ_DECL_SIZE];
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
static N_INLINE(void, pop_QCQNB0ZBy9bm2KRBog9cFK7Aheapqueue)(tySequence_tCXsCfAd03XtyGJVg3kHhg** s, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A* Result);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NOINLINE(void, chckNil)(void* p);
static N_INLINE(NI, len_MbUHcYx9cYb9bcgf9c9bDUNdKwasyncdispatch)(tySequence_tCXsCfAd03XtyGJVg3kHhg* h);
static N_INLINE(void, X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch)(tySequence_tCXsCfAd03XtyGJVg3kHhg* h, NI i, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A* Result);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
static N_INLINE(void, X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue)(tySequence_tCXsCfAd03XtyGJVg3kHhg** h, NI i, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A v);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, siftup_cV9czR9cIYHg0kFHmrHlD4nw)(tySequence_tCXsCfAd03XtyGJVg3kHhg** heap, NI p);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NIM_BOOL, heapCmp_iMuqO3tR8Yxs19c9c8MT2uUgheapqueue)(tyTuple_h8SeyS9aRwdD6lpWqt9anV3A x, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A y);
N_NIMCALL(NIM_BOOL, lt__RPwNdqiecAXtp3qcgn5S7g)(tyTuple_h8SeyS9aRwdD6lpWqt9anV3A x, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A y);
N_NIMCALL(void, siftdown_2LdT3wpZL6cmUR0Idj5aDQ)(tySequence_tCXsCfAd03XtyGJVg3kHhg** heap, NI startpos, NI p);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
extern TNimType NTI_h8SeyS9aRwdD6lpWqt9anV3A_;

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

static N_INLINE(void, pop_QCQNB0ZBy9bm2KRBog9cFK7Aheapqueue)(tySequence_tCXsCfAd03XtyGJVg3kHhg** s, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A* Result) {
	NI L;
	NI T1_;
	NI TM_f2bNHCHm2LvO7iSrwQtdiQ_2;
	nimfr_("pop", "system.nim");
	nimln_(2324, "system.nim");
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	TM_f2bNHCHm2LvO7iSrwQtdiQ_2 = subInt(T1_, ((NI) 1));
	L = (NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_2);
	nimln_(2325, "system.nim");
	if ((NU)(L) >= (NU)((*s)->Sup.len)) raiseIndexError();
	(*Result).Field0 = (*s)->data[L].Field0;
	unsureAsgnRef((void**) (&(*Result).Field1), (*s)->data[L].Field1);
	nimln_(2326, "system.nim");
	(*s) = (tySequence_tCXsCfAd03XtyGJVg3kHhg*) setLengthSeq(&((*s))->Sup, sizeof(tyTuple_h8SeyS9aRwdD6lpWqt9anV3A), ((NI)chckRange(L, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
}

static N_INLINE(NI, len_MbUHcYx9cYb9bcgf9c9bDUNdKwasyncdispatch)(tySequence_tCXsCfAd03XtyGJVg3kHhg* h) {
	NI result;
	NI T1_;
	nimfr_("len", "heapqueue.nim");
	result = (NI)0;
	nimln_(15, "heapqueue.nim");
	T1_ = (h ? h->Sup.len : 0);
	result = T1_;
	popFrame();
	return result;
}

static N_INLINE(void, X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch)(tySequence_tCXsCfAd03XtyGJVg3kHhg* h, NI i, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A* Result) {
	nimfr_("[]", "heapqueue.nim");
	nimln_(16, "heapqueue.nim");
	if ((NU)(i) >= (NU)(h->Sup.len)) raiseIndexError();
	(*Result).Field0 = h->data[i].Field0;
	unsureAsgnRef((void**) (&(*Result).Field1), h->data[i].Field1);
	popFrame();
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

static N_INLINE(void, X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue)(tySequence_tCXsCfAd03XtyGJVg3kHhg** h, NI i, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A v) {
	nimfr_("[]=", "heapqueue.nim");
	if ((NU)(i) >= (NU)((*h)->Sup.len)) raiseIndexError();
	nimln_(17, "heapqueue.nim");
	(*h)->data[i].Field0 = v.Field0;
	asgnRef((void**) (&(*h)->data[i].Field1), v.Field1);
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

static N_INLINE(NIM_BOOL, heapCmp_iMuqO3tR8Yxs19c9c8MT2uUgheapqueue)(tyTuple_h8SeyS9aRwdD6lpWqt9anV3A x, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A y) {
	NIM_BOOL result;
	nimfr_("heapCmp", "heapqueue.nim");
{	result = (NIM_BOOL)0;
	nimln_(21, "heapqueue.nim");
	result = lt__RPwNdqiecAXtp3qcgn5S7g(x, y);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(void, siftdown_2LdT3wpZL6cmUR0Idj5aDQ)(tySequence_tCXsCfAd03XtyGJVg3kHhg** heap, NI startpos, NI p) {
	NI pos;
	tyTuple_h8SeyS9aRwdD6lpWqt9anV3A newitem;
	nimfr_("siftdown", "heapqueue.nim");
	nimln_(27, "heapqueue.nim");
	pos = p;
	memset((void*)(&newitem), 0, sizeof(newitem));
	nimln_(28, "heapqueue.nim");
	chckNil((void*)(&newitem));
	memset((void*)(&newitem), 0, sizeof(newitem));
	X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), pos, (&newitem));
	{
		nimln_(31, "heapqueue.nim");
		while (1) {
			NI parentpos;
			NI TM_f2bNHCHm2LvO7iSrwQtdiQ_8;
			tyTuple_h8SeyS9aRwdD6lpWqt9anV3A parent;
			if (!(startpos < pos)) goto LA2;
			nimln_(32, "heapqueue.nim");
			TM_f2bNHCHm2LvO7iSrwQtdiQ_8 = subInt(pos, ((NI) 1));
			parentpos = (NI)((NU64)((NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_8)) >> (NU64)(((NI) 1)));
			memset((void*)(&parent), 0, sizeof(parent));
			nimln_(33, "heapqueue.nim");
			chckNil((void*)(&parent));
			memset((void*)(&parent), 0, sizeof(parent));
			X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), parentpos, (&parent));
			nimln_(34, "heapqueue.nim");
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = heapCmp_iMuqO3tR8Yxs19c9c8MT2uUgheapqueue(newitem, parent);
				if (!T5_) goto LA6_;
				nimln_(35, "heapqueue.nim");
				X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue(heap, pos, parent);
				nimln_(36, "heapqueue.nim");
				pos = parentpos;
			}
			goto LA3_;
			LA6_: ;
			{
				nimln_(38, "heapqueue.nim");
				goto LA1;
			}
			LA3_: ;
		} LA2: ;
	} LA1: ;
	nimln_(39, "heapqueue.nim");
	X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue(heap, pos, newitem);
	popFrame();
}

N_NIMCALL(void, siftup_cV9czR9cIYHg0kFHmrHlD4nw)(tySequence_tCXsCfAd03XtyGJVg3kHhg** heap, NI p) {
	NI endpos;
	NI pos;
	NI startpos;
	tyTuple_h8SeyS9aRwdD6lpWqt9anV3A newitem;
	NI childpos;
	NI TM_f2bNHCHm2LvO7iSrwQtdiQ_3;
	NI TM_f2bNHCHm2LvO7iSrwQtdiQ_4;
	nimfr_("siftup", "heapqueue.nim");
	nimln_(42, "heapqueue.nim");
	endpos = len_MbUHcYx9cYb9bcgf9c9bDUNdKwasyncdispatch((*heap));
	nimln_(43, "heapqueue.nim");
	pos = p;
	nimln_(44, "heapqueue.nim");
	startpos = pos;
	memset((void*)(&newitem), 0, sizeof(newitem));
	nimln_(45, "heapqueue.nim");
	chckNil((void*)(&newitem));
	memset((void*)(&newitem), 0, sizeof(newitem));
	X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), pos, (&newitem));
	nimln_(47, "heapqueue.nim");
	TM_f2bNHCHm2LvO7iSrwQtdiQ_3 = mulInt(((NI) 2), pos);
	TM_f2bNHCHm2LvO7iSrwQtdiQ_4 = addInt((NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_3), ((NI) 1));
	childpos = (NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_4);
	{
		nimln_(48, "heapqueue.nim");
		while (1) {
			NI rightpos;
			NI TM_f2bNHCHm2LvO7iSrwQtdiQ_5;
			tyTuple_h8SeyS9aRwdD6lpWqt9anV3A T12_;
			NI TM_f2bNHCHm2LvO7iSrwQtdiQ_6;
			NI TM_f2bNHCHm2LvO7iSrwQtdiQ_7;
			if (!(childpos < endpos)) goto LA2;
			nimln_(50, "heapqueue.nim");
			TM_f2bNHCHm2LvO7iSrwQtdiQ_5 = addInt(childpos, ((NI) 1));
			rightpos = (NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_5);
			nimln_(51, "heapqueue.nim");
			{
				NIM_BOOL T5_;
				tyTuple_h8SeyS9aRwdD6lpWqt9anV3A T7_;
				tyTuple_h8SeyS9aRwdD6lpWqt9anV3A T8_;
				NIM_BOOL T9_;
				T5_ = (NIM_BOOL)0;
				T5_ = (rightpos < endpos);
				if (!(T5_)) goto LA6_;
				memset((void*)(&T7_), 0, sizeof(T7_));
				X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), childpos, (&T7_));
				memset((void*)(&T8_), 0, sizeof(T8_));
				X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), rightpos, (&T8_));
				T9_ = (NIM_BOOL)0;
				T9_ = heapCmp_iMuqO3tR8Yxs19c9c8MT2uUgheapqueue(T7_, T8_);
				T5_ = !(T9_);
				LA6_: ;
				if (!T5_) goto LA10_;
				nimln_(52, "heapqueue.nim");
				childpos = rightpos;
			}
			LA10_: ;
			nimln_(54, "heapqueue.nim");
			memset((void*)(&T12_), 0, sizeof(T12_));
			X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), childpos, (&T12_));
			X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue(heap, pos, T12_);
			nimln_(55, "heapqueue.nim");
			pos = childpos;
			nimln_(56, "heapqueue.nim");
			TM_f2bNHCHm2LvO7iSrwQtdiQ_6 = mulInt(((NI) 2), pos);
			TM_f2bNHCHm2LvO7iSrwQtdiQ_7 = addInt((NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_6), ((NI) 1));
			childpos = (NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_7);
		} LA2: ;
	}
	nimln_(59, "heapqueue.nim");
	X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue(heap, pos, newitem);
	nimln_(60, "heapqueue.nim");
	siftdown_2LdT3wpZL6cmUR0Idj5aDQ(heap, startpos, pos);
	popFrame();
}

N_NIMCALL(void, pop_Mc9al9cevONzXYNcXlhSyX0w)(tySequence_tCXsCfAd03XtyGJVg3kHhg** heap, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A* Result) {
	tyTuple_h8SeyS9aRwdD6lpWqt9anV3A lastelt;
	nimfr_("pop", "heapqueue.nim");
	memset((void*)(&lastelt), 0, sizeof(lastelt));
	nimln_(69, "heapqueue.nim");
	chckNil((void*)(&lastelt));
	memset((void*)(&lastelt), 0, sizeof(lastelt));
	pop_QCQNB0ZBy9bm2KRBog9cFK7Aheapqueue(((tySequence_tCXsCfAd03XtyGJVg3kHhg*) (heap)), (&lastelt));
	nimln_(70, "heapqueue.nim");
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = len_MbUHcYx9cYb9bcgf9c9bDUNdKwasyncdispatch((*heap));
		if (!(((NI) 0) < T3_)) goto LA4_;
		nimln_(71, "heapqueue.nim");
		chckNil((void*)Result);
		genericReset((void*)Result, (&NTI_h8SeyS9aRwdD6lpWqt9anV3A_));
		X5BX5D__f9aTbbbrR4Jun2c9bhbx9c8UQasyncdispatch((*heap), ((NI) 0), Result);
		nimln_(72, "heapqueue.nim");
		X5BX5Deq__uxYqk5EjyY9bgre9cMDUNmmgheapqueue(heap, ((NI) 0), lastelt);
		nimln_(73, "heapqueue.nim");
		siftup_cV9czR9cIYHg0kFHmrHlD4nw(heap, ((NI) 0));
	}
	goto LA1_;
	LA4_: ;
	{
		nimln_(75, "heapqueue.nim");
		(*Result).Field0 = lastelt.Field0;
		unsureAsgnRef((void**) (&(*Result).Field1), lastelt.Field1);
	}
	LA1_: ;
	popFrame();
}

N_NIMCALL(void, push_1H7LO5B1VN4CfLi66wdCZA)(tySequence_tCXsCfAd03XtyGJVg3kHhg** heap, tyTuple_h8SeyS9aRwdD6lpWqt9anV3A item) {
	NI T1_;
	NI T2_;
	NI TM_f2bNHCHm2LvO7iSrwQtdiQ_9;
	nimfr_("push", "heapqueue.nim");
	nimln_(64, "heapqueue.nim");
	(*heap) = (tySequence_tCXsCfAd03XtyGJVg3kHhg*) incrSeqV2(&((*heap))->Sup, sizeof(tyTuple_h8SeyS9aRwdD6lpWqt9anV3A));
	T1_ = (*heap)->Sup.len++;
	(*heap)->data[T1_].Field0 = item.Field0;
	asgnRef((void**) (&(*heap)->data[T1_].Field1), item.Field1);
	nimln_(65, "heapqueue.nim");
	T2_ = (NI)0;
	T2_ = len_MbUHcYx9cYb9bcgf9c9bDUNdKwasyncdispatch((*heap));
	TM_f2bNHCHm2LvO7iSrwQtdiQ_9 = subInt(T2_, ((NI) 1));
	siftdown_2LdT3wpZL6cmUR0Idj5aDQ(heap, ((NI) 0), (NI)(TM_f2bNHCHm2LvO7iSrwQtdiQ_9));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_heapqueueInit000)(void) {
	nimfr_("heapqueue", "heapqueue.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_heapqueueDatInit000)(void) {
}

