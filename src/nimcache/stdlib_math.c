/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -pthread  -I/usr/local/Cellar/nim/0.17.2/nim/lib -o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_math.o /Users/joshuahorwitz/nim/ChatApp/src/nimcache/stdlib_math.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
#define _GNU_SOURCE
#include <pthread.h>
#include <math.h>
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
typedef struct Exception Exception;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ tyObject_PDispatchercolonObjectType__pnVRciItPqJkU9bkmY2UaWQ;
typedef NF tyArray_SBX73RxxTewX4sqVYGfdEA[1001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_SBX73RxxTewX4sqVYGfdEA tls;
};
typedef NU8 tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA;
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct TGenericSeq {
NI len;
NI reserved;
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
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
N_NIMCALL(NI, binom_TP1l1uTkkFkPa6yon2PyGg)(NI n, NI k);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
static N_INLINE(void*, threadVarGetValue_F5t3jb8jndWAZxsO5Ba9bHwsystem)(pthread_key_t s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, fac_07E8HBGS9a9a9amVjbwI9a9a7yg)(NI n);
N_NIMCALL(tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA, classify_rfodLs2J9b87EDgWnWZoObA)(NF x);
N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x);
N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x);
N_NIMCALL(NI, countBits32_hJyETcwTUJpi9clvlrTbRyA)(NI32 n);
extern pthread_key_t globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;

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

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
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

N_NIMCALL(NI, binom_TP1l1uTkkFkPa6yon2PyGg)(NI n, NI k) {
	NI result;
	nimfr_("binom", "math.nim");
{	result = (NI)0;
	nimln_(26, "math.nim");
	{
		if (!(k <= ((NI) 0))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	nimln_(27, "math.nim");
	{
		NI TM_YqBQIdfvZX5pt75kDBsDLg_2;
		NI TM_YqBQIdfvZX5pt75kDBsDLg_3;
		TM_YqBQIdfvZX5pt75kDBsDLg_2 = mulInt(((NI) 2), k);
		if (!(n < (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_2))) goto LA7_;
		TM_YqBQIdfvZX5pt75kDBsDLg_3 = subInt(n, k);
		result = binom_TP1l1uTkkFkPa6yon2PyGg(n, (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_3));
		goto BeforeRet_;
	}
	LA7_: ;
	nimln_(28, "math.nim");
	result = n;
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(1973, "system.nim");
		res = ((NI) 2);
		{
			nimln_(1974, "system.nim");
			while (1) {
				NI TM_YqBQIdfvZX5pt75kDBsDLg_4;
				NI TM_YqBQIdfvZX5pt75kDBsDLg_5;
				NI TM_YqBQIdfvZX5pt75kDBsDLg_6;
				NI TM_YqBQIdfvZX5pt75kDBsDLg_7;
				NI TM_YqBQIdfvZX5pt75kDBsDLg_8;
				if (!(res <= k)) goto LA11;
				nimln_(1975, "system.nim");
				i = res;
				nimln_(30, "math.nim");
				TM_YqBQIdfvZX5pt75kDBsDLg_4 = addInt(n, ((NI) 1));
				TM_YqBQIdfvZX5pt75kDBsDLg_5 = subInt((NI)(TM_YqBQIdfvZX5pt75kDBsDLg_4), i);
				TM_YqBQIdfvZX5pt75kDBsDLg_6 = mulInt(result, (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_5));
				TM_YqBQIdfvZX5pt75kDBsDLg_7 = divInt((NI)(TM_YqBQIdfvZX5pt75kDBsDLg_6), i);
				result = (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_7);
				nimln_(1976, "system.nim");
				TM_YqBQIdfvZX5pt75kDBsDLg_8 = addInt(res, ((NI) 1));
				res = (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_8);
			} LA11: ;
		}
	}
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, fac_07E8HBGS9a9a9amVjbwI9a9a7yg)(NI n) {
	NI result;
	nimfr_("fac", "math.nim");
	result = (NI)0;
	nimln_(34, "math.nim");
	result = ((NI) 1);
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(1973, "system.nim");
		res = ((NI) 2);
		{
			nimln_(1974, "system.nim");
			while (1) {
				NI TM_YqBQIdfvZX5pt75kDBsDLg_9;
				NI TM_YqBQIdfvZX5pt75kDBsDLg_10;
				if (!(res <= n)) goto LA3;
				nimln_(1975, "system.nim");
				i = res;
				nimln_(36, "math.nim");
				TM_YqBQIdfvZX5pt75kDBsDLg_9 = mulInt(result, i);
				result = (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_9);
				nimln_(1976, "system.nim");
				TM_YqBQIdfvZX5pt75kDBsDLg_10 = addInt(res, ((NI) 1));
				res = (NI)(TM_YqBQIdfvZX5pt75kDBsDLg_10);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA, classify_rfodLs2J9b87EDgWnWZoObA)(NF x) {
	tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA result;
{	result = (tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA)0;
	{
		if (!(x == 0.0)) goto LA3_;
		{
			if (!(((NF)(1.0000000000000000e+00) / (NF)(x)) == INF)) goto LA7_;
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 2);
			goto BeforeRet_;
		}
		goto LA5_;
		LA7_: ;
		{
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 3);
			goto BeforeRet_;
		}
		LA5_: ;
	}
	LA3_: ;
	{
		if (!(((NF)(x) * (NF)(5.0000000000000000e-01)) == x)) goto LA12_;
		{
			if (!(0.0 < x)) goto LA16_;
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 5);
			goto BeforeRet_;
		}
		goto LA14_;
		LA16_: ;
		{
			result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 6);
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		if (!!((x == x))) goto LA21_;
		result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 4);
		goto BeforeRet_;
	}
	LA21_: ;
	result = ((tyEnum_FloatClass_pPga1yW9b8J9cwNnm9b1aPRnA) 0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 0) < x);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x & (NI)(x - ((NI) 1))) == ((NI) 0));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(((NI) 32))));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(((NI) 16))));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(((NI) 8))));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(((NI) 4))));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(((NI) 2))));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(((NI) 1))));
	result += ((NI) ((NI)(((NI) 1) + ((NI) ((x <= ((NI) 0)))))));
	return result;
}

N_NIMCALL(NI, countBits32_hJyETcwTUJpi9clvlrTbRyA)(NI32 n) {
	NI result;
	NI32 v;
	result = (NI)0;
	v = n;
	v = (NI32)((NU32)(v) - (NU32)((NI32)((NI32)((NU32)(v) >> (NU32)(((NI32) 1))) & ((NI32) 1431655765))));
	v = (NI32)((NU32)((NI32)(v & ((NI32) 858993459))) + (NU32)((NI32)((NI32)((NU32)(v) >> (NU32)(((NI32) 2))) & ((NI32) 858993459))));
	result = ((NI) ((NI32)((NU32)((NI32)((NU32)((NI32)((NI32)((NU32)(v) + (NU32)((NI32)((NU32)(v) >> (NU32)(((NI32) 4))))) & ((NI32) 252645135))) * (NU32)(((NI32) 16843009)))) >> (NU32)(((NI32) 24)))));
	return result;
}

N_NIMCALL(NF, round_FL9bhksfuQsfLDCxRHuknsg)(NF x, NI places) {
	NF result;
	result = (NF)0;
	{
		if (!(places == ((NI) 0))) goto LA3_;
		result = round(x);
	}
	goto LA1_;
	LA3_: ;
	{
		NF mult;
		NF T6_;
		mult = pow(1.0000000000000000e+01, ((NF) (places)));
		T6_ = (NF)0;
		T6_ = round(((NF)(x) * (NF)(mult)));
		result = ((NF)(T6_) / (NF)(mult));
	}
	LA1_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void) {
	nimfr_("math", "math.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void) {
}

