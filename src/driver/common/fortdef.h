#ifndef FORTDEF_H
#define FORTDEF_H

enum FortLogType {
    FORT_LOG_TYPE_NONE = 0,
    FORT_LOG_TYPE_BLOCKED,
    FORT_LOG_TYPE_BLOCKED_IP,
    FORT_LOG_TYPE_ALLOWED,
    FORT_LOG_TYPE_PROMPT,
    FORT_LOG_TYPE_PROC_NEW,
    FORT_LOG_TYPE_STAT_TRAF,
    FORT_LOG_TYPE_TIME,
};

enum FortLogBlockedIpFlag {
    FORT_LOG_BLOCKED_IP_INHERITED = (1 << 0),
};

enum FortBlockReason {
    FORT_BLOCK_REASON_NONE = -1,
    FORT_BLOCK_REASON_UNKNOWN = 0,
    FORT_BLOCK_REASON_IP_INET,
    FORT_BLOCK_REASON_REAUTH,
    FORT_BLOCK_REASON_PROGRAM,
    FORT_BLOCK_REASON_APP_GROUP_FOUND,
    FORT_BLOCK_REASON_FILTER_MODE,
    FORT_BLOCK_REASON_LAN_ONLY,
    FORT_BLOCK_REASON_ZONE,
    FORT_BLOCK_REASON_ASK_LIMIT,
    FORT_BLOCK_REASON_ASK_PENDING = 15 /* must be last! */
};

#endif // FORTDEF_H