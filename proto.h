/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PROTO_H_RPCGEN
#define _PROTO_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXNOM 255
#define MAXBLOC 1024
#define MAXCOMMAND 64

#define AUTHENTICATION_ERROR 0x1

#define DIRECTORY_OPEN_ERROR 0x10
#define DIRECTORY_CLOSE_ERROR 0x11

#define FILE_OPEN_ERROR 0x20
#define FILE_CLOSE_ERROR 0x21

typedef char *type_nom;

typedef struct cell_nom *liste_nom;

struct cell_nom {
	type_nom nom;
	liste_nom suivant;
};
typedef struct cell_nom cell_nom;

struct ls_res {
	int erreur;
	union {
		liste_nom liste;
	} ls_res_u;
};
typedef struct ls_res ls_res;

typedef char *type_bloc;

typedef struct cell_bloc *liste_bloc;

struct cell_bloc {
	type_bloc bloc;
	liste_bloc suivant;
};
typedef struct cell_bloc cell_bloc;

struct read_res {
	int erreur;
	union {
		liste_bloc fichier;
	} read_res_u;
};
typedef struct read_res read_res;

struct write_parm {
	type_nom nom;
	bool_t ecraser;
	liste_bloc donnees;
};
typedef struct write_parm write_parm;

#define PROTO_GESTION_FICHIER 0x20200112
#define PROTO_GESTION_FICHIER_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define LS 1
extern  ls_res * ls_1(type_nom *, CLIENT *);
extern  ls_res * ls_1_svc(type_nom *, struct svc_req *);
#define READ 2
extern  read_res * read_1(type_nom *, CLIENT *);
extern  read_res * read_1_svc(type_nom *, struct svc_req *);
#define WRITE 3
extern  int * write_1(write_parm *, CLIENT *);
extern  int * write_1_svc(write_parm *, struct svc_req *);
extern int proto_gestion_fichier_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define LS 1
extern  ls_res * ls_1();
extern  ls_res * ls_1_svc();
#define READ 2
extern  read_res * read_1();
extern  read_res * read_1_svc();
#define WRITE 3
extern  int * write_1();
extern  int * write_1_svc();
extern int proto_gestion_fichier_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_type_nom (XDR *, type_nom*);
extern  bool_t xdr_liste_nom (XDR *, liste_nom*);
extern  bool_t xdr_cell_nom (XDR *, cell_nom*);
extern  bool_t xdr_ls_res (XDR *, ls_res*);
extern  bool_t xdr_type_bloc (XDR *, type_bloc*);
extern  bool_t xdr_liste_bloc (XDR *, liste_bloc*);
extern  bool_t xdr_cell_bloc (XDR *, cell_bloc*);
extern  bool_t xdr_read_res (XDR *, read_res*);
extern  bool_t xdr_write_parm (XDR *, write_parm*);

#else /* K&R C */
extern bool_t xdr_type_nom ();
extern bool_t xdr_liste_nom ();
extern bool_t xdr_cell_nom ();
extern bool_t xdr_ls_res ();
extern bool_t xdr_type_bloc ();
extern bool_t xdr_liste_bloc ();
extern bool_t xdr_cell_bloc ();
extern bool_t xdr_read_res ();
extern bool_t xdr_write_parm ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PROTO_H_RPCGEN */
