#ifndef _ALL_STATS_C_INCLUDED_
#define _ALL_STATS_C_INCLUDED_
#include "statistics.h"

///////////////////////////////////////////////////////////////////////////////////////////////
/// \brief knob variables holder
///////////////////////////////////////////////////////////////////////////////////////////////
class all_stats_c {
	public:
		/**
		 * Constructor
		 */
		all_stats_c(ProcessorStatistics* procStat);

		/**
		 * Constructor
		 */
		~all_stats_c();

		/**
		 * Constructor
		 */
		void initialize(ProcessorStatistics*, CoreStatistics*);

		
		// ============= ../def/alloc.stat.def =============
		COUNT_Stat* m_ALLOC_COUNT;
		
		// ============= ../def/bp.stat.def =============
		DIST_Stat* m_DIST_BP_ON_PATH_CORRECT;
		COUNT_Stat* m_BP_ON_PATH_CORRECT;
		COUNT_Stat* m_BP_ON_PATH_MISPREDICT;
		COUNT_Stat* m_BP_ON_PATH_MISFETCH;
		DIST_Stat* m_DIST_BP_OFF_PATH_CORRECT;
		COUNT_Stat* m_BP_OFF_PATH_CORRECT;
		COUNT_Stat* m_BP_OFF_PATH_MISPREDICT;
		COUNT_Stat* m_BP_OFF_PATH_MISFETCH;
		COUNT_Stat* m_BP_MISPRED_STALL;
		COUNT_Stat* m_BP_RESOLVED;
		COUNT_Stat* m_BP_REDIRECT_RESOLVED;
		COUNT_Stat* m_PERFECT_TARGET_PRED;
		
		// ============= ../def/core.stat.def =============
		DIST_Stat* m_DIST_SCHED_FAILED_REASON_SUCCESS;
		COUNT_Stat* m_SCHED_FAILED_REASON_SUCCESS;
		COUNT_Stat* m_SCHED_FAILED_OPERANDS_NOT_READY;
		COUNT_Stat* m_SCHED_FAILED_NO_PORTS;
		COUNT_Stat* m_NUM_SAMPLES;
		RATIO_Stat* m_NUM_ACTIVE_BLOCKS;
		RATIO_Stat* m_NUM_ACTIVE_THREADS;
		COUNT_Stat* m_NUM_SCHED_IDLE_CYCLE;
		COUNT_Stat* m_NUM_NO_SCHED_CYCLE;
		COUNT_Stat* m_DISPATCHED_INST;
		RATIO_Stat* m_DISPATCH_WAIT;
		COUNT_Stat* m_CORE_DISPATCHED_INST;
		RATIO_Stat* m_CORE_DISPATCH_WAIT;
		COUNT_Stat* m_CORE_CYCLES;
		RATIO_Stat* m_CORE_SCHED_THREADS;
		COUNT_Stat* m_NUM_NO_FETCH_CYCLES;
		COUNT_Stat* m_CORE_NUM_NO_FETCH_CYCLES;
		COUNT_Stat* m_CORE_NUM_NO_FETCH_CYCLES_WITH_READY_THREADS;
		COUNT_Stat* m_CORE_NUM_FETCH_CYCLES;
		RATIO_Stat* m_CORE_FETCH_DELTA;
		COUNT_Stat* m_CORE_NUM_RETIRE_CYCLES;
		RATIO_Stat* m_CORE_RETIRE_DELTA;
		COUNT_Stat* m_AVG_CORE_IDLE_CYCLE;
		
		// ============= ../def/core_trace.stat.def =============
		
		// ============= ../def/dram.stat.def =============
		COUNT_Stat* m_DRAM_PRECHARGE;
		COUNT_Stat* m_DRAM_ACTIVATE;
		COUNT_Stat* m_DRAM_COLUMN;
		COUNT_Stat* m_DRAM_AVG_LATENCY_BASE;
		RATIO_Stat* m_DRAM_AVG_LATENCY;
		COUNT_Stat* m_BANDWIDTH_TOT;
		COUNT_Stat* m_DRAM_CHANNEL0_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL1_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL2_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL3_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL4_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL5_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL6_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL7_BANDWIDTH_SATURATED;
		COUNT_Stat* m_DRAM_CHANNEL0_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL1_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL2_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL3_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL4_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL5_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL6_DBUS_IDLE;
		COUNT_Stat* m_DRAM_CHANNEL7_DBUS_IDLE;
		
		// ============= ../def/general.stat.def =============
		COUNT_Stat* m_INST_COUNT_TOT;
		COUNT_Stat* m_INST_COUNT;
		COUNT_Stat* m_UOP_COUNT_TOT;
		COUNT_Stat* m_UOP_COUNT;
		COUNT_Stat* m_CYC_COUNT_TOT;
		COUNT_Stat* m_CYC_COUNT;
		COUNT_Stat* m_EXE_TIME;
		COUNT_Stat* m_NUM_REPEAT;
		COUNT_Stat* m_CYC_COUNT_X86;
		COUNT_Stat* m_CYC_COUNT_PTX;
		COUNT_Stat* m_AVG_BLOCK_EXE_CYCLE;
		COUNT_Stat* m_AVG_BLOCK_EXE_CYCLE_BASE;
		COUNT_Stat* m_PROGRESS_ERROR;
		COUNT_Stat* m_FILE_OPEN_ERROR;
		COUNT_Stat* m_NUM_THREAD;
		COUNT_Stat* m_APPL_CYC_COUNT_BASE0;
		COUNT_Stat* m_APPL_CYC_COUNT_BASE1;
		COUNT_Stat* m_APPL_CYC_COUNT_BASE2;
		COUNT_Stat* m_APPL_CYC_COUNT_BASE3;
		COUNT_Stat* m_APPL_CYC_COUNT_BASE4;
		RATIO_Stat* m_APPL_CYC_COUNT0;
		RATIO_Stat* m_APPL_CYC_COUNT1;
		RATIO_Stat* m_APPL_CYC_COUNT2;
		RATIO_Stat* m_APPL_CYC_COUNT3;
		RATIO_Stat* m_APPL_CYC_COUNT4;
		COUNT_Stat* m_CPI_DELTA_BASE0;
		COUNT_Stat* m_CPI_DELTA_BASE1;
		COUNT_Stat* m_CPI_DELTA_BASE2;
		COUNT_Stat* m_CPI_DELTA_BASE3;
		COUNT_Stat* m_CPI_DELTA_BASE4;
		RATIO_Stat* m_CPI_DELTA0;
		RATIO_Stat* m_CPI_DELTA1;
		RATIO_Stat* m_CPI_DELTA2;
		RATIO_Stat* m_CPI_DELTA3;
		RATIO_Stat* m_CPI_DELTA4;
		COUNT_Stat* m_CYCLE_CPU;
		COUNT_Stat* m_CYCLE_GPU;
		
		// ============= ../def/inst.stat.def =============
		DIST_Stat* m_DIST_OP_CAT_INVALID;
		COUNT_Stat* m_OP_CAT_INVALID;
		COUNT_Stat* m_OP_CAT_3DNOW;
		COUNT_Stat* m_OP_CAT_AES;
		COUNT_Stat* m_OP_CAT_AVX;
		COUNT_Stat* m_OP_CAT_BINARY;
		COUNT_Stat* m_OP_CAT_BITBYTE;
		COUNT_Stat* m_OP_CAT_BROADCAST;
		COUNT_Stat* m_OP_CAT_CALL;
		COUNT_Stat* m_OP_CAT_CMOV;
		COUNT_Stat* m_OP_CAT_COND_BR;
		COUNT_Stat* m_OP_CAT_CONVERT;
		COUNT_Stat* m_OP_CAT_DATAXFER;
		COUNT_Stat* m_OP_CAT_DECIMAL;
		COUNT_Stat* m_OP_CAT_FCMOV;
		COUNT_Stat* m_OP_CAT_FLAGOP;
		COUNT_Stat* m_OP_CAT_INTERRUPT;
		COUNT_Stat* m_OP_CAT_IO;
		COUNT_Stat* m_OP_CAT_IOSTRINGOP;
		COUNT_Stat* m_OP_CAT_LOGICAL;
		COUNT_Stat* m_OP_CAT_MISC;
		COUNT_Stat* m_OP_CAT_MMX;
		COUNT_Stat* m_OP_CAT_NOP;
		COUNT_Stat* m_OP_CAT_PCLMULQDQ;
		COUNT_Stat* m_OP_CAT_POP;
		COUNT_Stat* m_OP_CAT_PREFETCH;
		COUNT_Stat* m_OP_CAT_PUSH;
		COUNT_Stat* m_OP_CAT_RET;
		COUNT_Stat* m_OP_CAT_ROTATE;
		COUNT_Stat* m_OP_CAT_SEGOP;
		COUNT_Stat* m_OP_CAT_SEMAPHORE;
		COUNT_Stat* m_OP_CAT_SHIFT;
		COUNT_Stat* m_OP_CAT_SSE;
		COUNT_Stat* m_OP_CAT_STRINGOP;
		COUNT_Stat* m_OP_CAT_STTNI;
		COUNT_Stat* m_OP_CAT_SYSCALL;
		COUNT_Stat* m_OP_CAT_SYSRET;
		COUNT_Stat* m_OP_CAT_SYSTEM;
		COUNT_Stat* m_OP_CAT_UNCOND_BR;
		COUNT_Stat* m_OP_CAT_VTX;
		COUNT_Stat* m_OP_CAT_WIDENOP;
		COUNT_Stat* m_OP_CAT_X87_ALU;
		COUNT_Stat* m_OP_CAT_XSAVE;
		COUNT_Stat* m_OP_CAT_XSAVEOPT;
		COUNT_Stat* m_OP_CAT_TR_MUL;
		COUNT_Stat* m_OP_CAT_TR_DIV;
		COUNT_Stat* m_OP_CAT_TR_FMUL;
		COUNT_Stat* m_OP_CAT_TR_FDIV;
		COUNT_Stat* m_OP_CAT_TR_NOP;
		COUNT_Stat* m_OP_CAT_PREFETCH_NTA;
		COUNT_Stat* m_OP_CAT_PREFETCH_T0;
		COUNT_Stat* m_OP_CAT_PREFETCH_T1;
		COUNT_Stat* m_OP_CAT_PREFETCH_T2;
		COUNT_Stat* m_OP_CAT_TR_MEM_LD_LM;
		COUNT_Stat* m_OP_CAT_TR_MEM_LD_SM;
		COUNT_Stat* m_OP_CAT_TR_MEM_LD_GM;
		COUNT_Stat* m_OP_CAT_TR_MEM_ST_LM;
		COUNT_Stat* m_OP_CAT_TR_MEM_ST_SM;
		COUNT_Stat* m_OP_CAT_TR_MEM_ST_GM;
		COUNT_Stat* m_OP_CAT_TR_DATA_XFER_LM;
		COUNT_Stat* m_OP_CAT_TR_DATA_XFER_SM;
		COUNT_Stat* m_OP_CAT_TR_DATA_XFER_GM;
		COUNT_Stat* m_OP_CAT_TR_MEM_LD_CM;
		COUNT_Stat* m_OP_CAT_TR_MEM_LD_TM;
		COUNT_Stat* m_OP_CAT_TR_MEM_LD_PM;
		COUNT_Stat* m_OP_CAT_GPU_EN;
		COUNT_Stat* m_OP_CAT_LD_CM_CA;
		COUNT_Stat* m_OP_CAT_LD_CM_CG;
		COUNT_Stat* m_OP_CAT_LD_CM_CS;
		COUNT_Stat* m_OP_CAT_LD_CM_LU;
		COUNT_Stat* m_OP_CAT_LD_CM_CU;
		COUNT_Stat* m_OP_CAT_LD_GM_CA;
		COUNT_Stat* m_OP_CAT_LD_GM_CG;
		COUNT_Stat* m_OP_CAT_LD_GM_CS;
		COUNT_Stat* m_OP_CAT_LD_GM_LU;
		COUNT_Stat* m_OP_CAT_LD_GM_CU;
		COUNT_Stat* m_OP_CAT_LD_LM_CA;
		COUNT_Stat* m_OP_CAT_LD_LM_CG;
		COUNT_Stat* m_OP_CAT_LD_LM_CS;
		COUNT_Stat* m_OP_CAT_LD_LM_LU;
		COUNT_Stat* m_OP_CAT_LD_LM_CU;
		COUNT_Stat* m_OP_CAT_LD_PM_CA;
		COUNT_Stat* m_OP_CAT_LD_PM_CG;
		COUNT_Stat* m_OP_CAT_LD_PM_CS;
		COUNT_Stat* m_OP_CAT_LD_PM_LU;
		COUNT_Stat* m_OP_CAT_LD_PM_CU;
		COUNT_Stat* m_OP_CAT_LD_SM_CA;
		COUNT_Stat* m_OP_CAT_LD_SM_CG;
		COUNT_Stat* m_OP_CAT_LD_SM_CS;
		COUNT_Stat* m_OP_CAT_LD_SM_LU;
		COUNT_Stat* m_OP_CAT_LD_SM_CU;
		COUNT_Stat* m_OP_CAT_LDU_GM;
		COUNT_Stat* m_OP_CAT_ST_GM_WB;
		COUNT_Stat* m_OP_CAT_ST_GM_CG;
		COUNT_Stat* m_OP_CAT_ST_GM_CS;
		COUNT_Stat* m_OP_CAT_ST_GM_WT;
		COUNT_Stat* m_OP_CAT_ST_LM_WB;
		COUNT_Stat* m_OP_CAT_ST_LM_CG;
		COUNT_Stat* m_OP_CAT_ST_LM_CS;
		COUNT_Stat* m_OP_CAT_ST_LM_WT;
		COUNT_Stat* m_OP_CAT_ST_SM_WB;
		COUNT_Stat* m_OP_CAT_ST_SM_CG;
		COUNT_Stat* m_OP_CAT_ST_SM_CS;
		COUNT_Stat* m_OP_CAT_ST_SM_WT;
		COUNT_Stat* m_OP_CAT_PREF_GM_L1;
		COUNT_Stat* m_OP_CAT_PREF_GM_L2;
		COUNT_Stat* m_OP_CAT_PREF_LM_L1;
		COUNT_Stat* m_OP_CAT_PREF_LM_L2;
		COUNT_Stat* m_OP_CAT_PREF_UNIFORM;
		COUNT_Stat* m_OP_CAT_GPU_ABS;
		COUNT_Stat* m_OP_CAT_GPU_ABS64;
		COUNT_Stat* m_OP_CAT_GPU_ADD;
		COUNT_Stat* m_OP_CAT_GPU_ADD64;
		COUNT_Stat* m_OP_CAT_GPU_ADDC;
		COUNT_Stat* m_OP_CAT_GPU_AND;
		COUNT_Stat* m_OP_CAT_GPU_AND64;
		COUNT_Stat* m_OP_CAT_GPU_ATOM;
		COUNT_Stat* m_OP_CAT_GPU_ATOM64;
		COUNT_Stat* m_OP_CAT_GPU_BAR;
		COUNT_Stat* m_OP_CAT_GPU_BFE;
		COUNT_Stat* m_OP_CAT_GPU_BFE64;
		COUNT_Stat* m_OP_CAT_GPU_BFI;
		COUNT_Stat* m_OP_CAT_GPU_BFI64;
		COUNT_Stat* m_OP_CAT_GPU_BFIND;
		COUNT_Stat* m_OP_CAT_GPU_BFIND64;
		COUNT_Stat* m_OP_CAT_GPU_BRA;
		COUNT_Stat* m_OP_CAT_GPU_BREV;
		COUNT_Stat* m_OP_CAT_GPU_BREV64;
		COUNT_Stat* m_OP_CAT_GPU_BRKPT;
		COUNT_Stat* m_OP_CAT_GPU_CALL;
		COUNT_Stat* m_OP_CAT_GPU_CLZ;
		COUNT_Stat* m_OP_CAT_GPU_CLZ64;
		COUNT_Stat* m_OP_CAT_GPU_CNOT;
		COUNT_Stat* m_OP_CAT_GPU_CNOT64;
		COUNT_Stat* m_OP_CAT_GPU_COPYSIGN;
		COUNT_Stat* m_OP_CAT_GPU_COPYSIGN64;
		COUNT_Stat* m_OP_CAT_GPU_COS;
		COUNT_Stat* m_OP_CAT_GPU_CVT;
		COUNT_Stat* m_OP_CAT_GPU_CVT64;
		COUNT_Stat* m_OP_CAT_GPU_CVTA;
		COUNT_Stat* m_OP_CAT_GPU_CVTA64;
		COUNT_Stat* m_OP_CAT_GPU_DIV;
		COUNT_Stat* m_OP_CAT_GPU_DIV64;
		COUNT_Stat* m_OP_CAT_GPU_EX2;
		COUNT_Stat* m_OP_CAT_GPU_EXIT;
		COUNT_Stat* m_OP_CAT_GPU_FMA;
		COUNT_Stat* m_OP_CAT_GPU_FMA64;
		COUNT_Stat* m_OP_CAT_GPU_ISSPACEP;
		COUNT_Stat* m_OP_CAT_GPU_LD;
		COUNT_Stat* m_OP_CAT_GPU_LD64;
		COUNT_Stat* m_OP_CAT_GPU_LDU;
		COUNT_Stat* m_OP_CAT_GPU_LDU64;
		COUNT_Stat* m_OP_CAT_GPU_LG2;
		COUNT_Stat* m_OP_CAT_GPU_MAD24;
		COUNT_Stat* m_OP_CAT_GPU_MAD;
		COUNT_Stat* m_OP_CAT_GPU_MAD64;
		COUNT_Stat* m_OP_CAT_GPU_MAX;
		COUNT_Stat* m_OP_CAT_GPU_MAX64;
		COUNT_Stat* m_OP_CAT_GPU_MEMBAR;
		COUNT_Stat* m_OP_CAT_GPU_MIN;
		COUNT_Stat* m_OP_CAT_GPU_MIN64;
		COUNT_Stat* m_OP_CAT_GPU_MOV;
		COUNT_Stat* m_OP_CAT_GPU_MOV64;
		COUNT_Stat* m_OP_CAT_GPU_MUL24;
		COUNT_Stat* m_OP_CAT_GPU_MUL;
		COUNT_Stat* m_OP_CAT_GPU_MUL64;
		COUNT_Stat* m_OP_CAT_GPU_NEG;
		COUNT_Stat* m_OP_CAT_GPU_NEG64;
		COUNT_Stat* m_OP_CAT_GPU_NOT;
		COUNT_Stat* m_OP_CAT_GPU_NOT64;
		COUNT_Stat* m_OP_CAT_GPU_OR;
		COUNT_Stat* m_OP_CAT_GPU_OR64;
		COUNT_Stat* m_OP_CAT_GPU_PMEVENT;
		COUNT_Stat* m_OP_CAT_GPU_POPC;
		COUNT_Stat* m_OP_CAT_GPU_POPC64;
		COUNT_Stat* m_OP_CAT_GPU_PREFETCH;
		COUNT_Stat* m_OP_CAT_GPU_PREFETCHU;
		COUNT_Stat* m_OP_CAT_GPU_PRMT;
		COUNT_Stat* m_OP_CAT_GPU_RCP;
		COUNT_Stat* m_OP_CAT_GPU_RCP64;
		COUNT_Stat* m_OP_CAT_GPU_RED;
		COUNT_Stat* m_OP_CAT_GPU_RED64;
		COUNT_Stat* m_OP_CAT_GPU_REM;
		COUNT_Stat* m_OP_CAT_GPU_REM64;
		COUNT_Stat* m_OP_CAT_GPU_RET;
		COUNT_Stat* m_OP_CAT_GPU_RSQRT;
		COUNT_Stat* m_OP_CAT_GPU_RSQRT64;
		COUNT_Stat* m_OP_CAT_GPU_SAD;
		COUNT_Stat* m_OP_CAT_GPU_SAD64;
		COUNT_Stat* m_OP_CAT_GPU_SELP;
		COUNT_Stat* m_OP_CAT_GPU_SELP64;
		COUNT_Stat* m_OP_CAT_GPU_SET;
		COUNT_Stat* m_OP_CAT_GPU_SET64;
		COUNT_Stat* m_OP_CAT_GPU_SETP;
		COUNT_Stat* m_OP_CAT_GPU_SETP64;
		COUNT_Stat* m_OP_CAT_GPU_SHL;
		COUNT_Stat* m_OP_CAT_GPU_SHL64;
		COUNT_Stat* m_OP_CAT_GPU_SHR;
		COUNT_Stat* m_OP_CAT_GPU_SHR64;
		COUNT_Stat* m_OP_CAT_GPU_SIN;
		COUNT_Stat* m_OP_CAT_GPU_SLCT;
		COUNT_Stat* m_OP_CAT_GPU_SLCT64;
		COUNT_Stat* m_OP_CAT_GPU_SQRT;
		COUNT_Stat* m_OP_CAT_GPU_SQRT64;
		COUNT_Stat* m_OP_CAT_GPU_ST;
		COUNT_Stat* m_OP_CAT_GPU_ST64;
		COUNT_Stat* m_OP_CAT_GPU_SUB;
		COUNT_Stat* m_OP_CAT_GPU_SUB64;
		COUNT_Stat* m_OP_CAT_GPU_SUBC;
		COUNT_Stat* m_OP_CAT_GPU_SULD;
		COUNT_Stat* m_OP_CAT_GPU_SULD64;
		COUNT_Stat* m_OP_CAT_GPU_SURED;
		COUNT_Stat* m_OP_CAT_GPU_SURED64;
		COUNT_Stat* m_OP_CAT_GPU_SUST;
		COUNT_Stat* m_OP_CAT_GPU_SUST64;
		COUNT_Stat* m_OP_CAT_GPU_SUQ;
		COUNT_Stat* m_OP_CAT_GPU_TESTP;
		COUNT_Stat* m_OP_CAT_GPU_TESTP64;
		COUNT_Stat* m_OP_CAT_GPU_TEX;
		COUNT_Stat* m_OP_CAT_GPU_TLD4;
		COUNT_Stat* m_OP_CAT_GPU_TXQ;
		COUNT_Stat* m_OP_CAT_GPU_TRAP;
		COUNT_Stat* m_OP_CAT_GPU_VABSDIFF;
		COUNT_Stat* m_OP_CAT_GPU_VADD;
		COUNT_Stat* m_OP_CAT_GPU_VMAD;
		COUNT_Stat* m_OP_CAT_GPU_VMAX;
		COUNT_Stat* m_OP_CAT_GPU_VMIN;
		COUNT_Stat* m_OP_CAT_GPU_VSET;
		COUNT_Stat* m_OP_CAT_GPU_VSHL;
		COUNT_Stat* m_OP_CAT_GPU_VSHR;
		COUNT_Stat* m_OP_CAT_GPU_VSUB;
		COUNT_Stat* m_OP_CAT_GPU_VOTE;
		COUNT_Stat* m_OP_CAT_GPU_XOR;
		COUNT_Stat* m_OP_CAT_GPU_XOR64;
		COUNT_Stat* m_OP_CAT_GPU_RECONVERGE;
		COUNT_Stat* m_OP_CAT_GPU_PHI;
		COUNT_Stat* m_OP_CAT_TR_LAST;
		COUNT_Stat* m_FP_OPS_TOT;
		COUNT_Stat* m_FP_OPS;
		
		// ============= ../def/internal.stat.def =============
		
		// ============= ../def/memory.stat.def =============
		COUNT_Stat* m_AVG_MEMORY_LATENCY_BASE;
		RATIO_Stat* m_AVG_MEMORY_LATENCY;
		COUNT_Stat* m_MSHR_FULL;
		COUNT_Stat* m_TOTAL_MEMORY;
		RATIO_Stat* m_TOTAL_MEMORY_MERGE;
		RATIO_Stat* m_TOTAL_WB;
		RATIO_Stat* m_L1_WB;
		RATIO_Stat* m_L2_WB;
		RATIO_Stat* m_L3_WB;
		COUNT_Stat* m_TOTAL_DRAM;
		RATIO_Stat* m_TOTAL_DRAM_MERGE;
		COUNT_Stat* m_L1_HIT_CPU;
		COUNT_Stat* m_L1_HIT_GPU;
		COUNT_Stat* m_L1_MISS_CPU;
		COUNT_Stat* m_L1_MISS_GPU;
		COUNT_Stat* m_L2_HIT_CPU;
		COUNT_Stat* m_L2_HIT_GPU;
		COUNT_Stat* m_L2_MISS_CPU;
		COUNT_Stat* m_L2_MISS_GPU;
		COUNT_Stat* m_L3_HIT_CPU;
		COUNT_Stat* m_L3_HIT_GPU;
		COUNT_Stat* m_L3_MISS_CPU;
		COUNT_Stat* m_L3_MISS_GPU;
		COUNT_Stat* m_L3_HIT_PROMOTION_CPU;
		COUNT_Stat* m_L3_HIT_PROMOTION_GPU;
		DIST_Stat* m_DIST_ICACHE_HIT;
		COUNT_Stat* m_ICACHE_HIT;
		COUNT_Stat* m_ICACHE_MISS;
		COUNT_Stat* m_FETCH_THREAD_SKIP_LD_WAIT;
		COUNT_Stat* m_FETCH_THREAD_SKIP_BR_WAIT;
		COUNT_Stat* m_FETCH_THREAD_SKIP_SCHED_WAIT;
		DIST_Stat* m_DIST_COAL_INST;
		COUNT_Stat* m_COAL_INST;
		COUNT_Stat* m_UNCOAL_INST;
		DIST_Stat* m_DIST_COAL_INST_SINGLE_TRANS;
		COUNT_Stat* m_COAL_INST_SINGLE_TRANS;
		COUNT_Stat* m_COAL_INST_MUL_TRANS;
		COUNT_Stat* m_UNCOAL_INST_MUL_TRANS;
		DIST_Stat* m_DIST_SM_COAL_INST;
		COUNT_Stat* m_SM_COAL_INST;
		COUNT_Stat* m_CM_COAL_INST;
		COUNT_Stat* m_TM_COAL_INST;
		COUNT_Stat* m_DM_COAL_INST;
		DIST_Stat* m_DIST_SM_UNCOAL_INST;
		COUNT_Stat* m_SM_UNCOAL_INST;
		COUNT_Stat* m_CM_UNCOAL_INST;
		COUNT_Stat* m_TM_UNCOAL_INST;
		COUNT_Stat* m_DM_UNCOAL_INST;
		DIST_Stat* m_DIST_SM_COAL_INST_SINGLE_TRANS;
		COUNT_Stat* m_SM_COAL_INST_SINGLE_TRANS;
		COUNT_Stat* m_CM_COAL_INST_SINGLE_TRANS;
		COUNT_Stat* m_TM_COAL_INST_SINGLE_TRANS;
		COUNT_Stat* m_DM_COAL_INST_SINGLE_TRANS;
		DIST_Stat* m_DIST_SM_COAL_INST_MUL_TRANS;
		COUNT_Stat* m_SM_COAL_INST_MUL_TRANS;
		COUNT_Stat* m_CM_COAL_INST_MUL_TRANS;
		COUNT_Stat* m_TM_COAL_INST_MUL_TRANS;
		COUNT_Stat* m_DM_COAL_INST_MUL_TRANS;
		COUNT_Stat* m_NUM_MUL_TRANS_CM_TM_DM_INST;
		RATIO_Stat* m_NUM_MUL_TRANS_CM_TM_DM;
		COUNT_Stat* m_CONST_CACHE_HIT;
		COUNT_Stat* m_CONST_CACHE_MISS;
		COUNT_Stat* m_CONST_CACHE_MISS_NO_EXECUTE;
		COUNT_Stat* m_CONST_CACHE_ACCESS;
		COUNT_Stat* m_TEXTURE_CACHE_HIT;
		COUNT_Stat* m_TEXTURE_CACHE_MISS;
		COUNT_Stat* m_TEXTURE_CACHE_NO_EXECUTE;
		COUNT_Stat* m_TEXTURE_CACHE_ACCESS;
		COUNT_Stat* m_SHARED_MEM_INST;
		COUNT_Stat* m_SHARED_MEM_ACCESS;
		DIST_Stat* m_DIST_LD_NO_FORWARD;
		COUNT_Stat* m_LD_NO_FORWARD;
		COUNT_Stat* m_FORWARDED_LD;
		COUNT_Stat* m_MEM_STALL_CYCLE;
		COUNT_Stat* m_CACHE_BANK_BUSY;
		COUNT_Stat* m_ICACHE_MISS_TOTAL;
		COUNT_Stat* m_ICACHE_FILL;
		COUNT_Stat* m_TOTAL_CAGE_PERIOD;
		RATIO_Stat* m_TOTAL_CAGE_APPL0;
		RATIO_Stat* m_TOTAL_CAGE_APPL1;
		RATIO_Stat* m_TOTAL_CAGE_APPL2;
		RATIO_Stat* m_TOTAL_CAGE_APPL3;
		RATIO_Stat* m_TOTAL_CAGE_APPL4;
		COUNT_Stat* m_ABIP_AVG_RATIO_BASE;
		RATIO_Stat* m_ABIP_AVG_RATIO;
		COUNT_Stat* m_NUM_WRITE_ACKS;
		COUNT_Stat* m_NUM_WRITES;
		COUNT_Stat* m_TOTAL_WRITE_ACKS;
		COUNT_Stat* m_TOTAL_WRITES;
		
		// ============= ../def/network.stat.def =============
		COUNT_Stat* m_TOTAL_PACKET_CPU;
		COUNT_Stat* m_TOTAL_PACKET_GPU;
		COUNT_Stat* m_NOC_AVG_LATENCY_BASE;
		COUNT_Stat* m_NOC_AVG_LATENCY_BASE_CPU;
		COUNT_Stat* m_NOC_AVG_LATENCY_BASE_GPU;
		RATIO_Stat* m_NOC_AVG_LATENCY;
		RATIO_Stat* m_NOC_AVG_LATENCY_CPU;
		RATIO_Stat* m_NOC_AVG_LATENCY_GPU;
		COUNT_Stat* m_NOC_AVG_ACTIVE_PACKET_BASE;
		COUNT_Stat* m_NOC_AVG_ACTIVE_PACKET_BASE_CPU;
		COUNT_Stat* m_NOC_AVG_ACTIVE_PACKET_BASE_GPU;
		RATIO_Stat* m_NOC_AVG_ACTIVE_PACKET;
		RATIO_Stat* m_NOC_AVG_ACTIVE_PACKET_CPU;
		RATIO_Stat* m_NOC_AVG_ACTIVE_PACKET_GPU;
		COUNT_Stat* m_NOC_IDLE_CHANNEL;
		COUNT_Stat* m_NOC_IDLE_CHANNEL_CPU;
		COUNT_Stat* m_NOC_IDLE_CHANNEL_GPU;
		COUNT_Stat* m_NOC_IDLE_CHANNEL_L3;
		COUNT_Stat* m_NOC_IDLE_CHANNEL_MC;
		COUNT_Stat* m_NOC_AVG_WAIT_IN_ROUTER_BASE;
		COUNT_Stat* m_NOC_AVG_WAIT_IN_ROUTER_BASE_CPU;
		COUNT_Stat* m_NOC_AVG_WAIT_IN_ROUTER_BASE_GPU;
		COUNT_Stat* m_NOC_AVG_WAIT_IN_ROUTER_BASE_L3;
		COUNT_Stat* m_NOC_AVG_WAIT_IN_ROUTER_BASE_MC;
		RATIO_Stat* m_NOC_AVG_WAIT_IN_ROUTER;
		RATIO_Stat* m_NOC_AVG_WAIT_IN_ROUTER_CPU;
		RATIO_Stat* m_NOC_AVG_WAIT_IN_ROUTER_GPU;
		RATIO_Stat* m_NOC_AVG_WAIT_IN_ROUTER_L3;
		RATIO_Stat* m_NOC_AVG_WAIT_IN_ROUTER_MC;
		COUNT_Stat* m_NOC_LINK_ACTIVE;
		
		// ============= ../def/power_units.stat.def =============
		COUNT_Stat* m_POWER_BLOCK_STATES_R;
		COUNT_Stat* m_POWER_BLOCK_STATES_W;
		COUNT_Stat* m_POWER_FETCH_QUEUE_R;
		COUNT_Stat* m_POWER_FETCH_QUEUE_W;
		COUNT_Stat* m_POWER_INST_QUEUE_R;
		COUNT_Stat* m_POWER_INST_QUEUE_W;
		COUNT_Stat* m_POWER_BR_PRED_R;
		COUNT_Stat* m_POWER_BR_PRED_W;
		COUNT_Stat* m_POWER_RAS_R;
		COUNT_Stat* m_POWER_RAS_W;
		COUNT_Stat* m_POWER_ICACHE_R;
		COUNT_Stat* m_POWER_ICACHE_W;
		COUNT_Stat* m_POWER_ICACHE_R_TAG;
		COUNT_Stat* m_POWER_ICACHE_MISS_BUF_R;
		COUNT_Stat* m_POWER_ICACHE_MISS_BUF_W;
		COUNT_Stat* m_POWER_ICACHE_MISS_BUF_R_TAG;
		COUNT_Stat* m_POWER_ICACHE_MISS_BUF_W_TAG;
		COUNT_Stat* m_POWER_ICACHE_TOT_ACC;
		COUNT_Stat* m_POWER_ICACHE_CONF;
		COUNT_Stat* m_POWER_INST_DECODER_R;
		COUNT_Stat* m_POWER_INST_DECODER_W;
		COUNT_Stat* m_POWER_MICRO_OP_SEQ_R;
		COUNT_Stat* m_POWER_MICRO_OP_SEQ_W;
		COUNT_Stat* m_POWER_OPERAND_DECODER_R;
		COUNT_Stat* m_POWER_OPERAND_DECODER_W;
		COUNT_Stat* m_POWER_UOP_QUEUE_R;
		COUNT_Stat* m_POWER_UOP_QUEUE_W;
		COUNT_Stat* m_POWER_REG_RENAMING_TABLE_R;
		COUNT_Stat* m_POWER_REG_RENAMING_TABLE_W;
		COUNT_Stat* m_POWER_DEP_CHECK_LOGIC_R;
		COUNT_Stat* m_POWER_FREELIST_R;
		COUNT_Stat* m_POWER_FREELIST_W;
		COUNT_Stat* m_POWER_RESERVATION_STATION_R;
		COUNT_Stat* m_POWER_RESERVATION_STATION_W;
		COUNT_Stat* m_POWER_RESERVATION_STATION_R_TAG;
		COUNT_Stat* m_POWER_RESERVATION_STATION_W_TAG;
		COUNT_Stat* m_POWER_INST_ISSUE_SEL_LOGIC_R;
		COUNT_Stat* m_POWER_INST_ISSUE_SEL_LOGIC_W;
		COUNT_Stat* m_POWER_PAYLOAD_RAM_R;
		COUNT_Stat* m_POWER_PAYLOAD_RAM_W;
		COUNT_Stat* m_POWER_EX_ALU_R;
		COUNT_Stat* m_POWER_EX_FPU_R;
		COUNT_Stat* m_POWER_EX_MUL_R;
		COUNT_Stat* m_POWER_EX_SFU_R;
		COUNT_Stat* m_POWER_REORDER_BUF_R;
		COUNT_Stat* m_POWER_REORDER_BUF_W;
		COUNT_Stat* m_POWER_INST_COMMIT_SEL_LOGIC_R;
		COUNT_Stat* m_POWER_INST_COMMIT_SEL_LOGIC_W;
		COUNT_Stat* m_POWER_FP_RENAME_R;
		COUNT_Stat* m_POWER_FP_RENAME_W;
		COUNT_Stat* m_POWER_LOAD_QUEUE_R;
		COUNT_Stat* m_POWER_LOAD_QUEUE_W;
		COUNT_Stat* m_POWER_LOAD_QUEUE_R_TAG;
		COUNT_Stat* m_POWER_LOAD_QUEUE_W_TAG;
		COUNT_Stat* m_POWER_STORE_QUEUE_R;
		COUNT_Stat* m_POWER_STORE_QUEUE_W;
		COUNT_Stat* m_POWER_STORE_QUEUE_R_TAG;
		COUNT_Stat* m_POWER_STORE_QUEUE_W_TAG;
		COUNT_Stat* m_POWER_DATA_TLB_R;
		COUNT_Stat* m_POWER_DATA_TLB_W;
		COUNT_Stat* m_POWER_DATA_TLB_R_TAG;
		COUNT_Stat* m_POWER_DATA_TLB_W_TAG;
		COUNT_Stat* m_POWER_INT_REGFILE_R;
		COUNT_Stat* m_POWER_INT_REGFILE_W;
		COUNT_Stat* m_POWER_FP_REGFILE_R;
		COUNT_Stat* m_POWER_FP_REGFILE_W;
		COUNT_Stat* m_POWER_GP_REGISTER_R;
		COUNT_Stat* m_POWER_GP_REGISTER_W;
		COUNT_Stat* m_POWER_FP_REGISTER_R;
		COUNT_Stat* m_POWER_FP_REGISTER_W;
		COUNT_Stat* m_POWER_SEGMENT_REGISTER_R;
		COUNT_Stat* m_POWER_SEGMENT_REGISTER_W;
		COUNT_Stat* m_POWER_CONTROL_REGISTER_R;
		COUNT_Stat* m_POWER_CONTROL_REGISTER_W;
		COUNT_Stat* m_POWER_FLAG_REGISTER_R;
		COUNT_Stat* m_POWER_FLAG_REGISTER_W;
		COUNT_Stat* m_POWER_EXEC_BYPASS;
		COUNT_Stat* m_POWER_LOAD_BYPASS;
		COUNT_Stat* m_POWER_PIPELINE;
		COUNT_Stat* m_POWER_DCACHE_MISS_BUF_R;
		COUNT_Stat* m_POWER_DCACHE_MISS_BUF_R_TAG;
		COUNT_Stat* m_POWER_DCACHE_MISS_BUF_W;
		COUNT_Stat* m_POWER_DCACHE_MISS_BUF_W_TAG;
		COUNT_Stat* m_POWER_DCACHE_LINEFILL_BUF_R;
		COUNT_Stat* m_POWER_L2CACHE_LINEFILL_BUF_R;
		COUNT_Stat* m_POWER_L3CACHE_LINEFILL_BUF_R;
		COUNT_Stat* m_POWER_DCACHE_LINEFILL_BUF_W;
		COUNT_Stat* m_POWER_L2CACHE_LINEFILL_BUF_W;
		COUNT_Stat* m_POWER_L3CACHE_LINEFILL_BUF_W;
		COUNT_Stat* m_POWER_DCACHE_LINEFILL_BUF_R_TAG;
		COUNT_Stat* m_POWER_L2CACHE_LINEFILL_BUF_R_TAG;
		COUNT_Stat* m_POWER_L3CACHE_LINEFILL_BUF_R_TAG;
		COUNT_Stat* m_POWER_DCACHE_LINEFILL_BUF_W_TAG;
		COUNT_Stat* m_POWER_DCACHE_WB_BUF_R;
		COUNT_Stat* m_POWER_L2CACHE_WB_BUF_R;
		COUNT_Stat* m_POWER_L3CACHE_WB_BUF_R;
		COUNT_Stat* m_POWER_DCACHE_WB_BUF_W;
		COUNT_Stat* m_POWER_L2CACHE_WB_BUF_W;
		COUNT_Stat* m_POWER_L3CACHE_WB_BUF_W;
		COUNT_Stat* m_POWER_DCACHE_WB_BUF_R_TAG;
		COUNT_Stat* m_POWER_L2CACHE_WB_BUF_R_TAG;
		COUNT_Stat* m_POWER_L3CACHE_WB_BUF_R_TAG;
		COUNT_Stat* m_POWER_DCACHE_WB_BUF_W_TAG;
		COUNT_Stat* m_POWER_DCACHE_R;
		COUNT_Stat* m_POWER_L2CACHE_R;
		COUNT_Stat* m_POWER_L3CACHE_R;
		COUNT_Stat* m_POWER_DCACHE_W;
		COUNT_Stat* m_POWER_L2CACHE_W;
		COUNT_Stat* m_POWER_L3CACHE_W;
		COUNT_Stat* m_POWER_DCACHE_R_TAG;
		COUNT_Stat* m_POWER_L2CACHE_R_TAG;
		COUNT_Stat* m_POWER_L3CACHE_R_TAG;
		COUNT_Stat* m_POWER_MC_R;
		COUNT_Stat* m_POWER_MC_W;
		COUNT_Stat* m_POWER_CONST_CACHE_R;
		COUNT_Stat* m_POWER_CONST_CACHE_W;
		COUNT_Stat* m_POWER_CONST_CACHE_R_TAG;
		COUNT_Stat* m_POWER_CONST_CACHE_W_TAG;
		COUNT_Stat* m_POWER_TEXTURE_CACHE_R;
		COUNT_Stat* m_POWER_TEXTURE_CACHE_W;
		COUNT_Stat* m_POWER_TEXTURE_CACHE_R_TAG;
		COUNT_Stat* m_POWER_TEXTURE_CACHE_W_TAG;
		COUNT_Stat* m_POWER_SHARED_MEM_R;
		COUNT_Stat* m_POWER_SHARED_MEM_W;
		COUNT_Stat* m_POWER_SHARED_MEM_R_TAG;
		COUNT_Stat* m_POWER_SHARED_MEM_W_TAG;
		
		// ============= ../def/pref.stat.def =============
		DIST_Stat* m_DIST_PREF_ACC_1;
		COUNT_Stat* m_PREF_ACC_1;
		COUNT_Stat* m_PREF_ACC_2;
		COUNT_Stat* m_PREF_ACC_3;
		COUNT_Stat* m_PREF_ACC_4;
		COUNT_Stat* m_PREF_ACC_5;
		COUNT_Stat* m_PREF_ACC_6;
		COUNT_Stat* m_PREF_ACC_7;
		COUNT_Stat* m_PREF_ACC_8;
		COUNT_Stat* m_PREF_ACC_9;
		COUNT_Stat* m_PREF_ACC_10;
		DIST_Stat* m_DIST_PREF_TIMELY_1;
		COUNT_Stat* m_PREF_TIMELY_1;
		COUNT_Stat* m_PREF_TIMELY_2;
		COUNT_Stat* m_PREF_TIMELY_3;
		COUNT_Stat* m_PREF_TIMELY_4;
		COUNT_Stat* m_PREF_TIMELY_5;
		COUNT_Stat* m_PREF_TIMELY_6;
		COUNT_Stat* m_PREF_TIMELY_7;
		COUNT_Stat* m_PREF_TIMELY_8;
		COUNT_Stat* m_PREF_TIMELY_9;
		COUNT_Stat* m_PREF_TIMELY_10;
		DIST_Stat* m_DIST_PREF_POL_1;
		COUNT_Stat* m_PREF_POL_1;
		COUNT_Stat* m_PREF_POL_2;
		COUNT_Stat* m_PREF_POL_3;
		COUNT_Stat* m_PREF_POL_4;
		COUNT_Stat* m_PREF_POL_5;
		COUNT_Stat* m_PREF_POL_6;
		COUNT_Stat* m_PREF_POL_7;
		COUNT_Stat* m_PREF_POL_8;
		COUNT_Stat* m_PREF_POL_9;
		COUNT_Stat* m_PREF_POL_10;
		DIST_Stat* m_DIST_PREF_ACC1_HT_HP;
		COUNT_Stat* m_PREF_ACC1_HT_HP;
		COUNT_Stat* m_PREF_ACC1_HT_LP;
		COUNT_Stat* m_PREF_ACC1_LT_HP;
		COUNT_Stat* m_PREF_ACC1_LT_LP;
		COUNT_Stat* m_PREF_ACC2_HT_HP;
		COUNT_Stat* m_PREF_ACC2_HT_LP;
		COUNT_Stat* m_PREF_ACC2_LT_HP;
		COUNT_Stat* m_PREF_ACC2_LT_LP;
		COUNT_Stat* m_PREF_ACC3_HT_HP;
		COUNT_Stat* m_PREF_ACC3_HT_LP;
		COUNT_Stat* m_PREF_ACC3_LT_HP;
		COUNT_Stat* m_PREF_ACC3_LT_LP;
		COUNT_Stat* m_PREF_ACC4_HT_HP;
		COUNT_Stat* m_PREF_ACC4_HT_LP;
		COUNT_Stat* m_PREF_ACC4_LT_HP;
		COUNT_Stat* m_PREF_ACC4_LT_LP;
		DIST_Stat* m_DIST_PREF_DISTANCE_1;
		COUNT_Stat* m_PREF_DISTANCE_1;
		COUNT_Stat* m_PREF_DISTANCE_2;
		COUNT_Stat* m_PREF_DISTANCE_3;
		COUNT_Stat* m_PREF_DISTANCE_4;
		COUNT_Stat* m_PREF_DISTANCE_5;
		COUNT_Stat* m_PREF_PFPOL;
		COUNT_Stat* m_PREF_DL0REQ_QUEUE_HIT_BY_DEMAND;
		COUNT_Stat* m_PREF_UL2REQ_QUEUE_HIT_BY_DEMAND;
		COUNT_Stat* m_PREF_DL0REQ_QUEUE_FULL;
		COUNT_Stat* m_PREF_UL2REQ_QUEUE_FULL;
		COUNT_Stat* m_PREF_UL2REQ_SEND_QUEUE_STALL;
		COUNT_Stat* m_PREF_UL2REQ_QUEUE_MATCHED_REQ;
		COUNT_Stat* m_PREF_DL0REQ_QUEUE_MATCHED_REQ;
		COUNT_Stat* m_PREF_UL2REQ_QUEUE_SENTREQ;
		COUNT_Stat* m_PREF_UNUSED_EVICT;
		COUNT_Stat* m_PREF_REGION_SENT;
		COUNT_Stat* m_PREF_REGION_USEFUL;
		COUNT_Stat* m_PREF_REGION_EVICT;
		COUNT_Stat* m_PREF_PHASE_OVERWRITE_PAGE;
		COUNT_Stat* m_PREF_UPDATE_COUNT;
		DIST_Stat* m_DIST_PREF_HYBRID_SEL_0;
		COUNT_Stat* m_PREF_HYBRID_SEL_0;
		COUNT_Stat* m_PREF_HYBRID_SEL_1;
		COUNT_Stat* m_PREF_HYBRID_SEL_2;
		COUNT_Stat* m_PREF_HYBRID_SEL_3;
		COUNT_Stat* m_PREF_HYBRID_SEL_4;
		COUNT_Stat* m_PREF_HYBRID_SEL_5;
		COUNT_Stat* m_PREF_HYBRID_SEL_6;
		
		// ============= ../def/stream.stat.def =============
		COUNT_Stat* m_DCACHE_PREF_HIT;
		DIST_Stat* m_DIST_IFETCH_WB_FIRST_SCHEDULE;
		COUNT_Stat* m_IFETCH_WB_FIRST_SCHEDULE;
		COUNT_Stat* m_PREFETCH_LAST_SCHEDULE;
		COUNT_Stat* m_DEMAND_PASS_PREF_SCHEDULE;
		COUNT_Stat* m_DEMAND_PASS_LOW_OP_SCHEDULE;
		COUNT_Stat* m_DEMAND_LAST_SCHEDULE;
		COUNT_Stat* m_STREAM_BUFFER_REQ;
		DIST_Stat* m_DIST_PREF_SEND_TO_MEM_REQ;
		COUNT_Stat* m_PREF_SEND_TO_MEM_REQ;
		COUNT_Stat* m_PREF_SEND_TO_MEM_REQ_FAIL;
		DIST_Stat* m_DIST_HIT_TRAIN_STREAM;
		COUNT_Stat* m_HIT_TRAIN_STREAM;
		COUNT_Stat* m_MISS_TRAIN_STREAM;
		COUNT_Stat* m_STREAM_TRAIN_CREATE;
		DIST_Stat* m_DIST_MEM_REQ_MISS_HWP_PREF_Q;
		COUNT_Stat* m_MEM_REQ_MISS_HWP_PREF_Q;
		COUNT_Stat* m_MEM_REQ_MISS_SW_PREF_Q;
		COUNT_Stat* m_MEM_REQ_MISS_IFETCH_Q;
		COUNT_Stat* m_MEM_REQ_MISS_DFETCH_Q;
		COUNT_Stat* m_MEM_REQ_MISS_DSTORE_Q;
		COUNT_Stat* m_MEM_REQ_MISS_DPRF_Q;
		COUNT_Stat* m_MEM_REQ_MISS_WB_Q;
		DIST_Stat* m_DIST_PREF_HIT_BY_DEMAND_IFETCH;
		COUNT_Stat* m_PREF_HIT_BY_DEMAND_IFETCH;
		COUNT_Stat* m_PREF_HIT_BY_DEMAND_DFETCH;
		COUNT_Stat* m_PREF_HIT_BY_DEMAND_DSTORE;
		COUNT_Stat* m_PREF_HIT_BY_DEMAND_IPREF;
		COUNT_Stat* m_PREF_HIT_BY_DEMAND_DPRF;
		COUNT_Stat* m_PREF_HIT_BY_DEMAND_WB;
		COUNT_Stat* m_PREF_HIT_BY_PREF;
		DIST_Stat* m_DIST_PREF_HIT_DEMAND_IFETCH;
		COUNT_Stat* m_PREF_HIT_DEMAND_IFETCH;
		COUNT_Stat* m_PREF_HIT_DEMAND_DFETCH;
		COUNT_Stat* m_PREF_HIT_DEMAND_DSTORE;
		COUNT_Stat* m_PREF_HIT_DEMAND_IPREF;
		COUNT_Stat* m_PREF_HIT_DEMAND_DPRF;
		COUNT_Stat* m_PREF_HIT_DEMAND_WB;
		DIST_Stat* m_DIST_PREF_L2_FILL;
		COUNT_Stat* m_PREF_L2_FILL;
		COUNT_Stat* m_DEMAND_L2_FILL;
		COUNT_Stat* m_PREF_REQ_QUE_FULL;
		COUNT_Stat* m_STREAM_REQ_QUEUE_HIT_BY_DEMAND;
		COUNT_Stat* m_L2HIT_STREAM_PREF_REQ_QUE_FULL;
		DIST_Stat* m_DIST_L2HIT_HIT_TRAIN_STREAM;
		COUNT_Stat* m_L2HIT_HIT_TRAIN_STREAM;
		COUNT_Stat* m_L2HIT_MISS_TRAIN_STREAM;
		COUNT_Stat* m_L2HIT_STREAM_TRAIN_CREATE;
		COUNT_Stat* m_L2HIT_STREAM_BUFFER_REQ;
		DIST_Stat* m_DIST_L2HIT_STREAM_PREF_DCACHE_HIT;
		COUNT_Stat* m_L2HIT_STREAM_PREF_DCACHE_HIT;
		COUNT_Stat* m_L2HIT_STREAM_PREF_DCACHE_INSERT;
		COUNT_Stat* m_L2HIT_STREAM_L2_MISS;
		COUNT_Stat* m_L2HIT_STREAM_DCACHE_PORT_FULL;
		COUNT_Stat* m_L2HIT_STREAM_PREF_L2_PORT_FULL;
		DIST_Stat* m_DIST_L2HIT_TRAIN_HIT_DEMAND;
		COUNT_Stat* m_L2HIT_TRAIN_HIT_DEMAND;
		COUNT_Stat* m_L2HIT_TRAIN_MISS_REQ;
		DIST_Stat* m_DIST_L2HIT_TRAIN_FILTER_MISS;
		COUNT_Stat* m_L2HIT_TRAIN_FILTER_MISS;
		COUNT_Stat* m_L2HIT_TRAIN_FILTER_HIT;
		DIST_Stat* m_DIST_L2HIT_PREF_REQ_DCACHE_HIT;
		COUNT_Stat* m_L2HIT_PREF_REQ_DCACHE_HIT;
		COUNT_Stat* m_L2HIT_PREF_REQ_DCACHE_MISS;
		DIST_Stat* m_DIST_L2HIT_L2SEND_Q_FULL;
		COUNT_Stat* m_L2HIT_L2SEND_Q_FULL;
		COUNT_Stat* m_L2HIT_L2SEND_Q_ENTER;
		COUNT_Stat* m_L2HIT_MEM_REQ;
		COUNT_Stat* m_REMOVE_REDUNDANT_STREAM_STAT;
		COUNT_Stat* m_REPLACE_OLD_STREAM;
		COUNT_Stat* m_REQ_SEND_QUEUE_STALL;
		DIST_Stat* m_DIST_STREAM_LENGTH_0;
		COUNT_Stat* m_STREAM_LENGTH_0;
		COUNT_Stat* m_STREAM_LENGTH_10;
		COUNT_Stat* m_STREAM_LENGTH_20;
		COUNT_Stat* m_STREAM_LENGTH_30;
		COUNT_Stat* m_STREAM_LENGTH_40;
		COUNT_Stat* m_STREAM_LENGTH_50;
		COUNT_Stat* m_STREAM_LENGTH_60;
		COUNT_Stat* m_STREAM_LENGTH_70;
		COUNT_Stat* m_STREAM_LENGTH_80;
		COUNT_Stat* m_STREAM_LENGTH_90;
		COUNT_Stat* m_STREAM_LENGTH_100_P;
		COUNT_Stat* m_STREAM_ENTER_RA;
		
		// ============= ../def/trace.stat.def =============
		COUNT_Stat* m_TRACE_READ_COUNT;
};

#endif //ALL_STATS_C_INCLUDED
