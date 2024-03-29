upgrade: all install clean

BINDIR=			${PREFIX}/sbin
MANDIR=			${PREFIX}/share/man/man

VERSIONBIN=		/usr/local/sbin/pfwsense-version

.if exists(${VERSIONBIN})
# Latch on to installed base set which is the most likely
# candidate for the current version as the kernel could
# always be a test kernel issued or locked below current
# for driver reasons.
_UPDATE_RELEASE!=	${VERSIONBIN} -v base
.else
_UPDATE_RELEASE=	24.1
.endif

UPDATE_RELEASE?=	${_UPDATE_RELEASE}

_BOOTSTRAP_RELEASE=	${UPDATE_RELEASE:S/./ /g}
BOOTSTRAP_RELEASE?=	${_BOOTSTRAP_RELEASE:[1]}.${_BOOTSTRAP_RELEASE:[2]}
