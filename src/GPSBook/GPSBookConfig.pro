QMAKE_CXXFLAGS += -DBUILD_VERSION=\\\"0.2\\\"

unix {
    # build date
    QMAKE_CXXFLAGS += -DBUILD_DATE=\\\"`date +%Y-%m-%d`\\\"
    # svn version
    #QMAKE_CXXFLAGS += -DSVN_VERSION=\\\"`svnversion . | cut -f'2' -d':'`\\\"
    QMAKE_CXXFLAGS += -DSVN_VERSION=\\\"`date +%Y%m%d`\\\"
}
mac {

    QMAKE_CXXFLAGS += -DBUILD_DATE=\\\"20130923\\\"
    QMAKE_CXXFLAGS += -DSVN_VERSION=\\\"Beta2\\\"
}

win32 {
    QMAKE_CXXFLAGS += -DBUILD_DATE=\\\"20130923\\\"
    QMAKE_CXXFLAGS += -DSVN_VERSION=\\\"Beta2\\\"
    CONFIG -= console
}
