#ifndef ENUMS_H
#define ENUMS_H

enum CustomChar : uint8_t {
    CC_CLEAR      = 0,
    CC_DOT_TOP    = 1,
    CC_DOT_MIDDLE = 2,
    CC_DOT_BOTTOM = 3,
    CC_CONN_ISSUE = 4,
};

enum RequestState {
    REQUESTSTATE_NONE,
    REQUESTSTATE_GET_AUTHTOKEN,
    REQUESTSTATE_GET_SOC,
    REQUESTSTATE_GET_POWERFLOWS,
    REQUESTSTATE_CONN_ISSUE,
};

#endif