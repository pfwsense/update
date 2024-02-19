SCRIPTS=pfwsense-bootstrap.sh
MAN=	pfwsense-bootstrap.8

LOCALBASE?=${DESTDIR}/usr/local
PREFIX?=${LOCALBASE}

CLEANFILES=	${SCRIPTS}

${SCRIPTS}: ${SCRIPTS}.in
	sed -e 's|%%RELEASE%%|${BOOTSTRAP_RELEASE}|g' ${.ALLSRC} > ${.TARGET}

.include <bsd.prog.mk>
