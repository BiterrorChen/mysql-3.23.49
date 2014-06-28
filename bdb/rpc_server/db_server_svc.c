#include "db_config.h"
#ifdef HAVE_RPC
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "../rpc_server/db_server.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>
extern void __dbsrv_timeout();

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
db_serverprog_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		__env_cachesize_msg __db_env_cachesize_1_arg;
		__env_close_msg __db_env_close_1_arg;
		__env_create_msg __db_env_create_1_arg;
		__env_flags_msg __db_env_flags_1_arg;
		__env_open_msg __db_env_open_1_arg;
		__env_remove_msg __db_env_remove_1_arg;
		__txn_abort_msg __db_txn_abort_1_arg;
		__txn_begin_msg __db_txn_begin_1_arg;
		__txn_commit_msg __db_txn_commit_1_arg;
		__db_bt_maxkey_msg __db_db_bt_maxkey_1_arg;
		__db_bt_minkey_msg __db_db_bt_minkey_1_arg;
		__db_close_msg __db_db_close_1_arg;
		__db_create_msg __db_db_create_1_arg;
		__db_del_msg __db_db_del_1_arg;
		__db_extentsize_msg __db_db_extentsize_1_arg;
		__db_flags_msg __db_db_flags_1_arg;
		__db_get_msg __db_db_get_1_arg;
		__db_h_ffactor_msg __db_db_h_ffactor_1_arg;
		__db_h_nelem_msg __db_db_h_nelem_1_arg;
		__db_key_range_msg __db_db_key_range_1_arg;
		__db_lorder_msg __db_db_lorder_1_arg;
		__db_open_msg __db_db_open_1_arg;
		__db_pagesize_msg __db_db_pagesize_1_arg;
		__db_put_msg __db_db_put_1_arg;
		__db_re_delim_msg __db_db_re_delim_1_arg;
		__db_re_len_msg __db_db_re_len_1_arg;
		__db_re_pad_msg __db_db_re_pad_1_arg;
		__db_remove_msg __db_db_remove_1_arg;
		__db_rename_msg __db_db_rename_1_arg;
		__db_stat_msg __db_db_stat_1_arg;
		__db_swapped_msg __db_db_swapped_1_arg;
		__db_sync_msg __db_db_sync_1_arg;
		__db_cursor_msg __db_db_cursor_1_arg;
		__db_join_msg __db_db_join_1_arg;
		__dbc_close_msg __db_dbc_close_1_arg;
		__dbc_count_msg __db_dbc_count_1_arg;
		__dbc_del_msg __db_dbc_del_1_arg;
		__dbc_dup_msg __db_dbc_dup_1_arg;
		__dbc_get_msg __db_dbc_get_1_arg;
		__dbc_put_msg __db_dbc_put_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case __DB_env_cachesize:
		_xdr_argument = (xdrproc_t) xdr___env_cachesize_msg;
		_xdr_result = (xdrproc_t) xdr___env_cachesize_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_env_cachesize_1_svc;
		break;

	case __DB_env_close:
		_xdr_argument = (xdrproc_t) xdr___env_close_msg;
		_xdr_result = (xdrproc_t) xdr___env_close_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_env_close_1_svc;
		break;

	case __DB_env_create:
		_xdr_argument = (xdrproc_t) xdr___env_create_msg;
		_xdr_result = (xdrproc_t) xdr___env_create_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_env_create_1_svc;
		break;

	case __DB_env_flags:
		_xdr_argument = (xdrproc_t) xdr___env_flags_msg;
		_xdr_result = (xdrproc_t) xdr___env_flags_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_env_flags_1_svc;
		break;

	case __DB_env_open:
		_xdr_argument = (xdrproc_t) xdr___env_open_msg;
		_xdr_result = (xdrproc_t) xdr___env_open_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_env_open_1_svc;
		break;

	case __DB_env_remove:
		_xdr_argument = (xdrproc_t) xdr___env_remove_msg;
		_xdr_result = (xdrproc_t) xdr___env_remove_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_env_remove_1_svc;
		break;

	case __DB_txn_abort:
		_xdr_argument = (xdrproc_t) xdr___txn_abort_msg;
		_xdr_result = (xdrproc_t) xdr___txn_abort_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_txn_abort_1_svc;
		break;

	case __DB_txn_begin:
		_xdr_argument = (xdrproc_t) xdr___txn_begin_msg;
		_xdr_result = (xdrproc_t) xdr___txn_begin_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_txn_begin_1_svc;
		break;

	case __DB_txn_commit:
		_xdr_argument = (xdrproc_t) xdr___txn_commit_msg;
		_xdr_result = (xdrproc_t) xdr___txn_commit_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_txn_commit_1_svc;
		break;

	case __DB_db_bt_maxkey:
		_xdr_argument = (xdrproc_t) xdr___db_bt_maxkey_msg;
		_xdr_result = (xdrproc_t) xdr___db_bt_maxkey_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_bt_maxkey_1_svc;
		break;

	case __DB_db_bt_minkey:
		_xdr_argument = (xdrproc_t) xdr___db_bt_minkey_msg;
		_xdr_result = (xdrproc_t) xdr___db_bt_minkey_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_bt_minkey_1_svc;
		break;

	case __DB_db_close:
		_xdr_argument = (xdrproc_t) xdr___db_close_msg;
		_xdr_result = (xdrproc_t) xdr___db_close_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_close_1_svc;
		break;

	case __DB_db_create:
		_xdr_argument = (xdrproc_t) xdr___db_create_msg;
		_xdr_result = (xdrproc_t) xdr___db_create_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_create_1_svc;
		break;

	case __DB_db_del:
		_xdr_argument = (xdrproc_t) xdr___db_del_msg;
		_xdr_result = (xdrproc_t) xdr___db_del_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_del_1_svc;
		break;

	case __DB_db_extentsize:
		_xdr_argument = (xdrproc_t) xdr___db_extentsize_msg;
		_xdr_result = (xdrproc_t) xdr___db_extentsize_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_extentsize_1_svc;
		break;

	case __DB_db_flags:
		_xdr_argument = (xdrproc_t) xdr___db_flags_msg;
		_xdr_result = (xdrproc_t) xdr___db_flags_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_flags_1_svc;
		break;

	case __DB_db_get:
		_xdr_argument = (xdrproc_t) xdr___db_get_msg;
		_xdr_result = (xdrproc_t) xdr___db_get_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_get_1_svc;
		break;

	case __DB_db_h_ffactor:
		_xdr_argument = (xdrproc_t) xdr___db_h_ffactor_msg;
		_xdr_result = (xdrproc_t) xdr___db_h_ffactor_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_h_ffactor_1_svc;
		break;

	case __DB_db_h_nelem:
		_xdr_argument = (xdrproc_t) xdr___db_h_nelem_msg;
		_xdr_result = (xdrproc_t) xdr___db_h_nelem_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_h_nelem_1_svc;
		break;

	case __DB_db_key_range:
		_xdr_argument = (xdrproc_t) xdr___db_key_range_msg;
		_xdr_result = (xdrproc_t) xdr___db_key_range_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_key_range_1_svc;
		break;

	case __DB_db_lorder:
		_xdr_argument = (xdrproc_t) xdr___db_lorder_msg;
		_xdr_result = (xdrproc_t) xdr___db_lorder_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_lorder_1_svc;
		break;

	case __DB_db_open:
		_xdr_argument = (xdrproc_t) xdr___db_open_msg;
		_xdr_result = (xdrproc_t) xdr___db_open_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_open_1_svc;
		break;

	case __DB_db_pagesize:
		_xdr_argument = (xdrproc_t) xdr___db_pagesize_msg;
		_xdr_result = (xdrproc_t) xdr___db_pagesize_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_pagesize_1_svc;
		break;

	case __DB_db_put:
		_xdr_argument = (xdrproc_t) xdr___db_put_msg;
		_xdr_result = (xdrproc_t) xdr___db_put_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_put_1_svc;
		break;

	case __DB_db_re_delim:
		_xdr_argument = (xdrproc_t) xdr___db_re_delim_msg;
		_xdr_result = (xdrproc_t) xdr___db_re_delim_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_re_delim_1_svc;
		break;

	case __DB_db_re_len:
		_xdr_argument = (xdrproc_t) xdr___db_re_len_msg;
		_xdr_result = (xdrproc_t) xdr___db_re_len_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_re_len_1_svc;
		break;

	case __DB_db_re_pad:
		_xdr_argument = (xdrproc_t) xdr___db_re_pad_msg;
		_xdr_result = (xdrproc_t) xdr___db_re_pad_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_re_pad_1_svc;
		break;

	case __DB_db_remove:
		_xdr_argument = (xdrproc_t) xdr___db_remove_msg;
		_xdr_result = (xdrproc_t) xdr___db_remove_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_remove_1_svc;
		break;

	case __DB_db_rename:
		_xdr_argument = (xdrproc_t) xdr___db_rename_msg;
		_xdr_result = (xdrproc_t) xdr___db_rename_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_rename_1_svc;
		break;

	case __DB_db_stat:
		_xdr_argument = (xdrproc_t) xdr___db_stat_msg;
		_xdr_result = (xdrproc_t) xdr___db_stat_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_stat_1_svc;
		break;

	case __DB_db_swapped:
		_xdr_argument = (xdrproc_t) xdr___db_swapped_msg;
		_xdr_result = (xdrproc_t) xdr___db_swapped_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_swapped_1_svc;
		break;

	case __DB_db_sync:
		_xdr_argument = (xdrproc_t) xdr___db_sync_msg;
		_xdr_result = (xdrproc_t) xdr___db_sync_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_sync_1_svc;
		break;

	case __DB_db_cursor:
		_xdr_argument = (xdrproc_t) xdr___db_cursor_msg;
		_xdr_result = (xdrproc_t) xdr___db_cursor_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_cursor_1_svc;
		break;

	case __DB_db_join:
		_xdr_argument = (xdrproc_t) xdr___db_join_msg;
		_xdr_result = (xdrproc_t) xdr___db_join_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_db_join_1_svc;
		break;

	case __DB_dbc_close:
		_xdr_argument = (xdrproc_t) xdr___dbc_close_msg;
		_xdr_result = (xdrproc_t) xdr___dbc_close_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_dbc_close_1_svc;
		break;

	case __DB_dbc_count:
		_xdr_argument = (xdrproc_t) xdr___dbc_count_msg;
		_xdr_result = (xdrproc_t) xdr___dbc_count_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_dbc_count_1_svc;
		break;

	case __DB_dbc_del:
		_xdr_argument = (xdrproc_t) xdr___dbc_del_msg;
		_xdr_result = (xdrproc_t) xdr___dbc_del_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_dbc_del_1_svc;
		break;

	case __DB_dbc_dup:
		_xdr_argument = (xdrproc_t) xdr___dbc_dup_msg;
		_xdr_result = (xdrproc_t) xdr___dbc_dup_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_dbc_dup_1_svc;
		break;

	case __DB_dbc_get:
		_xdr_argument = (xdrproc_t) xdr___dbc_get_msg;
		_xdr_result = (xdrproc_t) xdr___dbc_get_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_dbc_get_1_svc;
		break;

	case __DB_dbc_put:
		_xdr_argument = (xdrproc_t) xdr___dbc_put_msg;
		_xdr_result = (xdrproc_t) xdr___dbc_put_reply;
		local = (char *(*)(char *, struct svc_req *)) __db_dbc_put_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "unable to free arguments");
		exit (1);
	}
	__dbsrv_timeout(0);
	return;
}

int
void __dbsrv_main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (DB_SERVERPROG, DB_SERVERVERS);

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, DB_SERVERPROG, DB_SERVERVERS, db_serverprog_1, IPPROTO_TCP)) {
		fprintf (stderr, "unable to register (DB_SERVERPROG, DB_SERVERVERS, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "svc_run returned");
	exit (1);
	/* NOTREACHED */
}
#endif /* HAVE_RPC */