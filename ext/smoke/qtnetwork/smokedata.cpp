#include <qtnetwork_includes.h>

#include <smoke.h>
#include <qtnetwork_smoke.h>

namespace __smokeqtnetwork {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QAbstractNetworkCache
      switch(to) {
        case 54: return (void*)(QObject*)(QAbstractNetworkCache*)xptr;
        case 1: return (void*)(QAbstractNetworkCache*)xptr;
        case 46: return (void*)(QNetworkDiskCache*)(QAbstractNetworkCache*)xptr;
        default: return xptr;
      }
    case 2:   //QAbstractSocket
      switch(to) {
        case 27: return (void*)(QIODevice*)(QAbstractSocket*)xptr;
        case 54: return (void*)(QObject*)(QAbstractSocket*)xptr;
        case 2: return (void*)(QAbstractSocket*)xptr;
        case 78: return (void*)(QUdpSocket*)(QAbstractSocket*)xptr;
        case 69: return (void*)(QSslSocket*)(QAbstractSocket*)xptr;
        case 73: return (void*)(QTcpSocket*)(QAbstractSocket*)xptr;
        default: return xptr;
      }
    case 3:   //QAuthenticator
      switch(to) {
        case 3: return (void*)(QAuthenticator*)xptr;
        default: return xptr;
      }
    case 4:   //QBitArray
      switch(to) {
        case 4: return (void*)(QBitArray*)xptr;
        default: return xptr;
      }
    case 5:   //QBool
      switch(to) {
        case 5: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 6:   //QByteArray
      switch(to) {
        case 6: return (void*)(QByteArray*)xptr;
        default: return xptr;
      }
    case 7:   //QChar
      switch(to) {
        case 7: return (void*)(QChar*)xptr;
        default: return xptr;
      }
    case 8:   //QChildEvent
      switch(to) {
        case 15: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 8: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 9:   //QDataStream
      switch(to) {
        case 9: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 10:   //QDate
      switch(to) {
        case 10: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 11:   //QDateTime
      switch(to) {
        case 11: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 12:   //QDebug
      switch(to) {
        case 12: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 13:   //QDir
      switch(to) {
        case 13: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 14:   //QEasingCurve
      switch(to) {
        case 14: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 15:   //QEvent
      switch(to) {
        case 15: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 16:   //QFtp
      switch(to) {
        case 54: return (void*)(QObject*)(QFtp*)xptr;
        case 16: return (void*)(QFtp*)xptr;
        default: return xptr;
      }
    case 18:   //QHashDummyValue
      switch(to) {
        case 18: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 19:   //QHostAddress
      switch(to) {
        case 19: return (void*)(QHostAddress*)xptr;
        default: return xptr;
      }
    case 20:   //QHostInfo
      switch(to) {
        case 20: return (void*)(QHostInfo*)xptr;
        default: return xptr;
      }
    case 21:   //QHttp
      switch(to) {
        case 54: return (void*)(QObject*)(QHttp*)xptr;
        case 21: return (void*)(QHttp*)xptr;
        default: return xptr;
      }
    case 22:   //QHttpHeader
      switch(to) {
        case 22: return (void*)(QHttpHeader*)xptr;
        case 25: return (void*)(QHttpRequestHeader*)(QHttpHeader*)xptr;
        case 26: return (void*)(QHttpResponseHeader*)(QHttpHeader*)xptr;
        default: return xptr;
      }
    case 23:   //QHttpMultiPart
      switch(to) {
        case 54: return (void*)(QObject*)(QHttpMultiPart*)xptr;
        case 23: return (void*)(QHttpMultiPart*)xptr;
        default: return xptr;
      }
    case 24:   //QHttpPart
      switch(to) {
        case 24: return (void*)(QHttpPart*)xptr;
        default: return xptr;
      }
    case 25:   //QHttpRequestHeader
      switch(to) {
        case 22: return (void*)(QHttpHeader*)(QHttpRequestHeader*)xptr;
        case 25: return (void*)(QHttpRequestHeader*)xptr;
        default: return xptr;
      }
    case 26:   //QHttpResponseHeader
      switch(to) {
        case 22: return (void*)(QHttpHeader*)(QHttpResponseHeader*)xptr;
        case 26: return (void*)(QHttpResponseHeader*)xptr;
        default: return xptr;
      }
    case 27:   //QIODevice
      switch(to) {
        case 54: return (void*)(QObject*)(QIODevice*)xptr;
        case 27: return (void*)(QIODevice*)xptr;
        case 51: return (void*)(QNetworkReply*)(QIODevice*)xptr;
        case 78: return (void*)(QUdpSocket*)(QIODevice*)xptr;
        case 2: return (void*)(QAbstractSocket*)(QIODevice*)xptr;
        case 69: return (void*)(QSslSocket*)(QIODevice*)xptr;
        case 73: return (void*)(QTcpSocket*)(QIODevice*)xptr;
        case 34: return (void*)(QLocalSocket*)(QIODevice*)xptr;
        default: return xptr;
      }
    case 28:   //QIPv6Address
      switch(to) {
        case 28: return (void*)(QIPv6Address*)xptr;
        default: return xptr;
      }
    case 29:   //QIncompatibleFlag
      switch(to) {
        case 29: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 30:   //QLatin1String
      switch(to) {
        case 30: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 31:   //QLine
      switch(to) {
        case 31: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 32:   //QLineF
      switch(to) {
        case 32: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 33:   //QLocalServer
      switch(to) {
        case 54: return (void*)(QObject*)(QLocalServer*)xptr;
        case 33: return (void*)(QLocalServer*)xptr;
        default: return xptr;
      }
    case 34:   //QLocalSocket
      switch(to) {
        case 27: return (void*)(QIODevice*)(QLocalSocket*)xptr;
        case 54: return (void*)(QObject*)(QLocalSocket*)xptr;
        case 34: return (void*)(QLocalSocket*)xptr;
        default: return xptr;
      }
    case 35:   //QLocale
      switch(to) {
        case 35: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 36:   //QMargins
      switch(to) {
        case 36: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 37:   //QMetaObject
      switch(to) {
        case 37: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 38:   //QModelIndex
      switch(to) {
        case 38: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 39:   //QNetworkAccessManager
      switch(to) {
        case 54: return (void*)(QObject*)(QNetworkAccessManager*)xptr;
        case 39: return (void*)(QNetworkAccessManager*)xptr;
        default: return xptr;
      }
    case 40:   //QNetworkAddressEntry
      switch(to) {
        case 40: return (void*)(QNetworkAddressEntry*)xptr;
        default: return xptr;
      }
    case 41:   //QNetworkCacheMetaData
      switch(to) {
        case 41: return (void*)(QNetworkCacheMetaData*)xptr;
        default: return xptr;
      }
    case 42:   //QNetworkConfiguration
      switch(to) {
        case 42: return (void*)(QNetworkConfiguration*)xptr;
        default: return xptr;
      }
    case 43:   //QNetworkConfigurationManager
      switch(to) {
        case 54: return (void*)(QObject*)(QNetworkConfigurationManager*)xptr;
        case 43: return (void*)(QNetworkConfigurationManager*)xptr;
        default: return xptr;
      }
    case 44:   //QNetworkCookie
      switch(to) {
        case 44: return (void*)(QNetworkCookie*)xptr;
        default: return xptr;
      }
    case 45:   //QNetworkCookieJar
      switch(to) {
        case 54: return (void*)(QObject*)(QNetworkCookieJar*)xptr;
        case 45: return (void*)(QNetworkCookieJar*)xptr;
        default: return xptr;
      }
    case 46:   //QNetworkDiskCache
      switch(to) {
        case 1: return (void*)(QAbstractNetworkCache*)(QNetworkDiskCache*)xptr;
        case 54: return (void*)(QObject*)(QNetworkDiskCache*)xptr;
        case 46: return (void*)(QNetworkDiskCache*)xptr;
        default: return xptr;
      }
    case 47:   //QNetworkInterface
      switch(to) {
        case 47: return (void*)(QNetworkInterface*)xptr;
        default: return xptr;
      }
    case 48:   //QNetworkProxy
      switch(to) {
        case 48: return (void*)(QNetworkProxy*)xptr;
        default: return xptr;
      }
    case 49:   //QNetworkProxyFactory
      switch(to) {
        case 49: return (void*)(QNetworkProxyFactory*)xptr;
        default: return xptr;
      }
    case 50:   //QNetworkProxyQuery
      switch(to) {
        case 50: return (void*)(QNetworkProxyQuery*)xptr;
        default: return xptr;
      }
    case 51:   //QNetworkReply
      switch(to) {
        case 27: return (void*)(QIODevice*)(QNetworkReply*)xptr;
        case 54: return (void*)(QObject*)(QNetworkReply*)xptr;
        case 51: return (void*)(QNetworkReply*)xptr;
        default: return xptr;
      }
    case 52:   //QNetworkRequest
      switch(to) {
        case 52: return (void*)(QNetworkRequest*)xptr;
        default: return xptr;
      }
    case 53:   //QNetworkSession
      switch(to) {
        case 54: return (void*)(QObject*)(QNetworkSession*)xptr;
        case 53: return (void*)(QNetworkSession*)xptr;
        default: return xptr;
      }
    case 54:   //QObject
      switch(to) {
        case 54: return (void*)(QObject*)xptr;
        case 16: return (void*)(QFtp*)(QObject*)xptr;
        case 45: return (void*)(QNetworkCookieJar*)(QObject*)xptr;
        case 33: return (void*)(QLocalServer*)(QObject*)xptr;
        case 23: return (void*)(QHttpMultiPart*)(QObject*)xptr;
        case 51: return (void*)(QNetworkReply*)(QObject*)xptr;
        case 78: return (void*)(QUdpSocket*)(QObject*)xptr;
        case 1: return (void*)(QAbstractNetworkCache*)(QObject*)xptr;
        case 53: return (void*)(QNetworkSession*)(QObject*)xptr;
        case 2: return (void*)(QAbstractSocket*)(QObject*)xptr;
        case 21: return (void*)(QHttp*)(QObject*)xptr;
        case 69: return (void*)(QSslSocket*)(QObject*)xptr;
        case 39: return (void*)(QNetworkAccessManager*)(QObject*)xptr;
        case 73: return (void*)(QTcpSocket*)(QObject*)xptr;
        case 46: return (void*)(QNetworkDiskCache*)(QObject*)xptr;
        case 72: return (void*)(QTcpServer*)(QObject*)xptr;
        case 34: return (void*)(QLocalSocket*)(QObject*)xptr;
        case 43: return (void*)(QNetworkConfigurationManager*)(QObject*)xptr;
        default: return xptr;
      }
    case 55:   //QPersistentModelIndex
      switch(to) {
        case 55: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 56:   //QPoint
      switch(to) {
        case 56: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 57:   //QPointF
      switch(to) {
        case 57: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 58:   //QRect
      switch(to) {
        case 58: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 59:   //QRectF
      switch(to) {
        case 59: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 60:   //QRegExp
      switch(to) {
        case 60: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 61:   //QSize
      switch(to) {
        case 61: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 62:   //QSizeF
      switch(to) {
        case 62: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 64:   //QSslCertificate
      switch(to) {
        case 64: return (void*)(QSslCertificate*)xptr;
        default: return xptr;
      }
    case 65:   //QSslCipher
      switch(to) {
        case 65: return (void*)(QSslCipher*)xptr;
        default: return xptr;
      }
    case 66:   //QSslConfiguration
      switch(to) {
        case 66: return (void*)(QSslConfiguration*)xptr;
        default: return xptr;
      }
    case 67:   //QSslError
      switch(to) {
        case 67: return (void*)(QSslError*)xptr;
        default: return xptr;
      }
    case 68:   //QSslKey
      switch(to) {
        case 68: return (void*)(QSslKey*)xptr;
        default: return xptr;
      }
    case 69:   //QSslSocket
      switch(to) {
        case 73: return (void*)(QTcpSocket*)(QSslSocket*)xptr;
        case 2: return (void*)(QAbstractSocket*)(QSslSocket*)xptr;
        case 27: return (void*)(QIODevice*)(QSslSocket*)xptr;
        case 54: return (void*)(QObject*)(QSslSocket*)xptr;
        case 69: return (void*)(QSslSocket*)xptr;
        default: return xptr;
      }
    case 70:   //QString::Null
      switch(to) {
        case 70: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 71:   //QStringRef
      switch(to) {
        case 71: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 72:   //QTcpServer
      switch(to) {
        case 54: return (void*)(QObject*)(QTcpServer*)xptr;
        case 72: return (void*)(QTcpServer*)xptr;
        default: return xptr;
      }
    case 73:   //QTcpSocket
      switch(to) {
        case 2: return (void*)(QAbstractSocket*)(QTcpSocket*)xptr;
        case 27: return (void*)(QIODevice*)(QTcpSocket*)xptr;
        case 54: return (void*)(QObject*)(QTcpSocket*)xptr;
        case 73: return (void*)(QTcpSocket*)xptr;
        case 69: return (void*)(QSslSocket*)(QTcpSocket*)xptr;
        default: return xptr;
      }
    case 74:   //QTextStream
      switch(to) {
        case 74: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 75:   //QTextStreamManipulator
      switch(to) {
        case 75: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 76:   //QTime
      switch(to) {
        case 76: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 77:   //QTimerEvent
      switch(to) {
        case 15: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 77: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 78:   //QUdpSocket
      switch(to) {
        case 2: return (void*)(QAbstractSocket*)(QUdpSocket*)xptr;
        case 27: return (void*)(QIODevice*)(QUdpSocket*)xptr;
        case 54: return (void*)(QObject*)(QUdpSocket*)xptr;
        case 78: return (void*)(QUdpSocket*)xptr;
        default: return xptr;
      }
    case 79:   //QUrl
      switch(to) {
        case 79: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 80:   //QUrlInfo
      switch(to) {
        case 80: return (void*)(QUrlInfo*)xptr;
        default: return xptr;
      }
    case 81:   //QUuid
      switch(to) {
        case 81: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 82:   //QVariant
      switch(to) {
        case 82: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 83:   //QVariantComparisonHelper
      switch(to) {
        case 83: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    case 84:   //sockaddr
      switch(to) {
        case 84: return (void*)(sockaddr*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    54, 0,	// 1: QObject
    27, 0,	// 3: QIODevice
    22, 0,	// 5: QHttpHeader
    1, 0,	// 7: QAbstractNetworkCache
    73, 0,	// 9: QTcpSocket
    2, 0,	// 11: QAbstractSocket
};

// These are the xenum functions for manipulating enum pointers
void xenum_QSsl(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSslSocket(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkAccessManager(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QFtp(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkConfigurationManager(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkConfiguration(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QHttp(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSslCertificate(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkRequest(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QSslError(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkProxy(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QHostAddress(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkSession(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkCookie(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QAbstractSocket(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkProxyQuery(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkReply(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QLocalSocket(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QNetworkInterface(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QUrlInfo(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QHttpMultiPart(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QHostInfo(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QUdpSocket(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QAbstractNetworkCache(Smoke::Index, void*, Smoke::Stack);
void xcall_QAbstractSocket(Smoke::Index, void*, Smoke::Stack);
void xcall_QAuthenticator(Smoke::Index, void*, Smoke::Stack);
void xcall_QFtp(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);
void xcall_QHostAddress(Smoke::Index, void*, Smoke::Stack);
void xcall_QHostInfo(Smoke::Index, void*, Smoke::Stack);
void xcall_QHttp(Smoke::Index, void*, Smoke::Stack);
void xcall_QHttpHeader(Smoke::Index, void*, Smoke::Stack);
void xcall_QHttpMultiPart(Smoke::Index, void*, Smoke::Stack);
void xcall_QHttpPart(Smoke::Index, void*, Smoke::Stack);
void xcall_QHttpRequestHeader(Smoke::Index, void*, Smoke::Stack);
void xcall_QHttpResponseHeader(Smoke::Index, void*, Smoke::Stack);
void xcall_QIPv6Address(Smoke::Index, void*, Smoke::Stack);
void xcall_QLocalServer(Smoke::Index, void*, Smoke::Stack);
void xcall_QLocalSocket(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkAccessManager(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkAddressEntry(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkCacheMetaData(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkConfiguration(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkConfigurationManager(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkCookie(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkCookieJar(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkDiskCache(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkInterface(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkProxy(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkProxyFactory(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkProxyQuery(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkReply(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkRequest(Smoke::Index, void*, Smoke::Stack);
void xcall_QNetworkSession(Smoke::Index, void*, Smoke::Stack);
void xcall_QSsl(Smoke::Index, void*, Smoke::Stack);
void xcall_QSslCertificate(Smoke::Index, void*, Smoke::Stack);
void xcall_QSslCipher(Smoke::Index, void*, Smoke::Stack);
void xcall_QSslConfiguration(Smoke::Index, void*, Smoke::Stack);
void xcall_QSslError(Smoke::Index, void*, Smoke::Stack);
void xcall_QSslKey(Smoke::Index, void*, Smoke::Stack);
void xcall_QSslSocket(Smoke::Index, void*, Smoke::Stack);
void xcall_QTcpServer(Smoke::Index, void*, Smoke::Stack);
void xcall_QTcpSocket(Smoke::Index, void*, Smoke::Stack);
void xcall_QUdpSocket(Smoke::Index, void*, Smoke::Stack);
void xcall_QUrlInfo(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QAbstractNetworkCache", false, 1, xcall_QAbstractNetworkCache, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QAbstractNetworkCache) },	//1
    { "QAbstractSocket", false, 3, xcall_QAbstractSocket, xenum_QAbstractSocket, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QAbstractSocket) },	//2
    { "QAuthenticator", false, 0, xcall_QAuthenticator, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QAuthenticator) },	//3
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//4
    { "QBool", true, 0, 0, 0, 0, 0 },	//5
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//6
    { "QChar", true, 0, 0, 0, 0, 0 },	//7
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//8
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//9
    { "QDate", true, 0, 0, 0, 0, 0 },	//10
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//11
    { "QDebug", true, 0, 0, 0, 0, 0 },	//12
    { "QDir", true, 0, 0, 0, 0, 0 },	//13
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//14
    { "QEvent", true, 0, 0, 0, 0, 0 },	//15
    { "QFtp", false, 1, xcall_QFtp, xenum_QFtp, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QFtp) },	//16
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//17
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//18
    { "QHostAddress", false, 0, xcall_QHostAddress, xenum_QHostAddress, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QHostAddress) },	//19
    { "QHostInfo", false, 0, xcall_QHostInfo, xenum_QHostInfo, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QHostInfo) },	//20
    { "QHttp", false, 1, xcall_QHttp, xenum_QHttp, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QHttp) },	//21
    { "QHttpHeader", false, 0, xcall_QHttpHeader, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QHttpHeader) },	//22
    { "QHttpMultiPart", false, 1, xcall_QHttpMultiPart, xenum_QHttpMultiPart, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QHttpMultiPart) },	//23
    { "QHttpPart", false, 0, xcall_QHttpPart, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QHttpPart) },	//24
    { "QHttpRequestHeader", false, 5, xcall_QHttpRequestHeader, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QHttpRequestHeader) },	//25
    { "QHttpResponseHeader", false, 5, xcall_QHttpResponseHeader, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QHttpResponseHeader) },	//26
    { "QIODevice", true, 0, 0, 0, 0, 0 },	//27
    { "QIPv6Address", false, 0, xcall_QIPv6Address, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QIPv6Address) },	//28
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//29
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//30
    { "QLine", true, 0, 0, 0, 0, 0 },	//31
    { "QLineF", true, 0, 0, 0, 0, 0 },	//32
    { "QLocalServer", false, 1, xcall_QLocalServer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QLocalServer) },	//33
    { "QLocalSocket", false, 3, xcall_QLocalSocket, xenum_QLocalSocket, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QLocalSocket) },	//34
    { "QLocale", true, 0, 0, 0, 0, 0 },	//35
    { "QMargins", true, 0, 0, 0, 0, 0 },	//36
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//37
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//38
    { "QNetworkAccessManager", false, 1, xcall_QNetworkAccessManager, xenum_QNetworkAccessManager, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QNetworkAccessManager) },	//39
    { "QNetworkAddressEntry", false, 0, xcall_QNetworkAddressEntry, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkAddressEntry) },	//40
    { "QNetworkCacheMetaData", false, 0, xcall_QNetworkCacheMetaData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkCacheMetaData) },	//41
    { "QNetworkConfiguration", false, 0, xcall_QNetworkConfiguration, xenum_QNetworkConfiguration, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkConfiguration) },	//42
    { "QNetworkConfigurationManager", false, 1, xcall_QNetworkConfigurationManager, xenum_QNetworkConfigurationManager, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QNetworkConfigurationManager) },	//43
    { "QNetworkCookie", false, 0, xcall_QNetworkCookie, xenum_QNetworkCookie, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkCookie) },	//44
    { "QNetworkCookieJar", false, 1, xcall_QNetworkCookieJar, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QNetworkCookieJar) },	//45
    { "QNetworkDiskCache", false, 7, xcall_QNetworkDiskCache, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QNetworkDiskCache) },	//46
    { "QNetworkInterface", false, 0, xcall_QNetworkInterface, xenum_QNetworkInterface, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkInterface) },	//47
    { "QNetworkProxy", false, 0, xcall_QNetworkProxy, xenum_QNetworkProxy, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkProxy) },	//48
    { "QNetworkProxyFactory", false, 0, xcall_QNetworkProxyFactory, 0, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QNetworkProxyFactory) },	//49
    { "QNetworkProxyQuery", false, 0, xcall_QNetworkProxyQuery, xenum_QNetworkProxyQuery, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkProxyQuery) },	//50
    { "QNetworkReply", false, 3, xcall_QNetworkReply, xenum_QNetworkReply, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QNetworkReply) },	//51
    { "QNetworkRequest", false, 0, xcall_QNetworkRequest, xenum_QNetworkRequest, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QNetworkRequest) },	//52
    { "QNetworkSession", false, 1, xcall_QNetworkSession, xenum_QNetworkSession, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QNetworkSession) },	//53
    { "QObject", true, 0, 0, 0, 0, 0 },	//54
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//55
    { "QPoint", true, 0, 0, 0, 0, 0 },	//56
    { "QPointF", true, 0, 0, 0, 0, 0 },	//57
    { "QRect", true, 0, 0, 0, 0, 0 },	//58
    { "QRectF", true, 0, 0, 0, 0, 0 },	//59
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//60
    { "QSize", true, 0, 0, 0, 0, 0 },	//61
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//62
    { "QSsl", false, 0, xcall_QSsl, xenum_QSsl, Smoke::cf_namespace, 0 },	//63
    { "QSslCertificate", false, 0, xcall_QSslCertificate, xenum_QSslCertificate, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSslCertificate) },	//64
    { "QSslCipher", false, 0, xcall_QSslCipher, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSslCipher) },	//65
    { "QSslConfiguration", false, 0, xcall_QSslConfiguration, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSslConfiguration) },	//66
    { "QSslError", false, 0, xcall_QSslError, xenum_QSslError, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSslError) },	//67
    { "QSslKey", false, 0, xcall_QSslKey, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QSslKey) },	//68
    { "QSslSocket", false, 9, xcall_QSslSocket, xenum_QSslSocket, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QSslSocket) },	//69
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//70
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//71
    { "QTcpServer", false, 1, xcall_QTcpServer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QTcpServer) },	//72
    { "QTcpSocket", false, 11, xcall_QTcpSocket, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QTcpSocket) },	//73
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//74
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//75
    { "QTime", true, 0, 0, 0, 0, 0 },	//76
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//77
    { "QUdpSocket", false, 11, xcall_QUdpSocket, xenum_QUdpSocket, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QUdpSocket) },	//78
    { "QUrl", true, 0, 0, 0, 0, 0 },	//79
    { "QUrlInfo", false, 0, xcall_QUrlInfo, xenum_QUrlInfo, Smoke::cf_constructor|Smoke::cf_deepcopy|Smoke::cf_virtual, sizeof(QUrlInfo) },	//80
    { "QUuid", true, 0, 0, 0, 0, 0 },	//81
    { "QVariant", true, 0, 0, 0, 0, 0 },	//82
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//83
    { "sockaddr", true, 0, 0, 0, 0, 0 },	//84
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QAbstractNetworkCache*", 1, Smoke::t_class|Smoke::tf_ptr },	//2
    { "QAbstractSocket*", 2, Smoke::t_class|Smoke::tf_ptr },	//3
    { "QAbstractSocket::NetworkLayerProtocol", 2, Smoke::t_enum|Smoke::tf_stack },	//4
    { "QAbstractSocket::SocketError", 2, Smoke::t_enum|Smoke::tf_stack },	//5
    { "QAbstractSocket::SocketOption", 2, Smoke::t_enum|Smoke::tf_stack },	//6
    { "QAbstractSocket::SocketState", 2, Smoke::t_enum|Smoke::tf_stack },	//7
    { "QAbstractSocket::SocketType", 2, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QAuthenticator&", 3, Smoke::t_class|Smoke::tf_ref },	//9
    { "QAuthenticator*", 3, Smoke::t_class|Smoke::tf_ptr },	//10
    { "QBitArray", 4, Smoke::t_class|Smoke::tf_stack },	//11
    { "QBitArray&", 4, Smoke::t_class|Smoke::tf_ref },	//12
    { "QBool", 5, Smoke::t_class|Smoke::tf_stack },	//13
    { "QByteArray", 6, Smoke::t_class|Smoke::tf_stack },	//14
    { "QByteArray&", 6, Smoke::t_class|Smoke::tf_ref },	//15
    { "QChar", 7, Smoke::t_class|Smoke::tf_stack },	//16
    { "QChar&", 7, Smoke::t_class|Smoke::tf_ref },	//17
    { "QChildEvent*", 8, Smoke::t_class|Smoke::tf_ptr },	//18
    { "QCryptographicHash::Algorithm", 0, Smoke::t_enum|Smoke::tf_stack },	//19
    { "QDataStream&", 9, Smoke::t_class|Smoke::tf_ref },	//20
    { "QDate&", 10, Smoke::t_class|Smoke::tf_ref },	//21
    { "QDateTime", 11, Smoke::t_class|Smoke::tf_stack },	//22
    { "QDateTime&", 11, Smoke::t_class|Smoke::tf_ref },	//23
    { "QDebug", 12, Smoke::t_class|Smoke::tf_stack },	//24
    { "QDir::Filter", 13, Smoke::t_enum|Smoke::tf_stack },	//25
    { "QDir::SortFlag", 13, Smoke::t_enum|Smoke::tf_stack },	//26
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//27
    { "QEasingCurve&", 14, Smoke::t_class|Smoke::tf_ref },	//28
    { "QEvent*", 15, Smoke::t_class|Smoke::tf_ptr },	//29
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//30
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//31
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//32
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//33
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//34
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//35
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//36
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//37
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//38
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//39
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//40
    { "QFlags<QNetworkConfiguration::StateFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//41
    { "QFlags<QNetworkConfigurationManager::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//42
    { "QFlags<QNetworkInterface::InterfaceFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//43
    { "QFlags<QNetworkProxy::Capability>", 0, Smoke::t_uint|Smoke::tf_stack },	//44
    { "QFlags<QSsl::SslOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//45
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//46
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//47
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//48
    { "QFlags<QUdpSocket::BindFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//49
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//50
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//51
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//52
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//53
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//54
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//55
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//56
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//57
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//58
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//59
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//60
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//61
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//62
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//63
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//64
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//65
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//66
    { "QFtp*", 16, Smoke::t_class|Smoke::tf_ptr },	//67
    { "QFtp::Command", 16, Smoke::t_enum|Smoke::tf_stack },	//68
    { "QFtp::Error", 16, Smoke::t_enum|Smoke::tf_stack },	//69
    { "QFtp::State", 16, Smoke::t_enum|Smoke::tf_stack },	//70
    { "QFtp::TransferMode", 16, Smoke::t_enum|Smoke::tf_stack },	//71
    { "QFtp::TransferType", 16, Smoke::t_enum|Smoke::tf_stack },	//72
    { "QHash<QNetworkRequest::Attribute,QVariant>", 0, Smoke::t_voidp|Smoke::tf_stack },	//73
    { "QHash<QString,QVariant>", 0, Smoke::t_voidp|Smoke::tf_stack },	//74
    { "QHostAddress", 19, Smoke::t_class|Smoke::tf_stack },	//75
    { "QHostAddress&", 19, Smoke::t_class|Smoke::tf_ref },	//76
    { "QHostAddress*", 19, Smoke::t_class|Smoke::tf_ptr },	//77
    { "QHostAddress::SpecialAddress", 19, Smoke::t_enum|Smoke::tf_stack },	//78
    { "QHostInfo", 20, Smoke::t_class|Smoke::tf_stack },	//79
    { "QHostInfo&", 20, Smoke::t_class|Smoke::tf_ref },	//80
    { "QHostInfo*", 20, Smoke::t_class|Smoke::tf_ptr },	//81
    { "QHostInfo::HostInfoError", 20, Smoke::t_enum|Smoke::tf_stack },	//82
    { "QHttp*", 21, Smoke::t_class|Smoke::tf_ptr },	//83
    { "QHttp::ConnectionMode", 21, Smoke::t_enum|Smoke::tf_stack },	//84
    { "QHttp::Error", 21, Smoke::t_enum|Smoke::tf_stack },	//85
    { "QHttp::State", 21, Smoke::t_enum|Smoke::tf_stack },	//86
    { "QHttpHeader&", 22, Smoke::t_class|Smoke::tf_ref },	//87
    { "QHttpHeader*", 22, Smoke::t_class|Smoke::tf_ptr },	//88
    { "QHttpMultiPart*", 23, Smoke::t_class|Smoke::tf_ptr },	//89
    { "QHttpMultiPart::ContentType", 23, Smoke::t_enum|Smoke::tf_stack },	//90
    { "QHttpPart&", 24, Smoke::t_class|Smoke::tf_ref },	//91
    { "QHttpPart*", 24, Smoke::t_class|Smoke::tf_ptr },	//92
    { "QHttpRequestHeader", 25, Smoke::t_class|Smoke::tf_stack },	//93
    { "QHttpRequestHeader&", 25, Smoke::t_class|Smoke::tf_ref },	//94
    { "QHttpRequestHeader*", 25, Smoke::t_class|Smoke::tf_ptr },	//95
    { "QHttpResponseHeader", 26, Smoke::t_class|Smoke::tf_stack },	//96
    { "QHttpResponseHeader&", 26, Smoke::t_class|Smoke::tf_ref },	//97
    { "QHttpResponseHeader*", 26, Smoke::t_class|Smoke::tf_ptr },	//98
    { "QIODevice*", 27, Smoke::t_class|Smoke::tf_ptr },	//99
    { "QIODevice::OpenMode", 0, Smoke::t_uint|Smoke::tf_stack },	//100
    { "QIODevice::OpenModeFlag", 27, Smoke::t_enum|Smoke::tf_stack },	//101
    { "QIPv6Address", 28, Smoke::t_class|Smoke::tf_stack },	//102
    { "QIPv6Address*", 28, Smoke::t_class|Smoke::tf_ptr },	//103
    { "QIncompatibleFlag", 29, Smoke::t_class|Smoke::tf_stack },	//104
    { "QIntegerForSizeof< void* >::Unsigned", 0, Smoke::t_voidp|Smoke::tf_stack },	//105
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//106
    { "QLine&", 31, Smoke::t_class|Smoke::tf_ref },	//107
    { "QLineF&", 32, Smoke::t_class|Smoke::tf_ref },	//108
    { "QList<QByteArray>", 0, Smoke::t_voidp|Smoke::tf_stack },	//109
    { "QList<QHostAddress>", 0, Smoke::t_voidp|Smoke::tf_stack },	//110
    { "QList<QNetworkAddressEntry>", 0, Smoke::t_voidp|Smoke::tf_stack },	//111
    { "QList<QNetworkConfiguration>", 0, Smoke::t_voidp|Smoke::tf_stack },	//112
    { "QList<QNetworkCookie>", 0, Smoke::t_voidp|Smoke::tf_stack },	//113
    { "QList<QNetworkInterface>", 0, Smoke::t_voidp|Smoke::tf_stack },	//114
    { "QList<QNetworkProxy>", 0, Smoke::t_voidp|Smoke::tf_stack },	//115
    { "QList<QPair<QByteArray,QByteArray> >", 0, Smoke::t_voidp|Smoke::tf_stack },	//116
    { "QList<QPair<QString,QString> >", 0, Smoke::t_voidp|Smoke::tf_stack },	//117
    { "QList<QSslCertificate>", 0, Smoke::t_voidp|Smoke::tf_stack },	//118
    { "QList<QSslCipher>", 0, Smoke::t_voidp|Smoke::tf_stack },	//119
    { "QList<QSslError>", 0, Smoke::t_voidp|Smoke::tf_stack },	//120
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//121
    { "QLocalServer*", 33, Smoke::t_class|Smoke::tf_ptr },	//122
    { "QLocalSocket*", 34, Smoke::t_class|Smoke::tf_ptr },	//123
    { "QLocalSocket::LocalSocketError", 34, Smoke::t_enum|Smoke::tf_stack },	//124
    { "QLocalSocket::LocalSocketState", 34, Smoke::t_enum|Smoke::tf_stack },	//125
    { "QLocale&", 35, Smoke::t_class|Smoke::tf_ref },	//126
    { "QLocale::NumberOption", 35, Smoke::t_enum|Smoke::tf_stack },	//127
    { "QMetaObject::Call", 37, Smoke::t_enum|Smoke::tf_stack },	//128
    { "QMultiMap<QSsl::AlternateNameEntryType,QString>", 0, Smoke::t_voidp|Smoke::tf_stack },	//129
    { "QNetworkAccessManager*", 39, Smoke::t_class|Smoke::tf_ptr },	//130
    { "QNetworkAccessManager::NetworkAccessibility", 39, Smoke::t_enum|Smoke::tf_stack },	//131
    { "QNetworkAccessManager::Operation", 39, Smoke::t_enum|Smoke::tf_stack },	//132
    { "QNetworkAddressEntry&", 40, Smoke::t_class|Smoke::tf_ref },	//133
    { "QNetworkAddressEntry*", 40, Smoke::t_class|Smoke::tf_ptr },	//134
    { "QNetworkCacheMetaData", 41, Smoke::t_class|Smoke::tf_stack },	//135
    { "QNetworkCacheMetaData&", 41, Smoke::t_class|Smoke::tf_ref },	//136
    { "QNetworkCacheMetaData*", 41, Smoke::t_class|Smoke::tf_ptr },	//137
    { "QNetworkConfiguration", 42, Smoke::t_class|Smoke::tf_stack },	//138
    { "QNetworkConfiguration&", 42, Smoke::t_class|Smoke::tf_ref },	//139
    { "QNetworkConfiguration*", 42, Smoke::t_class|Smoke::tf_ptr },	//140
    { "QNetworkConfiguration::BearerType", 42, Smoke::t_enum|Smoke::tf_stack },	//141
    { "QNetworkConfiguration::Purpose", 42, Smoke::t_enum|Smoke::tf_stack },	//142
    { "QNetworkConfiguration::StateFlag", 42, Smoke::t_enum|Smoke::tf_stack },	//143
    { "QNetworkConfiguration::Type", 42, Smoke::t_enum|Smoke::tf_stack },	//144
    { "QNetworkConfigurationManager*", 43, Smoke::t_class|Smoke::tf_ptr },	//145
    { "QNetworkConfigurationManager::Capability", 43, Smoke::t_enum|Smoke::tf_stack },	//146
    { "QNetworkCookie&", 44, Smoke::t_class|Smoke::tf_ref },	//147
    { "QNetworkCookie*", 44, Smoke::t_class|Smoke::tf_ptr },	//148
    { "QNetworkCookie::RawForm", 44, Smoke::t_enum|Smoke::tf_stack },	//149
    { "QNetworkCookieJar*", 45, Smoke::t_class|Smoke::tf_ptr },	//150
    { "QNetworkDiskCache*", 46, Smoke::t_class|Smoke::tf_ptr },	//151
    { "QNetworkInterface", 47, Smoke::t_class|Smoke::tf_stack },	//152
    { "QNetworkInterface&", 47, Smoke::t_class|Smoke::tf_ref },	//153
    { "QNetworkInterface*", 47, Smoke::t_class|Smoke::tf_ptr },	//154
    { "QNetworkInterface::InterfaceFlag", 47, Smoke::t_enum|Smoke::tf_stack },	//155
    { "QNetworkProxy", 48, Smoke::t_class|Smoke::tf_stack },	//156
    { "QNetworkProxy&", 48, Smoke::t_class|Smoke::tf_ref },	//157
    { "QNetworkProxy*", 48, Smoke::t_class|Smoke::tf_ptr },	//158
    { "QNetworkProxy::Capability", 48, Smoke::t_enum|Smoke::tf_stack },	//159
    { "QNetworkProxy::ProxyType", 48, Smoke::t_enum|Smoke::tf_stack },	//160
    { "QNetworkProxyFactory*", 49, Smoke::t_class|Smoke::tf_ptr },	//161
    { "QNetworkProxyQuery&", 50, Smoke::t_class|Smoke::tf_ref },	//162
    { "QNetworkProxyQuery*", 50, Smoke::t_class|Smoke::tf_ptr },	//163
    { "QNetworkProxyQuery::QueryType", 50, Smoke::t_enum|Smoke::tf_stack },	//164
    { "QNetworkReply*", 51, Smoke::t_class|Smoke::tf_ptr },	//165
    { "QNetworkReply::NetworkError", 51, Smoke::t_enum|Smoke::tf_stack },	//166
    { "QNetworkRequest", 52, Smoke::t_class|Smoke::tf_stack },	//167
    { "QNetworkRequest&", 52, Smoke::t_class|Smoke::tf_ref },	//168
    { "QNetworkRequest*", 52, Smoke::t_class|Smoke::tf_ptr },	//169
    { "QNetworkRequest::Attribute", 52, Smoke::t_enum|Smoke::tf_stack },	//170
    { "QNetworkRequest::CacheLoadControl", 52, Smoke::t_enum|Smoke::tf_stack },	//171
    { "QNetworkRequest::KnownHeaders", 52, Smoke::t_enum|Smoke::tf_stack },	//172
    { "QNetworkRequest::LoadControl", 52, Smoke::t_enum|Smoke::tf_stack },	//173
    { "QNetworkRequest::Priority", 52, Smoke::t_enum|Smoke::tf_stack },	//174
    { "QNetworkSession*", 53, Smoke::t_class|Smoke::tf_ptr },	//175
    { "QNetworkSession::SessionError", 53, Smoke::t_enum|Smoke::tf_stack },	//176
    { "QNetworkSession::State", 53, Smoke::t_enum|Smoke::tf_stack },	//177
    { "QObject*", 54, Smoke::t_class|Smoke::tf_ptr },	//178
    { "QObject*(*)()", 54, Smoke::t_class|Smoke::tf_ptr },	//179
    { "QPair<QHostAddress,int>", 0, Smoke::t_voidp|Smoke::tf_stack },	//180
    { "QPoint&", 56, Smoke::t_class|Smoke::tf_ref },	//181
    { "QPointF&", 57, Smoke::t_class|Smoke::tf_ref },	//182
    { "QRect&", 58, Smoke::t_class|Smoke::tf_ref },	//183
    { "QRectF&", 59, Smoke::t_class|Smoke::tf_ref },	//184
    { "QRegExp&", 60, Smoke::t_class|Smoke::tf_ref },	//185
    { "QRegExp::PatternSyntax", 60, Smoke::t_enum|Smoke::tf_stack },	//186
    { "QSize&", 61, Smoke::t_class|Smoke::tf_ref },	//187
    { "QSizeF&", 62, Smoke::t_class|Smoke::tf_ref },	//188
    { "QSsl::AlternateNameEntryType", 63, Smoke::t_enum|Smoke::tf_stack },	//189
    { "QSsl::EncodingFormat", 63, Smoke::t_enum|Smoke::tf_stack },	//190
    { "QSsl::KeyAlgorithm", 63, Smoke::t_enum|Smoke::tf_stack },	//191
    { "QSsl::KeyType", 63, Smoke::t_enum|Smoke::tf_stack },	//192
    { "QSsl::SslOption", 63, Smoke::t_enum|Smoke::tf_stack },	//193
    { "QSsl::SslProtocol", 63, Smoke::t_enum|Smoke::tf_stack },	//194
    { "QSslCertificate", 64, Smoke::t_class|Smoke::tf_stack },	//195
    { "QSslCertificate&", 64, Smoke::t_class|Smoke::tf_ref },	//196
    { "QSslCertificate*", 64, Smoke::t_class|Smoke::tf_ptr },	//197
    { "QSslCertificate::SubjectInfo", 64, Smoke::t_enum|Smoke::tf_stack },	//198
    { "QSslCipher", 65, Smoke::t_class|Smoke::tf_stack },	//199
    { "QSslCipher&", 65, Smoke::t_class|Smoke::tf_ref },	//200
    { "QSslCipher*", 65, Smoke::t_class|Smoke::tf_ptr },	//201
    { "QSslConfiguration", 66, Smoke::t_class|Smoke::tf_stack },	//202
    { "QSslConfiguration&", 66, Smoke::t_class|Smoke::tf_ref },	//203
    { "QSslConfiguration*", 66, Smoke::t_class|Smoke::tf_ptr },	//204
    { "QSslError", 67, Smoke::t_class|Smoke::tf_stack },	//205
    { "QSslError&", 67, Smoke::t_class|Smoke::tf_ref },	//206
    { "QSslError*", 67, Smoke::t_class|Smoke::tf_ptr },	//207
    { "QSslError::SslError", 67, Smoke::t_enum|Smoke::tf_stack },	//208
    { "QSslKey", 68, Smoke::t_class|Smoke::tf_stack },	//209
    { "QSslKey&", 68, Smoke::t_class|Smoke::tf_ref },	//210
    { "QSslKey*", 68, Smoke::t_class|Smoke::tf_ptr },	//211
    { "QSslSocket*", 69, Smoke::t_class|Smoke::tf_ptr },	//212
    { "QSslSocket::PeerVerifyMode", 69, Smoke::t_enum|Smoke::tf_stack },	//213
    { "QSslSocket::SslMode", 69, Smoke::t_enum|Smoke::tf_stack },	//214
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//215
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//216
    { "QString::Null", 70, Smoke::t_class|Smoke::tf_stack },	//217
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//218
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//219
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//220
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//221
    { "QTcpServer*", 72, Smoke::t_class|Smoke::tf_ptr },	//222
    { "QTcpSocket*", 73, Smoke::t_class|Smoke::tf_ptr },	//223
    { "QTextCodec::ConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//224
    { "QTextStream&", 74, Smoke::t_class|Smoke::tf_ref },	//225
    { "QTextStream&(*)(QTextStream&)", 74, Smoke::t_class|Smoke::tf_ref },	//226
    { "QTextStream::NumberFlag", 74, Smoke::t_enum|Smoke::tf_stack },	//227
    { "QTextStreamManipulator", 75, Smoke::t_class|Smoke::tf_stack },	//228
    { "QTime&", 76, Smoke::t_class|Smoke::tf_ref },	//229
    { "QTimerEvent*", 77, Smoke::t_class|Smoke::tf_ptr },	//230
    { "QUdpSocket*", 78, Smoke::t_class|Smoke::tf_ptr },	//231
    { "QUdpSocket::BindFlag", 78, Smoke::t_enum|Smoke::tf_stack },	//232
    { "QUrl", 79, Smoke::t_class|Smoke::tf_stack },	//233
    { "QUrl&", 79, Smoke::t_class|Smoke::tf_ref },	//234
    { "QUrl::FormattingOption", 79, Smoke::t_enum|Smoke::tf_stack },	//235
    { "QUrlInfo", 80, Smoke::t_class|Smoke::tf_stack },	//236
    { "QUrlInfo&", 80, Smoke::t_class|Smoke::tf_ref },	//237
    { "QUrlInfo*", 80, Smoke::t_class|Smoke::tf_ptr },	//238
    { "QUrlInfo::PermissionSpec", 80, Smoke::t_enum|Smoke::tf_stack },	//239
    { "QUuid&", 81, Smoke::t_class|Smoke::tf_ref },	//240
    { "QVariant", 82, Smoke::t_class|Smoke::tf_stack },	//241
    { "QVariant&", 82, Smoke::t_class|Smoke::tf_ref },	//242
    { "QVariant::Type", 82, Smoke::t_enum|Smoke::tf_stack },	//243
    { "QVariant::Type&", 82, Smoke::t_enum|Smoke::tf_ref },	//244
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//245
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//246
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//247
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//248
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//249
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//250
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//251
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//252
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//253
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//254
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//255
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//256
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//257
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//258
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//259
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//260
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//261
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//262
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//263
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//264
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//265
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//266
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//267
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//268
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//269
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//270
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//271
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//272
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//273
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//274
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//275
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//276
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//277
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//278
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//279
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//280
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//281
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//282
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//283
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//284
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//285
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//286
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//287
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//288
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//289
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//290
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//291
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//292
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//293
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//294
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//295
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//296
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//297
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//298
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//299
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//300
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//301
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//302
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//303
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//304
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//305
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//306
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//307
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//308
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//309
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//310
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//311
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//312
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//313
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//314
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//315
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//316
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//317
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//318
    { "QtMsgType", 17, Smoke::t_enum|Smoke::tf_stack },	//319
    { "QtValidLicenseForActiveQtModule", 17, Smoke::t_enum|Smoke::tf_stack },	//320
    { "QtValidLicenseForCoreModule", 17, Smoke::t_enum|Smoke::tf_stack },	//321
    { "QtValidLicenseForDBusModule", 17, Smoke::t_enum|Smoke::tf_stack },	//322
    { "QtValidLicenseForDeclarativeModule", 17, Smoke::t_enum|Smoke::tf_stack },	//323
    { "QtValidLicenseForGuiModule", 17, Smoke::t_enum|Smoke::tf_stack },	//324
    { "QtValidLicenseForHelpModule", 17, Smoke::t_enum|Smoke::tf_stack },	//325
    { "QtValidLicenseForMultimediaModule", 17, Smoke::t_enum|Smoke::tf_stack },	//326
    { "QtValidLicenseForNetworkModule", 17, Smoke::t_enum|Smoke::tf_stack },	//327
    { "QtValidLicenseForOpenGLModule", 17, Smoke::t_enum|Smoke::tf_stack },	//328
    { "QtValidLicenseForOpenVGModule", 17, Smoke::t_enum|Smoke::tf_stack },	//329
    { "QtValidLicenseForQt3SupportLightModule", 17, Smoke::t_enum|Smoke::tf_stack },	//330
    { "QtValidLicenseForQt3SupportModule", 17, Smoke::t_enum|Smoke::tf_stack },	//331
    { "QtValidLicenseForScriptModule", 17, Smoke::t_enum|Smoke::tf_stack },	//332
    { "QtValidLicenseForScriptToolsModule", 17, Smoke::t_enum|Smoke::tf_stack },	//333
    { "QtValidLicenseForSqlModule", 17, Smoke::t_enum|Smoke::tf_stack },	//334
    { "QtValidLicenseForSvgModule", 17, Smoke::t_enum|Smoke::tf_stack },	//335
    { "QtValidLicenseForTestModule", 17, Smoke::t_enum|Smoke::tf_stack },	//336
    { "QtValidLicenseForXmlModule", 17, Smoke::t_enum|Smoke::tf_stack },	//337
    { "QtValidLicenseForXmlPatternsModule", 17, Smoke::t_enum|Smoke::tf_stack },	//338
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//339
    { "bool*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//340
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//341
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//342
    { "const QAuthenticator&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//343
    { "const QBitArray&", 4, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//344
    { "const QByteArray", 6, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//345
    { "const QByteArray&", 6, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//346
    { "const QChar&", 7, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//347
    { "const QDate&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//348
    { "const QDateTime&", 11, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//349
    { "const QDir&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//350
    { "const QEasingCurve&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//351
    { "const QHash<QNetworkRequest::Attribute,QVariant>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//352
    { "const QHashDummyValue&", 18, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//353
    { "const QHostAddress&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//354
    { "const QHostInfo&", 20, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//355
    { "const QHttpHeader&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//356
    { "const QHttpPart&", 24, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//357
    { "const QHttpRequestHeader&", 25, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//358
    { "const QHttpResponseHeader&", 26, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//359
    { "const QIPv6Address&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//360
    { "const QLatin1String&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//361
    { "const QLine&", 31, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//362
    { "const QLineF&", 32, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//363
    { "const QList<QHostAddress>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//364
    { "const QList<QNetworkCookie>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//365
    { "const QList<QPair<QByteArray,QByteArray> >&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//366
    { "const QList<QPair<QString,QString> >&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//367
    { "const QList<QSslCertificate>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//368
    { "const QList<QSslCipher>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//369
    { "const QList<QSslError>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//370
    { "const QLocale&", 35, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//371
    { "const QMargins&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//372
    { "const QMetaObject&", 37, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//373
    { "const QMetaObject*", 37, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//374
    { "const QModelIndex&", 38, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//375
    { "const QNetworkAddressEntry&", 40, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//376
    { "const QNetworkCacheMetaData&", 41, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//377
    { "const QNetworkConfiguration&", 42, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//378
    { "const QNetworkCookie&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//379
    { "const QNetworkInterface&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//380
    { "const QNetworkProxy&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//381
    { "const QNetworkProxyFactory&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//382
    { "const QNetworkProxyQuery&", 50, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//383
    { "const QNetworkRequest&", 52, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//384
    { "const QObject*", 54, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//385
    { "const QPair<QHostAddress,int>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//386
    { "const QPersistentModelIndex&", 55, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//387
    { "const QPoint", 56, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//388
    { "const QPoint&", 56, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//389
    { "const QPointF", 57, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//390
    { "const QPointF&", 57, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//391
    { "const QRect&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//392
    { "const QRectF&", 59, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//393
    { "const QRegExp&", 60, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//394
    { "const QRegExp*", 60, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//395
    { "const QSize", 61, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//396
    { "const QSize&", 61, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//397
    { "const QSizeF", 62, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//398
    { "const QSizeF&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//399
    { "const QSslCertificate&", 64, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//400
    { "const QSslCipher&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//401
    { "const QSslConfiguration&", 66, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//402
    { "const QSslError&", 67, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//403
    { "const QSslError::SslError&", 67, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//404
    { "const QSslKey&", 68, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//405
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//406
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//407
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//408
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//409
    { "const QStringRef&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//410
    { "const QTime&", 76, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//411
    { "const QUrl&", 79, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//412
    { "const QUrlInfo&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//413
    { "const QUuid&", 81, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//414
    { "const QVariant&", 82, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//415
    { "const QVariant::Type", 82, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//416
    { "const QVariantComparisonHelper&", 83, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//417
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//418
    { "const sockaddr*", 84, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//419
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//420
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//421
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//422
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//423
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//424
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//425
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//426
    { "qint64", 0, Smoke::t_voidp|Smoke::tf_stack },	//427
    { "quint16", 0, Smoke::t_ushort|Smoke::tf_stack },	//428
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//429
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//430
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//431
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//432
    { "unsigned char&", 0, Smoke::t_voidp|Smoke::tf_ref },	//433
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//434
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//435
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//436
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//437
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//438
    { "unsigned short*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//439
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//440
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//441
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//442
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//443
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//444
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//445
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    418, 0,	//1  const char*
    418, 418, 0,	//3  const char*, const char*
    418, 418, 424, 0,	//6  const char*, const char*, int
    128, 424, 444, 0,	//10  QMetaObject::Call, int, void**
    412, 0,	//14  const QUrl&
    377, 0,	//16  const QNetworkCacheMetaData&
    99, 0,	//18  QIODevice*
    178, 0,	//20  QObject*
    8, 178, 0,	//22  QAbstractSocket::SocketType, QObject*
    407, 438, 38, 0,	//25  const QString&, unsigned short, QFlags<QIODevice::OpenModeFlag>
    354, 438, 38, 0,	//29  const QHostAddress&, unsigned short, QFlags<QIODevice::OpenModeFlag>
    426, 0,	//33  long long
    424, 7, 38, 0,	//35  int, QAbstractSocket::SocketState, QFlags<QIODevice::OpenModeFlag>
    6, 415, 0,	//39  QAbstractSocket::SocketOption, const QVariant&
    6, 0,	//42  QAbstractSocket::SocketOption
    424, 0,	//44  int
    381, 0,	//46  const QNetworkProxy&
    7, 0,	//48  QAbstractSocket::SocketState
    5, 0,	//50  QAbstractSocket::SocketError
    381, 10, 0,	//52  const QNetworkProxy&, QAuthenticator*
    407, 428, 100, 0,	//55  const QString&, quint16, QIODevice::OpenMode
    342, 426, 0,	//59  char*, long long
    418, 426, 0,	//62  const char*, long long
    438, 0,	//65  unsigned short
    354, 0,	//67  const QHostAddress&
    407, 0,	//69  const QString&
    407, 438, 0,	//71  const QString&, unsigned short
    354, 438, 0,	//74  const QHostAddress&, unsigned short
    424, 7, 0,	//77  int, QAbstractSocket::SocketState
    407, 428, 0,	//80  const QString&, quint16
    343, 0,	//83  const QAuthenticator&
    407, 415, 0,	//85  const QString&, const QVariant&
    407, 407, 0,	//88  const QString&, const QString&
    71, 0,	//91  QFtp::TransferMode
    407, 99, 72, 0,	//93  const QString&, QIODevice*, QFtp::TransferType
    346, 407, 72, 0,	//97  const QByteArray&, const QString&, QFtp::TransferType
    99, 407, 72, 0,	//101  QIODevice*, const QString&, QFtp::TransferType
    413, 0,	//105  const QUrlInfo&
    427, 427, 0,	//107  qint64, qint64
    424, 407, 0,	//110  int, const QString&
    424, 339, 0,	//113  int, bool
    339, 0,	//116  bool
    407, 99, 0,	//118  const QString&, QIODevice*
    346, 407, 0,	//121  const QByteArray&, const QString&
    99, 407, 0,	//124  QIODevice*, const QString&
    422, 0,	//127  double
    31, 31, 0,	//129  QFile::Permission, QFile::Permission
    20, 17, 0,	//132  QDataStream&, QChar&
    27, 35, 0,	//135  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    20, 126, 0,	//138  QDataStream&, QLocale&
    316, 424, 0,	//141  Qt::WindowType, int
    342, 418, 435, 0,	//144  char*, const char*, unsigned int
    435, 0,	//148  unsigned int
    341, 0,	//150  char
    399, 422, 0,	//152  const QSizeF&, double
    24, 362, 0,	//155  QDebug, const QLine&
    346, 418, 0,	//158  const QByteArray&, const char*
    20, 183, 0,	//161  QDataStream&, QRect&
    281, 281, 0,	//164  Qt::ItemFlag, Qt::ItemFlag
    415, 417, 0,	//167  const QVariant&, const QVariantComparisonHelper&
    24, 38, 0,	//170  QDebug, QFlags<QIODevice::OpenModeFlag>
    397, 397, 0,	//173  const QSize&, const QSize&
    24, 354, 0,	//176  QDebug, const QHostAddress&
    16, 407, 0,	//179  QChar, const QString&
    418, 418, 435, 0,	//182  const char*, const char*, unsigned int
    410, 410, 0,	//186  const QStringRef&, const QStringRef&
    24, 124, 0,	//189  QDebug, QLocalSocket::LocalSocketError
    342, 431, 418, 440, 0,	//192  char*, size_t, const char*, va_list
    391, 391, 0,	//197  const QPointF&, const QPointF&
    407, 410, 0,	//200  const QString&, const QStringRef&
    20, 354, 0,	//203  QDataStream&, const QHostAddress&
    407, 16, 0,	//206  const QString&, QChar
    418, 435, 0,	//209  const char*, unsigned int
    20, 28, 0,	//212  QDataStream&, QEasingCurve&
    24, 348, 0,	//215  QDebug, const QDate&
    361, 410, 0,	//218  const QLatin1String&, const QStringRef&
    306, 306, 0,	//221  Qt::ToolBarArea, Qt::ToolBarArea
    24, 363, 0,	//224  QDebug, const QLineF&
    393, 393, 0,	//227  const QRectF&, const QRectF&
    432, 0,	//230  unsigned char
    385, 407, 395, 373, 121, 0,	//232  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    410, 361, 0,	//238  const QStringRef&, const QLatin1String&
    20, 21, 0,	//241  QDataStream&, QDate&
    423, 0,	//244  float
    303, 424, 0,	//246  Qt::TextInteractionFlag, int
    16, 16, 0,	//249  QChar, QChar
    16, 0,	//252  QChar
    20, 234, 0,	//254  QDataStream&, QUrl&
    24, 375, 0,	//257  QDebug, const QModelIndex&
    106, 39, 0,	//260  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    24, 404, 0,	//263  QDebug, const QSslError::SslError&
    418, 424, 0,	//266  const char*, int
    422, 422, 0,	//269  double, double
    20, 416, 0,	//272  QDataStream&, const QVariant::Type
    429, 0,	//275  short
    20, 415, 0,	//277  QDataStream&, const QVariant&
    303, 62, 0,	//280  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    24, 400, 0,	//283  QDebug, const QSslCertificate&
    281, 57, 0,	//286  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    425, 0,	//289  long
    278, 56, 0,	//291  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    20, 399, 0,	//294  QDataStream&, const QSizeF&
    217, 217, 0,	//297  QString::Null, QString::Null
    418, 346, 0,	//300  const char*, const QByteArray&
    155, 155, 0,	//303  QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag
    155, 43, 0,	//306  QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>
    78, 354, 0,	//309  QHostAddress::SpecialAddress, const QHostAddress&
    344, 0,	//312  const QBitArray&
    27, 27, 0,	//314  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    342, 418, 0,	//317  char*, const char*
    344, 344, 0,	//320  const QBitArray&, const QBitArray&
    389, 389, 0,	//323  const QPoint&, const QPoint&
    284, 58, 0,	//326  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    391, 422, 0,	//329  const QPointF&, double
    24, 399, 0,	//332  QDebug, const QSizeF&
    353, 353, 0,	//335  const QHashDummyValue&, const QHashDummyValue&
    1, 1, 0,	//338  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    232, 424, 0,	//341  QUdpSocket::BindFlag, int
    392, 392, 0,	//344  const QRect&, const QRect&
    20, 240, 0,	//347  QDataStream&, QUuid&
    346, 346, 0,	//350  const QByteArray&, const QByteArray&
    420, 424, 0,	//353  const unsigned char*, int
    232, 49, 0,	//356  QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>
    346, 424, 0,	//359  const QByteArray&, int
    346, 0,	//362  const QByteArray&
    20, 407, 0,	//364  QDataStream&, const QString&
    225, 226, 0,	//367  QTextStream&, QTextStream&(*)(QTextStream&)
    24, 403, 0,	//370  QDebug, const QSslError&
    267, 424, 0,	//373  Qt::DropAction, int
    443, 431, 431, 431, 0,	//376  void*, size_t, size_t, size_t
    287, 424, 0,	//381  Qt::MatchFlag, int
    20, 389, 0,	//384  QDataStream&, const QPoint&
    24, 7, 0,	//387  QDebug, QAbstractSocket::SocketState
    24, 392, 0,	//390  QDebug, const QRect&
    24, 5, 0,	//393  QDebug, QAbstractSocket::SocketError
    224, 47, 0,	//396  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    303, 303, 0,	//399  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    218, 46, 0,	//402  QString::SectionFlag, QFlags<QString::SectionFlag>
    24, 350, 0,	//405  QDebug, const QDir&
    289, 289, 0,	//408  Qt::MouseButton, Qt::MouseButton
    443, 431, 0,	//411  void*, size_t
    267, 267, 0,	//414  Qt::DropAction, Qt::DropAction
    193, 424, 0,	//417  QSsl::SslOption, int
    1, 424, 0,	//420  QAbstractFileEngine::FileFlag, int
    407, 217, 0,	//423  const QString&, QString::Null
    272, 54, 0,	//426  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    30, 424, 0,	//429  QEventLoop::ProcessEventsFlag, int
    24, 198, 0,	//432  QDebug, QSslCertificate::SubjectInfo
    101, 101, 0,	//435  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    127, 127, 0,	//438  QLocale::NumberOption, QLocale::NumberOption
    20, 108, 0,	//441  QDataStream&, QLineF&
    24, 405, 0,	//444  QDebug, const QSslKey&
    20, 363, 0,	//447  QDataStream&, const QLineF&
    399, 399, 0,	//450  const QSizeF&, const QSizeF&
    422, 397, 0,	//453  double, const QSize&
    265, 52, 0,	//456  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    287, 59, 0,	//459  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    389, 423, 0,	//462  const QPoint&, float
    391, 0,	//465  const QPointF&
    245, 424, 0,	//467  Qt::AlignmentFlag, int
    276, 424, 0,	//470  Qt::ImageConversionFlag, int
    24, 397, 0,	//473  QDebug, const QSize&
    224, 424, 0,	//476  QTextCodec::ConversionFlag, int
    24, 389, 0,	//479  QDebug, const QPoint&
    389, 0,	//482  const QPoint&
    24, 412, 0,	//484  QDebug, const QUrl&
    20, 391, 0,	//487  QDataStream&, const QPointF&
    224, 224, 0,	//490  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    20, 76, 0,	//493  QDataStream&, QHostAddress&
    13, 13, 0,	//496  QBool, QBool
    418, 410, 0,	//499  const char*, const QStringRef&
    437, 0,	//502  unsigned long long
    227, 424, 0,	//504  QTextStream::NumberFlag, int
    24, 391, 0,	//507  QDebug, const QPointF&
    217, 407, 0,	//510  QString::Null, const QString&
    441, 0,	//513  void(*)()
    127, 40, 0,	//515  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    272, 272, 0,	//518  Qt::GestureFlag, Qt::GestureFlag
    20, 184, 0,	//521  QDataStream&, QRectF&
    423, 423, 0,	//524  float, float
    20, 347, 0,	//527  QDataStream&, const QChar&
    20, 182, 0,	//530  QDataStream&, QPointF&
    397, 422, 0,	//533  const QSize&, double
    442, 0,	//536  void(*)(QtMsgType,const char*)
    225, 228, 0,	//538  QTextStream&, QTextStreamManipulator
    245, 245, 0,	//541  Qt::AlignmentFlag, Qt::AlignmentFlag
    20, 107, 0,	//544  QDataStream&, QLine&
    25, 25, 0,	//547  QDir::Filter, QDir::Filter
    389, 422, 0,	//550  const QPoint&, double
    20, 346, 0,	//553  QDataStream&, const QByteArray&
    20, 351, 0,	//556  QDataStream&, const QEasingCurve&
    20, 377, 0,	//559  QDataStream&, const QNetworkCacheMetaData&
    276, 276, 0,	//562  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    315, 424, 0,	//565  Qt::WindowState, int
    20, 216, 0,	//568  QDataStream&, QString&
    385, 407, 373, 0,	//571  const QObject*, const QString&, const QMetaObject&
    20, 393, 0,	//575  QDataStream&, const QRectF&
    20, 12, 0,	//578  QDataStream&, QBitArray&
    20, 187, 0,	//581  QDataStream&, QSize&
    284, 284, 0,	//584  Qt::KeyboardModifier, Qt::KeyboardModifier
    339, 13, 0,	//587  bool, QBool
    227, 227, 0,	//590  QTextStream::NumberFlag, QTextStream::NumberFlag
    20, 23, 0,	//593  QDataStream&, QDateTime&
    415, 243, 443, 0,	//596  const QVariant&, QVariant::Type, void*
    410, 407, 0,	//600  const QStringRef&, const QString&
    420, 434, 424, 0,	//603  const unsigned char*, unsigned char*, int
    284, 424, 0,	//607  Qt::KeyboardModifier, int
    20, 349, 0,	//610  QDataStream&, const QDateTime&
    319, 418, 0,	//613  QtMsgType, const char*
    30, 36, 0,	//616  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    372, 372, 0,	//619  const QMargins&, const QMargins&
    235, 235, 0,	//622  QUrl::FormattingOption, QUrl::FormattingOption
    159, 159, 0,	//625  QNetworkProxy::Capability, QNetworkProxy::Capability
    146, 42, 0,	//628  QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>
    24, 416, 0,	//631  QDebug, const QVariant::Type
    20, 229, 0,	//634  QDataStream&, QTime&
    265, 424, 0,	//637  Qt::DockWidgetArea, int
    316, 316, 0,	//640  Qt::WindowType, Qt::WindowType
    24, 349, 0,	//643  QDebug, const QDateTime&
    443, 424, 431, 0,	//646  void*, int, size_t
    430, 0,	//650  signed char
    316, 66, 0,	//652  Qt::WindowType, QFlags<Qt::WindowType>
    315, 315, 0,	//655  Qt::WindowState, Qt::WindowState
    20, 220, 0,	//658  QDataStream&, QStringList&
    24, 415, 0,	//661  QDebug, const QVariant&
    31, 424, 0,	//664  QFile::Permission, int
    179, 0,	//667  QObject*(*)()
    422, 391, 0,	//669  double, const QPointF&
    424, 389, 0,	//672  int, const QPoint&
    20, 412, 0,	//675  QDataStream&, const QUrl&
    20, 181, 0,	//678  QDataStream&, QPoint&
    20, 411, 0,	//681  QDataStream&, const QTime&
    232, 232, 0,	//684  QUdpSocket::BindFlag, QUdpSocket::BindFlag
    410, 0,	//687  const QStringRef&
    20, 185, 0,	//689  QDataStream&, QRegExp&
    278, 424, 0,	//692  Qt::InputMethodHint, int
    20, 371, 0,	//695  QDataStream&, const QLocale&
    431, 431, 0,	//698  size_t, size_t
    20, 344, 0,	//701  QDataStream&, const QBitArray&
    418, 418, 418, 424, 0,	//704  const char*, const char*, const char*, int
    235, 50, 0,	//709  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    30, 30, 0,	//712  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    346, 341, 0,	//715  const QByteArray&, char
    159, 424, 0,	//718  QNetworkProxy::Capability, int
    106, 106, 0,	//721  QLibrary::LoadHint, QLibrary::LoadHint
    245, 51, 0,	//724  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    20, 414, 0,	//727  QDataStream&, const QUuid&
    101, 38, 0,	//730  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    20, 362, 0,	//733  QDataStream&, const QLine&
    272, 424, 0,	//736  Qt::GestureFlag, int
    410, 418, 0,	//739  const QStringRef&, const char*
    26, 34, 0,	//742  QDir::SortFlag, QFlags<QDir::SortFlag>
    24, 379, 0,	//745  QDebug, const QNetworkCookie&
    20, 348, 0,	//748  QDataStream&, const QDate&
    341, 346, 0,	//751  char, const QByteArray&
    106, 424, 0,	//754  QLibrary::LoadHint, int
    420, 424, 424, 0,	//757  const unsigned char*, int, int
    291, 291, 0,	//761  Qt::Orientation, Qt::Orientation
    13, 339, 0,	//764  QBool, bool
    20, 408, 0,	//767  QDataStream&, const QStringList&
    20, 394, 0,	//770  QDataStream&, const QRegExp&
    26, 424, 0,	//773  QDir::SortFlag, int
    443, 421, 431, 0,	//776  void*, const void*, size_t
    443, 0,	//780  void*
    306, 63, 0,	//782  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    24, 125, 0,	//785  QDebug, QLocalSocket::LocalSocketState
    24, 387, 0,	//788  QDebug, const QPersistentModelIndex&
    20, 242, 0,	//791  QDataStream&, QVariant&
    309, 64, 0,	//794  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    423, 389, 0,	//797  float, const QPoint&
    422, 389, 0,	//800  double, const QPoint&
    24, 380, 0,	//803  QDebug, const QNetworkInterface&
    24, 385, 0,	//806  QDebug, const QObject*
    24, 401, 0,	//809  QDebug, const QSslCipher&
    31, 37, 0,	//812  QFile::Permission, QFlags<QFile::Permission>
    20, 136, 0,	//815  QDataStream&, QNetworkCacheMetaData&
    193, 193, 0,	//818  QSsl::SslOption, QSsl::SslOption
    24, 393, 0,	//821  QDebug, const QRectF&
    227, 48, 0,	//824  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    26, 26, 0,	//827  QDir::SortFlag, QDir::SortFlag
    159, 44, 0,	//830  QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>
    155, 424, 0,	//833  QNetworkInterface::InterfaceFlag, int
    309, 424, 0,	//836  Qt::TouchPointState, int
    25, 424, 0,	//839  QDir::Filter, int
    436, 0,	//842  unsigned long
    1, 32, 0,	//844  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    289, 60, 0,	//847  Qt::MouseButton, QFlags<Qt::MouseButton>
    267, 53, 0,	//850  Qt::DropAction, QFlags<Qt::DropAction>
    431, 0,	//853  size_t
    291, 424, 0,	//855  Qt::Orientation, int
    306, 424, 0,	//858  Qt::ToolBarArea, int
    20, 15, 0,	//861  QDataStream&, QByteArray&
    20, 244, 0,	//864  QDataStream&, QVariant::Type&
    20, 392, 0,	//867  QDataStream&, const QRect&
    24, 351, 0,	//870  QDebug, const QEasingCurve&
    387, 0,	//873  const QPersistentModelIndex&
    146, 146, 0,	//875  QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability
    24, 411, 0,	//878  QDebug, const QTime&
    127, 424, 0,	//881  QLocale::NumberOption, int
    309, 309, 0,	//884  Qt::TouchPointState, Qt::TouchPointState
    193, 45, 0,	//887  QSsl::SslOption, QFlags<QSsl::SslOption>
    276, 55, 0,	//890  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    315, 65, 0,	//893  Qt::WindowState, QFlags<Qt::WindowState>
    265, 265, 0,	//896  Qt::DockWidgetArea, Qt::DockWidgetArea
    27, 424, 0,	//899  QDirIterator::IteratorFlag, int
    422, 399, 0,	//902  double, const QSizeF&
    24, 372, 0,	//905  QDebug, const QMargins&
    375, 0,	//908  const QModelIndex&
    389, 424, 0,	//910  const QPoint&, int
    235, 424, 0,	//913  QUrl::FormattingOption, int
    287, 287, 0,	//916  Qt::MatchFlag, Qt::MatchFlag
    278, 278, 0,	//919  Qt::InputMethodHint, Qt::InputMethodHint
    291, 61, 0,	//922  Qt::Orientation, QFlags<Qt::Orientation>
    24, 33, 0,	//925  QDebug, QFlags<QDir::Filter>
    281, 424, 0,	//928  Qt::ItemFlag, int
    289, 424, 0,	//931  Qt::MouseButton, int
    20, 188, 0,	//934  QDataStream&, QSizeF&
    101, 424, 0,	//937  QIODevice::OpenModeFlag, int
    218, 424, 0,	//940  QString::SectionFlag, int
    146, 424, 0,	//943  QNetworkConfigurationManager::Capability, int
    20, 397, 0,	//946  QDataStream&, const QSize&
    25, 33, 0,	//949  QDir::Filter, QFlags<QDir::Filter>
    218, 218, 0,	//952  QString::SectionFlag, QString::SectionFlag
    434, 0,	//955  unsigned char*
    360, 0,	//957  const QIPv6Address&
    419, 0,	//959  const sockaddr*
    78, 0,	//961  QHostAddress::SpecialAddress
    354, 424, 0,	//963  const QHostAddress&, int
    386, 0,	//966  const QPair<QHostAddress,int>&
    355, 0,	//968  const QHostInfo&
    364, 0,	//970  const QList<QHostAddress>&
    82, 0,	//972  QHostInfo::HostInfoError
    407, 178, 418, 0,	//974  const QString&, QObject*, const char*
    407, 438, 178, 0,	//978  const QString&, unsigned short, QObject*
    407, 84, 438, 178, 0,	//982  const QString&, QHttp::ConnectionMode, unsigned short, QObject*
    407, 84, 438, 0,	//987  const QString&, QHttp::ConnectionMode, unsigned short
    223, 0,	//991  QTcpSocket*
    407, 424, 407, 407, 0,	//993  const QString&, int, const QString&, const QString&
    407, 99, 99, 0,	//998  const QString&, QIODevice*, QIODevice*
    407, 346, 99, 0,	//1002  const QString&, const QByteArray&, QIODevice*
    358, 99, 99, 0,	//1006  const QHttpRequestHeader&, QIODevice*, QIODevice*
    358, 346, 99, 0,	//1010  const QHttpRequestHeader&, const QByteArray&, QIODevice*
    359, 0,	//1014  const QHttpResponseHeader&
    424, 424, 0,	//1016  int, int
    407, 428, 10, 0,	//1019  const QString&, quint16, QAuthenticator*
    370, 0,	//1023  const QList<QSslError>&
    407, 84, 0,	//1025  const QString&, QHttp::ConnectionMode
    407, 424, 0,	//1028  const QString&, int
    407, 424, 407, 0,	//1031  const QString&, int, const QString&
    407, 346, 0,	//1035  const QString&, const QByteArray&
    358, 0,	//1038  const QHttpRequestHeader&
    358, 99, 0,	//1040  const QHttpRequestHeader&, QIODevice*
    358, 346, 0,	//1043  const QHttpRequestHeader&, const QByteArray&
    356, 0,	//1046  const QHttpHeader&
    367, 0,	//1048  const QList<QPair<QString,QString> >&
    90, 178, 0,	//1050  QHttpMultiPart::ContentType, QObject*
    357, 0,	//1053  const QHttpPart&
    90, 0,	//1055  QHttpMultiPart::ContentType
    172, 415, 0,	//1057  QNetworkRequest::KnownHeaders, const QVariant&
    407, 407, 424, 424, 0,	//1060  const QString&, const QString&, int, int
    407, 407, 424, 0,	//1065  const QString&, const QString&, int
    424, 407, 424, 424, 0,	//1069  int, const QString&, int, int
    424, 407, 424, 0,	//1074  int, const QString&, int
    38, 0,	//1078  QFlags<QIODevice::OpenModeFlag>
    424, 340, 0,	//1080  int, bool*
    105, 0,	//1083  QIntegerForSizeof< void* >::Unsigned
    407, 38, 0,	//1085  const QString&, QFlags<QIODevice::OpenModeFlag>
    105, 125, 38, 0,	//1088  QIntegerForSizeof< void* >::Unsigned, QLocalSocket::LocalSocketState, QFlags<QIODevice::OpenModeFlag>
    124, 0,	//1092  QLocalSocket::LocalSocketError
    125, 0,	//1094  QLocalSocket::LocalSocketState
    105, 125, 0,	//1096  QIntegerForSizeof< void* >::Unsigned, QLocalSocket::LocalSocketState
    161, 0,	//1099  QNetworkProxyFactory*
    2, 0,	//1101  QAbstractNetworkCache*
    150, 0,	//1103  QNetworkCookieJar*
    384, 0,	//1105  const QNetworkRequest&
    384, 99, 0,	//1107  const QNetworkRequest&, QIODevice*
    384, 346, 0,	//1110  const QNetworkRequest&, const QByteArray&
    384, 89, 0,	//1113  const QNetworkRequest&, QHttpMultiPart*
    384, 346, 99, 0,	//1116  const QNetworkRequest&, const QByteArray&, QIODevice*
    378, 0,	//1120  const QNetworkConfiguration&
    131, 0,	//1122  QNetworkAccessManager::NetworkAccessibility
    165, 10, 0,	//1124  QNetworkReply*, QAuthenticator*
    165, 0,	//1127  QNetworkReply*
    165, 370, 0,	//1129  QNetworkReply*, const QList<QSslError>&
    132, 384, 99, 0,	//1132  QNetworkAccessManager::Operation, const QNetworkRequest&, QIODevice*
    132, 384, 0,	//1136  QNetworkAccessManager::Operation, const QNetworkRequest&
    376, 0,	//1139  const QNetworkAddressEntry&
    366, 0,	//1141  const QList<QPair<QByteArray,QByteArray> >&
    349, 0,	//1143  const QDateTime&
    352, 0,	//1145  const QHash<QNetworkRequest::Attribute,QVariant>&
    41, 0,	//1147  QFlags<QNetworkConfiguration::StateFlag>
    379, 0,	//1149  const QNetworkCookie&
    149, 0,	//1151  QNetworkCookie::RawForm
    365, 412, 0,	//1153  const QList<QNetworkCookie>&, const QUrl&
    365, 0,	//1156  const QList<QNetworkCookie>&
    380, 0,	//1158  const QNetworkInterface&
    160, 407, 438, 407, 407, 0,	//1160  QNetworkProxy::ProxyType, const QString&, unsigned short, const QString&, const QString&
    160, 0,	//1166  QNetworkProxy::ProxyType
    44, 0,	//1168  QFlags<QNetworkProxy::Capability>
    160, 407, 0,	//1170  QNetworkProxy::ProxyType, const QString&
    160, 407, 438, 0,	//1173  QNetworkProxy::ProxyType, const QString&, unsigned short
    160, 407, 438, 407, 0,	//1177  QNetworkProxy::ProxyType, const QString&, unsigned short, const QString&
    383, 0,	//1182  const QNetworkProxyQuery&
    382, 0,	//1184  const QNetworkProxyFactory&
    412, 164, 0,	//1186  const QUrl&, QNetworkProxyQuery::QueryType
    407, 424, 407, 164, 0,	//1189  const QString&, int, const QString&, QNetworkProxyQuery::QueryType
    438, 407, 164, 0,	//1194  unsigned short, const QString&, QNetworkProxyQuery::QueryType
    378, 412, 164, 0,	//1198  const QNetworkConfiguration&, const QUrl&, QNetworkProxyQuery::QueryType
    378, 407, 424, 407, 164, 0,	//1202  const QNetworkConfiguration&, const QString&, int, const QString&, QNetworkProxyQuery::QueryType
    378, 438, 407, 164, 0,	//1208  const QNetworkConfiguration&, unsigned short, const QString&, QNetworkProxyQuery::QueryType
    164, 0,	//1213  QNetworkProxyQuery::QueryType
    438, 407, 0,	//1215  unsigned short, const QString&
    378, 412, 0,	//1218  const QNetworkConfiguration&, const QUrl&
    378, 407, 424, 0,	//1221  const QNetworkConfiguration&, const QString&, int
    378, 407, 424, 407, 0,	//1225  const QNetworkConfiguration&, const QString&, int, const QString&
    378, 438, 0,	//1230  const QNetworkConfiguration&, unsigned short
    378, 438, 407, 0,	//1233  const QNetworkConfiguration&, unsigned short, const QString&
    172, 0,	//1237  QNetworkRequest::KnownHeaders
    170, 0,	//1239  QNetworkRequest::Attribute
    402, 0,	//1241  const QSslConfiguration&
    166, 0,	//1243  QNetworkReply::NetworkError
    132, 0,	//1245  QNetworkAccessManager::Operation
    166, 407, 0,	//1247  QNetworkReply::NetworkError, const QString&
    170, 415, 0,	//1250  QNetworkRequest::Attribute, const QVariant&
    174, 0,	//1253  QNetworkRequest::Priority
    378, 178, 0,	//1255  const QNetworkConfiguration&, QObject*
    177, 0,	//1258  QNetworkSession::State
    176, 0,	//1260  QNetworkSession::SessionError
    378, 339, 0,	//1262  const QNetworkConfiguration&, bool
    29, 0,	//1265  QEvent*
    178, 29, 0,	//1267  QObject*, QEvent*
    230, 0,	//1270  QTimerEvent*
    18, 0,	//1272  QChildEvent*
    99, 190, 0,	//1274  QIODevice*, QSsl::EncodingFormat
    346, 190, 0,	//1277  const QByteArray&, QSsl::EncodingFormat
    400, 0,	//1280  const QSslCertificate&
    19, 0,	//1282  QCryptographicHash::Algorithm
    198, 0,	//1284  QSslCertificate::SubjectInfo
    407, 190, 186, 0,	//1286  const QString&, QSsl::EncodingFormat, QRegExp::PatternSyntax
    407, 190, 0,	//1290  const QString&, QSsl::EncodingFormat
    407, 194, 0,	//1293  const QString&, QSsl::SslProtocol
    401, 0,	//1296  const QSslCipher&
    194, 0,	//1298  QSsl::SslProtocol
    213, 0,	//1300  QSslSocket::PeerVerifyMode
    405, 0,	//1302  const QSslKey&
    369, 0,	//1304  const QList<QSslCipher>&
    368, 0,	//1306  const QList<QSslCertificate>&
    193, 339, 0,	//1308  QSsl::SslOption, bool
    193, 0,	//1311  QSsl::SslOption
    208, 0,	//1313  QSslError::SslError
    208, 400, 0,	//1315  QSslError::SslError, const QSslCertificate&
    403, 0,	//1318  const QSslError&
    346, 191, 190, 192, 346, 0,	//1320  const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray&
    99, 191, 190, 192, 346, 0,	//1326  QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray&
    346, 191, 0,	//1332  const QByteArray&, QSsl::KeyAlgorithm
    346, 191, 190, 0,	//1335  const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat
    346, 191, 190, 192, 0,	//1339  const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType
    99, 191, 0,	//1344  QIODevice*, QSsl::KeyAlgorithm
    99, 191, 190, 0,	//1347  QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat
    99, 191, 190, 192, 0,	//1351  QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType
    407, 438, 407, 38, 0,	//1356  const QString&, unsigned short, const QString&, QFlags<QIODevice::OpenModeFlag>
    407, 191, 190, 346, 0,	//1361  const QString&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, const QByteArray&
    214, 0,	//1366  QSslSocket::SslMode
    427, 0,	//1368  qint64
    407, 438, 407, 0,	//1370  const QString&, unsigned short, const QString&
    407, 191, 0,	//1374  const QString&, QSsl::KeyAlgorithm
    407, 191, 190, 0,	//1377  const QString&, QSsl::KeyAlgorithm, QSsl::EncodingFormat
    354, 438, 49, 0,	//1381  const QHostAddress&, unsigned short, QFlags<QUdpSocket::BindFlag>
    438, 49, 0,	//1385  unsigned short, QFlags<QUdpSocket::BindFlag>
    354, 380, 0,	//1388  const QHostAddress&, const QNetworkInterface&
    342, 426, 77, 439, 0,	//1391  char*, long long, QHostAddress*, unsigned short*
    418, 426, 354, 438, 0,	//1396  const char*, long long, const QHostAddress&, unsigned short
    346, 354, 438, 0,	//1401  const QByteArray&, const QHostAddress&, unsigned short
    342, 426, 77, 0,	//1405  char*, long long, QHostAddress*
    407, 424, 407, 407, 426, 349, 349, 339, 339, 339, 339, 339, 339, 0,	//1409  const QString&, int, const QString&, const QString&, long long, const QDateTime&, const QDateTime&, bool, bool, bool, bool, bool, bool
    412, 424, 407, 407, 426, 349, 349, 339, 339, 339, 339, 339, 339, 0,	//1423  const QUrl&, int, const QString&, const QString&, long long, const QDateTime&, const QDateTime&, bool, bool, bool, bool, bool, bool
    413, 413, 424, 0,	//1437  const QUrlInfo&, const QUrlInfo&, int
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "Aborted",	//1
    "Accessible",	//2
    "Active",	//3
    "AddressInUseError",	//4
    "AlternativeType",	//5
    "AlwaysCache",	//6
    "AlwaysNetwork",	//7
    "Any",	//8
    "AnyIPv6",	//9
    "AnyProtocol",	//10
    "Append",	//11
    "ApplicationLevelRoaming",	//12
    "Ascii",	//13
    "AuthenticationRequiredError",	//14
    "AuthenticationReuseAttribute",	//15
    "AuthorityIssuerSerialNumberMismatch",	//16
    "AutoVerifyPeer",	//17
    "Automatic",	//18
    "Bearer2G",	//19
    "BearerBluetooth",	//20
    "BearerCDMA2000",	//21
    "BearerEthernet",	//22
    "BearerHSPA",	//23
    "BearerUnknown",	//24
    "BearerWCDMA",	//25
    "BearerWLAN",	//26
    "BearerWiMAX",	//27
    "Binary",	//28
    "BoundState",	//29
    "Broadcast",	//30
    "CacheLoadControlAttribute",	//31
    "CacheSaveControlAttribute",	//32
    "CachingCapability",	//33
    "CanBroadcast",	//34
    "CanMulticast",	//35
    "CanStartAndStopInterfaces",	//36
    "Cd",	//37
    "CertificateBlacklisted",	//38
    "CertificateExpired",	//39
    "CertificateNotYetValid",	//40
    "CertificateRejected",	//41
    "CertificateRevoked",	//42
    "CertificateSignatureFailed",	//43
    "CertificateUntrusted",	//44
    "Close",	//45
    "Closing",	//46
    "ClosingState",	//47
    "CommonName",	//48
    "ConnectToHost",	//49
    "Connected",	//50
    "ConnectedState",	//51
    "Connecting",	//52
    "ConnectingState",	//53
    "ConnectionEncryptedAttribute",	//54
    "ConnectionError",	//55
    "ConnectionModeHttp",	//56
    "ConnectionModeHttps",	//57
    "ConnectionRefused",	//58
    "ConnectionRefusedError",	//59
    "ContentAccessDenied",	//60
    "ContentDispositionHeader",	//61
    "ContentLengthHeader",	//62
    "ContentNotFoundError",	//63
    "ContentOperationNotPermittedError",	//64
    "ContentReSendError",	//65
    "ContentTypeHeader",	//66
    "CookieHeader",	//67
    "CookieLoadControlAttribute",	//68
    "CookieSaveControlAttribute",	//69
    "CountryName",	//70
    "CustomOperation",	//71
    "CustomVerbAttribute",	//72
    "DataStatistics",	//73
    "DatagramTooLargeError",	//74
    "DefaultForPlatform",	//75
    "DefaultProxy",	//76
    "Defined",	//77
    "DeleteOperation",	//78
    "Der",	//79
    "DirectConnectionRouting",	//80
    "Disconnected",	//81
    "Discovered",	//82
    "DnsEntry",	//83
    "DoNotBufferUploadDataAttribute",	//84
    "DontShareAddress",	//85
    "DownloadBufferAttribute",	//86
    "Dsa",	//87
    "EmailEntry",	//88
    "ExeGroup",	//89
    "ExeOther",	//90
    "ExeOwner",	//91
    "ForcedRoaming",	//92
    "FormDataType",	//93
    "FtpCachingProxy",	//94
    "Full",	//95
    "Get",	//96
    "GetOperation",	//97
    "HeadOperation",	//98
    "HighPriority",	//99
    "HostLookup",	//100
    "HostLookupState",	//101
    "HostNameLookupCapability",	//102
    "HostNameMismatch",	//103
    "HostNotFound",	//104
    "HostNotFoundError",	//105
    "HttpCachingProxy",	//106
    "HttpPipeliningAllowedAttribute",	//107
    "HttpPipeliningWasUsedAttribute",	//108
    "HttpProxy",	//109
    "HttpReasonPhraseAttribute",	//110
    "HttpStatusCodeAttribute",	//111
    "IPv4Protocol",	//112
    "IPv6Protocol",	//113
    "InternetAccessPoint",	//114
    "Invalid",	//115
    "InvalidCaCertificate",	//116
    "InvalidConfigurationError",	//117
    "InvalidNotAfterField",	//118
    "InvalidNotBeforeField",	//119
    "InvalidPurpose",	//120
    "InvalidResponseHeader",	//121
    "IsLoopBack",	//122
    "IsPointToPoint",	//123
    "IsRunning",	//124
    "IsUp",	//125
    "KeepAliveOption",	//126
    "LastModifiedHeader",	//127
    "LicensedActiveQt",	//128
    "LicensedCore",	//129
    "LicensedDBus",	//130
    "LicensedDeclarative",	//131
    "LicensedGui",	//132
    "LicensedHelp",	//133
    "LicensedMultimedia",	//134
    "LicensedNetwork",	//135
    "LicensedOpenGL",	//136
    "LicensedOpenVG",	//137
    "LicensedQt3Support",	//138
    "LicensedQt3SupportLight",	//139
    "LicensedScript",	//140
    "LicensedScriptTools",	//141
    "LicensedSql",	//142
    "LicensedSvg",	//143
    "LicensedTest",	//144
    "LicensedXml",	//145
    "LicensedXmlPatterns",	//146
    "List",	//147
    "ListeningCapability",	//148
    "ListeningState",	//149
    "LocalHost",	//150
    "LocalHostIPv6",	//151
    "LocalityName",	//152
    "LocationHeader",	//153
    "LoggedIn",	//154
    "Login",	//155
    "LowDelayOption",	//156
    "LowPriority",	//157
    "Manual",	//158
    "MaximumDownloadBufferSizeAttribute",	//159
    "MixedType",	//160
    "Mkdir",	//161
    "MulticastLoopbackOption",	//162
    "MulticastTtlOption",	//163
    "NameAndValueOnly",	//164
    "NetworkError",	//165
    "NetworkSessionRequired",	//166
    "NoError",	//167
    "NoPeerCertificate",	//168
    "NoProxy",	//169
    "NoSslSupport",	//170
    "None",	//171
    "NormalPriority",	//172
    "NotAccessible",	//173
    "NotAvailable",	//174
    "NotConnected",	//175
    "NotOpen",	//176
    "Null",	//177
    "OperationCanceledError",	//178
    "OperationNotSupportedError",	//179
    "Organization",	//180
    "OrganizationalUnitName",	//181
    "Passive",	//182
    "PathLengthExceeded",	//183
    "PeerClosedError",	//184
    "Pem",	//185
    "PostOperation",	//186
    "PreferCache",	//187
    "PreferNetwork",	//188
    "PrivateKey",	//189
    "PrivatePurpose",	//190
    "ProtocolFailure",	//191
    "ProtocolInvalidOperationError",	//192
    "ProtocolUnknownError",	//193
    "ProxyAuthenticationRequiredError",	//194
    "ProxyConnectionClosedError",	//195
    "ProxyConnectionRefusedError",	//196
    "ProxyConnectionTimeoutError",	//197
    "ProxyNotFoundError",	//198
    "ProxyProtocolError",	//199
    "ProxyTimeoutError",	//200
    "PublicKey",	//201
    "PublicPurpose",	//202
    "Put",	//203
    "PutOperation",	//204
    "QAbstractNetworkCache",	//205
    "QAbstractNetworkCache#",	//206
    "QAbstractSocket",	//207
    "QAbstractSocket$#",	//208
    "QAuthenticator",	//209
    "QAuthenticator#",	//210
    "QFtp",	//211
    "QFtp#",	//212
    "QHostAddress",	//213
    "QHostAddress#",	//214
    "QHostAddress$",	//215
    "QHostInfo",	//216
    "QHostInfo#",	//217
    "QHostInfo$",	//218
    "QHttp",	//219
    "QHttp#",	//220
    "QHttp$",	//221
    "QHttp$$",	//222
    "QHttp$$#",	//223
    "QHttp$$$",	//224
    "QHttp$$$#",	//225
    "QHttpHeader",	//226
    "QHttpHeader#",	//227
    "QHttpHeader$",	//228
    "QHttpMultiPart",	//229
    "QHttpMultiPart#",	//230
    "QHttpMultiPart$",	//231
    "QHttpMultiPart$#",	//232
    "QHttpPart",	//233
    "QHttpPart#",	//234
    "QHttpRequestHeader",	//235
    "QHttpRequestHeader#",	//236
    "QHttpRequestHeader$",	//237
    "QHttpRequestHeader$$",	//238
    "QHttpRequestHeader$$$",	//239
    "QHttpRequestHeader$$$$",	//240
    "QHttpResponseHeader",	//241
    "QHttpResponseHeader#",	//242
    "QHttpResponseHeader$",	//243
    "QHttpResponseHeader$$",	//244
    "QHttpResponseHeader$$$",	//245
    "QHttpResponseHeader$$$$",	//246
    "QIPv6Address",	//247
    "QIPv6Address#",	//248
    "QLocalServer",	//249
    "QLocalServer#",	//250
    "QLocalSocket",	//251
    "QLocalSocket#",	//252
    "QNetworkAccessManager",	//253
    "QNetworkAccessManager#",	//254
    "QNetworkAddressEntry",	//255
    "QNetworkAddressEntry#",	//256
    "QNetworkCacheMetaData",	//257
    "QNetworkCacheMetaData#",	//258
    "QNetworkConfiguration",	//259
    "QNetworkConfiguration#",	//260
    "QNetworkConfigurationManager",	//261
    "QNetworkConfigurationManager#",	//262
    "QNetworkCookie",	//263
    "QNetworkCookie#",	//264
    "QNetworkCookie##",	//265
    "QNetworkCookieJar",	//266
    "QNetworkCookieJar#",	//267
    "QNetworkDiskCache",	//268
    "QNetworkDiskCache#",	//269
    "QNetworkInterface",	//270
    "QNetworkInterface#",	//271
    "QNetworkProxy",	//272
    "QNetworkProxy#",	//273
    "QNetworkProxy$",	//274
    "QNetworkProxy$$",	//275
    "QNetworkProxy$$$",	//276
    "QNetworkProxy$$$$",	//277
    "QNetworkProxy$$$$$",	//278
    "QNetworkProxyFactory",	//279
    "QNetworkProxyFactory#",	//280
    "QNetworkProxyQuery",	//281
    "QNetworkProxyQuery#",	//282
    "QNetworkProxyQuery##",	//283
    "QNetworkProxyQuery##$",	//284
    "QNetworkProxyQuery#$",	//285
    "QNetworkProxyQuery#$$",	//286
    "QNetworkProxyQuery#$$$",	//287
    "QNetworkProxyQuery#$$$$",	//288
    "QNetworkProxyQuery$",	//289
    "QNetworkProxyQuery$$",	//290
    "QNetworkProxyQuery$$$",	//291
    "QNetworkProxyQuery$$$$",	//292
    "QNetworkReply",	//293
    "QNetworkReply#",	//294
    "QNetworkRequest",	//295
    "QNetworkRequest#",	//296
    "QNetworkSession",	//297
    "QNetworkSession#",	//298
    "QNetworkSession##",	//299
    "QSslCertificate",	//300
    "QSslCertificate#",	//301
    "QSslCertificate#$",	//302
    "QSslCipher",	//303
    "QSslCipher#",	//304
    "QSslCipher$$",	//305
    "QSslConfiguration",	//306
    "QSslConfiguration#",	//307
    "QSslError",	//308
    "QSslError#",	//309
    "QSslError$",	//310
    "QSslError$#",	//311
    "QSslKey",	//312
    "QSslKey#",	//313
    "QSslKey#$",	//314
    "QSslKey#$$",	//315
    "QSslKey#$$$",	//316
    "QSslKey#$$$#",	//317
    "QSslSocket",	//318
    "QSslSocket#",	//319
    "QTcpServer",	//320
    "QTcpServer#",	//321
    "QTcpSocket",	//322
    "QTcpSocket#",	//323
    "QUdpSocket",	//324
    "QUdpSocket#",	//325
    "QUrlInfo",	//326
    "QUrlInfo#",	//327
    "QUrlInfo#$$$$##$$$$$$",	//328
    "QUrlInfo$$$$$##$$$$$$",	//329
    "Q_COMPLEX_TYPE",	//330
    "Q_DUMMY_TYPE",	//331
    "Q_MOVABLE_TYPE",	//332
    "Q_PRIMITIVE_TYPE",	//333
    "Q_STATIC_TYPE",	//334
    "QtCriticalMsg",	//335
    "QtDebugMsg",	//336
    "QtFatalMsg",	//337
    "QtSystemMsg",	//338
    "QtWarningMsg",	//339
    "QueryPeer",	//340
    "RawCommand",	//341
    "ReadGroup",	//342
    "ReadOnly",	//343
    "ReadOther",	//344
    "ReadOwner",	//345
    "ReadWrite",	//346
    "Reading",	//347
    "RedirectionTargetAttribute",	//348
    "RelatedType",	//349
    "RemoteHostClosedError",	//350
    "Remove",	//351
    "Rename",	//352
    "ReuseAddressHint",	//353
    "Rmdir",	//354
    "Roaming",	//355
    "RoamingError",	//356
    "Rsa",	//357
    "SecureProtocols",	//358
    "SelfSignedCertificate",	//359
    "SelfSignedCertificateInChain",	//360
    "Sending",	//361
    "ServerNotFoundError",	//362
    "ServiceNetwork",	//363
    "ServiceSpecificPurpose",	//364
    "SessionAbortedError",	//365
    "SetCookieHeader",	//366
    "SetProxy",	//367
    "SetTransferMode",	//368
    "ShareAddress",	//369
    "SocketAccessError",	//370
    "SocketAddressNotAvailableError",	//371
    "SocketResourceError",	//372
    "SocketTimeoutError",	//373
    "Socks5Proxy",	//374
    "SourceIsFromCacheAttribute",	//375
    "SslClientMode",	//376
    "SslHandshakeFailedError",	//377
    "SslOptionDisableCompression",	//378
    "SslOptionDisableEmptyFragments",	//379
    "SslOptionDisableLegacyRenegotiation",	//380
    "SslOptionDisableServerNameIndication",	//381
    "SslOptionDisableSessionTickets",	//382
    "SslServerMode",	//383
    "SslV2",	//384
    "SslV3",	//385
    "StateOrProvinceName",	//386
    "SubjectIssuerMismatch",	//387
    "SynchronousRequestAttribute",	//388
    "SystemSessionSupport",	//389
    "TcpServer",	//390
    "TcpSocket",	//391
    "TemporaryNetworkFailureError",	//392
    "Text",	//393
    "TimeoutError",	//394
    "TlsV1",	//395
    "TlsV1SslV3",	//396
    "Truncate",	//397
    "TunnelingCapability",	//398
    "UdpSocket",	//399
    "UdpTunnelingCapability",	//400
    "UnableToDecodeIssuerPublicKey",	//401
    "UnableToDecryptCertificateSignature",	//402
    "UnableToGetIssuerCertificate",	//403
    "UnableToGetLocalIssuerCertificate",	//404
    "UnableToVerifyFirstCertificate",	//405
    "Unbuffered",	//406
    "Unconnected",	//407
    "UnconnectedState",	//408
    "Undefined",	//409
    "UnencryptedMode",	//410
    "UnexpectedClose",	//411
    "UnfinishedSocketOperationError",	//412
    "UnknownAccessibility",	//413
    "UnknownContentError",	//414
    "UnknownError",	//415
    "UnknownNetworkError",	//416
    "UnknownNetworkLayerProtocol",	//417
    "UnknownOperation",	//418
    "UnknownProtocol",	//419
    "UnknownProxyError",	//420
    "UnknownPurpose",	//421
    "UnknownSessionError",	//422
    "UnknownSocketError",	//423
    "UnknownSocketType",	//424
    "UnspecifiedError",	//425
    "UnsupportedSocketOperationError",	//426
    "UrlRequest",	//427
    "User",	//428
    "UserChoice",	//429
    "UserMax",	//430
    "VerifyNone",	//431
    "VerifyPeer",	//432
    "WriteGroup",	//433
    "WriteOnly",	//434
    "WriteOther",	//435
    "WriteOwner",	//436
    "WrongContentLength",	//437
    "abort",	//438
    "abortHostLookup",	//439
    "abortHostLookup$",	//440
    "accept",	//441
    "activeConfiguration",	//442
    "activeTime",	//443
    "addCaCertificate",	//444
    "addCaCertificate#",	//445
    "addCaCertificates",	//446
    "addCaCertificates$",	//447
    "addCaCertificates$$",	//448
    "addCaCertificates$$$",	//449
    "addCaCertificates?",	//450
    "addDefaultCaCertificate",	//451
    "addDefaultCaCertificate#",	//452
    "addDefaultCaCertificates",	//453
    "addDefaultCaCertificates$",	//454
    "addDefaultCaCertificates$$",	//455
    "addDefaultCaCertificates$$$",	//456
    "addDefaultCaCertificates?",	//457
    "addPendingConnection",	//458
    "addPendingConnection#",	//459
    "addValue",	//460
    "addValue$$",	//461
    "addressEntries",	//462
    "addresses",	//463
    "algorithm",	//464
    "allAddresses",	//465
    "allConfigurations",	//466
    "allConfigurations$",	//467
    "allCookies",	//468
    "allInterfaces",	//469
    "allValues",	//470
    "allValues$",	//471
    "alternateSubjectNames",	//472
    "append",	//473
    "append#",	//474
    "applicationProxy",	//475
    "atEnd",	//476
    "attribute",	//477
    "attribute$",	//478
    "attribute$#",	//479
    "attributes",	//480
    "authenticationMethod",	//481
    "authenticationRequired",	//482
    "authenticationRequired##",	//483
    "authenticationRequired$$#",	//484
    "bearerName",	//485
    "bearerType",	//486
    "bearerTypeName",	//487
    "bind",	//488
    "bind#$",	//489
    "bind#$$",	//490
    "bind$",	//491
    "bind$$",	//492
    "boundary",	//493
    "broadcast",	//494
    "bytesAvailable",	//495
    "bytesReceived",	//496
    "bytesToWrite",	//497
    "bytesWritten",	//498
    "caCertificates",	//499
    "cache",	//500
    "cacheDirectory",	//501
    "cacheSize",	//502
    "canReadLine",	//503
    "capabilities",	//504
    "cd",	//505
    "cd$",	//506
    "certificate",	//507
    "childEvent",	//508
    "children",	//509
    "ciphers",	//510
    "clear",	//511
    "clearPendingCommands",	//512
    "clearPendingRequests",	//513
    "close",	//514
    "closeConnection",	//515
    "closed",	//516
    "commandFinished",	//517
    "commandFinished$$",	//518
    "commandStarted",	//519
    "commandStarted$",	//520
    "configuration",	//521
    "configurationAdded",	//522
    "configurationAdded#",	//523
    "configurationChanged",	//524
    "configurationChanged#",	//525
    "configurationFromIdentifier",	//526
    "configurationFromIdentifier$",	//527
    "configurationRemoved",	//528
    "configurationRemoved#",	//529
    "connectNotify",	//530
    "connectNotify$",	//531
    "connectToHost",	//532
    "connectToHost#$",	//533
    "connectToHost#$$",	//534
    "connectToHost$",	//535
    "connectToHost$$",	//536
    "connectToHost$$$",	//537
    "connectToHostEncrypted",	//538
    "connectToHostEncrypted$$",	//539
    "connectToHostEncrypted$$$",	//540
    "connectToHostEncrypted$$$$",	//541
    "connectToHostImplementation",	//542
    "connectToHostImplementation$$",	//543
    "connectToHostImplementation$$$",	//544
    "connectToServer",	//545
    "connectToServer$",	//546
    "connectToServer$$",	//547
    "connected",	//548
    "contentLength",	//549
    "contentType",	//550
    "cookieJar",	//551
    "cookiesForUrl",	//552
    "cookiesForUrl#",	//553
    "createRequest",	//554
    "createRequest$#",	//555
    "createRequest$##",	//556
    "currentCommand",	//557
    "currentDestinationDevice",	//558
    "currentDevice",	//559
    "currentId",	//560
    "currentRequest",	//561
    "currentSourceDevice",	//562
    "customEvent",	//563
    "data",	//564
    "data#",	//565
    "dataReadProgress",	//566
    "dataReadProgress$$",	//567
    "dataSendProgress",	//568
    "dataSendProgress$$",	//569
    "dataTransferProgress",	//570
    "dataTransferProgress$$",	//571
    "defaultCaCertificates",	//572
    "defaultCiphers",	//573
    "defaultConfiguration",	//574
    "deleteResource",	//575
    "deleteResource#",	//576
    "detach",	//577
    "digest",	//578
    "digest$",	//579
    "disconnectFromHost",	//580
    "disconnectFromHostImplementation",	//581
    "disconnectFromServer",	//582
    "disconnectNotify",	//583
    "disconnectNotify$",	//584
    "disconnected",	//585
    "domain",	//586
    "done",	//587
    "done$",	//588
    "downloadProgress",	//589
    "downloadProgress$$",	//590
    "effectiveDate",	//591
    "encrypted",	//592
    "encryptedBytesAvailable",	//593
    "encryptedBytesToWrite",	//594
    "encryptedBytesWritten",	//595
    "encryptedBytesWritten$",	//596
    "encryptionMethod",	//597
    "equal",	//598
    "equal##$",	//599
    "error",	//600
    "error$",	//601
    "errorString",	//602
    "event",	//603
    "eventFilter",	//604
    "expirationDate",	//605
    "expire",	//606
    "expiryDate",	//607
    "fileMetaData",	//608
    "fileMetaData$",	//609
    "finished",	//610
    "finished#",	//611
    "flags",	//612
    "flush",	//613
    "fromData",	//614
    "fromData#",	//615
    "fromData#$",	//616
    "fromDevice",	//617
    "fromDevice#",	//618
    "fromDevice#$",	//619
    "fromName",	//620
    "fromName$",	//621
    "fromPath",	//622
    "fromPath$",	//623
    "fromPath$$",	//624
    "fromPath$$$",	//625
    "fullServerName",	//626
    "get",	//627
    "get#",	//628
    "get$",	//629
    "get$#",	//630
    "get$#$",	//631
    "greaterThan",	//632
    "greaterThan##$",	//633
    "group",	//634
    "handle",	//635
    "hardwareAddress",	//636
    "hasContentLength",	//637
    "hasContentType",	//638
    "hasKey",	//639
    "hasKey$",	//640
    "hasPendingCommands",	//641
    "hasPendingConnections",	//642
    "hasPendingDatagrams",	//643
    "hasPendingRequests",	//644
    "hasRawHeader",	//645
    "hasRawHeader#",	//646
    "head",	//647
    "head#",	//648
    "head$",	//649
    "header",	//650
    "header$",	//651
    "hostFound",	//652
    "hostName",	//653
    "humanReadableName",	//654
    "identifier",	//655
    "ignore",	//656
    "ignoreSslErrors",	//657
    "ignoreSslErrors?",	//658
    "incomingConnection",	//659
    "incomingConnection$",	//660
    "incomingConnection?",	//661
    "index",	//662
    "insert",	//663
    "insert#",	//664
    "interface",	//665
    "interfaceFromIndex",	//666
    "interfaceFromIndex$",	//667
    "interfaceFromName",	//668
    "interfaceFromName$",	//669
    "ip",	//670
    "isCachingProxy",	//671
    "isDir",	//672
    "isEncrypted",	//673
    "isExecutable",	//674
    "isFile",	//675
    "isFinished",	//676
    "isHttpOnly",	//677
    "isInSubnet",	//678
    "isInSubnet#$",	//679
    "isInSubnet?",	//680
    "isListening",	//681
    "isNull",	//682
    "isOnline",	//683
    "isOpen",	//684
    "isReadable",	//685
    "isRoamingAvailable",	//686
    "isRunning",	//687
    "isSecure",	//688
    "isSequential",	//689
    "isSessionCookie",	//690
    "isSymLink",	//691
    "isTransparentProxy",	//692
    "isValid",	//693
    "isWritable",	//694
    "issuerInfo",	//695
    "issuerInfo#",	//696
    "issuerInfo$",	//697
    "joinMulticastGroup",	//698
    "joinMulticastGroup#",	//699
    "joinMulticastGroup##",	//700
    "keyExchangeMethod",	//701
    "keys",	//702
    "lastModified",	//703
    "lastRead",	//704
    "lastResponse",	//705
    "leaveMulticastGroup",	//706
    "leaveMulticastGroup#",	//707
    "leaveMulticastGroup##",	//708
    "length",	//709
    "lessThan",	//710
    "lessThan##$",	//711
    "list",	//712
    "list$",	//713
    "listInfo",	//714
    "listInfo#",	//715
    "listen",	//716
    "listen#",	//717
    "listen#$",	//718
    "listen$",	//719
    "localAddress",	//720
    "localCertificate",	//721
    "localDomainName",	//722
    "localHostName",	//723
    "localPort",	//724
    "login",	//725
    "login$",	//726
    "login$$",	//727
    "lookupHost",	//728
    "lookupHost$#$",	//729
    "lookupId",	//730
    "majorVersion",	//731
    "manager",	//732
    "maxPendingConnections",	//733
    "maximumCacheSize",	//734
    "metaData",	//735
    "metaData#",	//736
    "metaDataChanged",	//737
    "metaObject",	//738
    "method",	//739
    "migrate",	//740
    "minorVersion",	//741
    "mkdir",	//742
    "mkdir$",	//743
    "mode",	//744
    "modeChanged",	//745
    "modeChanged$",	//746
    "multicastInterface",	//747
    "name",	//748
    "netmask",	//749
    "networkAccessible",	//750
    "networkAccessibleChanged",	//751
    "networkAccessibleChanged$",	//752
    "networkConfiguration",	//753
    "networkSessionConnected",	//754
    "newConfigurationActivated",	//755
    "newConnection",	//756
    "nextPendingConnection",	//757
    "onlineStateChanged",	//758
    "onlineStateChanged$",	//759
    "open",	//760
    "opened",	//761
    "operation",	//762
    "operator!=",	//763
    "operator!=#",	//764
    "operator!=##",	//765
    "operator!=#$",	//766
    "operator!=$",	//767
    "operator!=$#",	//768
    "operator&",	//769
    "operator&##",	//770
    "operator*",	//771
    "operator*#$",	//772
    "operator*$#",	//773
    "operator+",	//774
    "operator+##",	//775
    "operator+#$",	//776
    "operator+$#",	//777
    "operator+$$",	//778
    "operator-",	//779
    "operator-#",	//780
    "operator-##",	//781
    "operator/",	//782
    "operator/#$",	//783
    "operator<",	//784
    "operator<##",	//785
    "operator<#$",	//786
    "operator<$#",	//787
    "operator<<",	//788
    "operator<<##",	//789
    "operator<<#$",	//790
    "operator<<#?",	//791
    "operator<=",	//792
    "operator<=##",	//793
    "operator<=#$",	//794
    "operator<=$#",	//795
    "operator=",	//796
    "operator=#",	//797
    "operator=$",	//798
    "operator==",	//799
    "operator==#",	//800
    "operator==##",	//801
    "operator==#$",	//802
    "operator==$",	//803
    "operator==$#",	//804
    "operator>",	//805
    "operator>##",	//806
    "operator>#$",	//807
    "operator>$#",	//808
    "operator>=",	//809
    "operator>=##",	//810
    "operator>=#$",	//811
    "operator>=$#",	//812
    "operator>>",	//813
    "operator>>##",	//814
    "operator>>#$",	//815
    "operator>>#?",	//816
    "operator[]",	//817
    "operator[]$",	//818
    "operator^",	//819
    "operator^##",	//820
    "operator|",	//821
    "operator|##",	//822
    "operator|$$",	//823
    "option",	//824
    "option$",	//825
    "options",	//826
    "originatingObject",	//827
    "owner",	//828
    "parse",	//829
    "parse$",	//830
    "parseCookies",	//831
    "parseCookies#",	//832
    "parseLine",	//833
    "parseLine$$",	//834
    "parseSubnet",	//835
    "parseSubnet$",	//836
    "password",	//837
    "path",	//838
    "peerAddress",	//839
    "peerCertificate",	//840
    "peerCertificateChain",	//841
    "peerHostName",	//842
    "peerName",	//843
    "peerPort",	//844
    "peerVerifyDepth",	//845
    "peerVerifyError",	//846
    "peerVerifyError#",	//847
    "peerVerifyMode",	//848
    "peerVerifyName",	//849
    "pendingDatagramSize",	//850
    "permissions",	//851
    "port",	//852
    "pos",	//853
    "post",	//854
    "post##",	//855
    "post$#",	//856
    "post$##",	//857
    "preferredConfigurationChanged",	//858
    "preferredConfigurationChanged#$",	//859
    "prefixLength",	//860
    "prepare",	//861
    "prepare#",	//862
    "priority",	//863
    "privateKey",	//864
    "protocol",	//865
    "protocolString",	//866
    "protocolTag",	//867
    "proxy",	//868
    "proxyAuthenticationRequired",	//869
    "proxyAuthenticationRequired##",	//870
    "proxyFactory",	//871
    "proxyForQuery",	//872
    "proxyForQuery#",	//873
    "publicKey",	//874
    "purpose",	//875
    "put",	//876
    "put##",	//877
    "put#$",	//878
    "put#$$",	//879
    "qAcos",	//880
    "qAcos$",	//881
    "qAddPostRoutine",	//882
    "qAddPostRoutine$",	//883
    "qAppName",	//884
    "qAsin",	//885
    "qAsin$",	//886
    "qAtan",	//887
    "qAtan$",	//888
    "qAtan2",	//889
    "qAtan2$$",	//890
    "qBadAlloc",	//891
    "qCeil",	//892
    "qCeil$",	//893
    "qChecksum",	//894
    "qChecksum$$",	//895
    "qCompress",	//896
    "qCompress#",	//897
    "qCompress#$",	//898
    "qCompress$$",	//899
    "qCompress$$$",	//900
    "qCos",	//901
    "qCos$",	//902
    "qCritical",	//903
    "qDebug",	//904
    "qExp",	//905
    "qExp$",	//906
    "qFabs",	//907
    "qFabs$",	//908
    "qFastCos",	//909
    "qFastCos$",	//910
    "qFastSin",	//911
    "qFastSin$",	//912
    "qFlagLocation",	//913
    "qFlagLocation$",	//914
    "qFloor",	//915
    "qFloor$",	//916
    "qFree",	//917
    "qFree$",	//918
    "qFreeAligned",	//919
    "qFreeAligned$",	//920
    "qFuzzyCompare",	//921
    "qFuzzyCompare$$",	//922
    "qFuzzyIsNull",	//923
    "qFuzzyIsNull$",	//924
    "qHash",	//925
    "qHash#",	//926
    "qHash$",	//927
    "qInf",	//928
    "qInstallMsgHandler",	//929
    "qInstallMsgHandler$",	//930
    "qIntCast",	//931
    "qIntCast$",	//932
    "qIsFinite",	//933
    "qIsFinite$",	//934
    "qIsInf",	//935
    "qIsInf$",	//936
    "qIsNaN",	//937
    "qIsNaN$",	//938
    "qIsNull",	//939
    "qIsNull$",	//940
    "qLn",	//941
    "qLn$",	//942
    "qMalloc",	//943
    "qMalloc$",	//944
    "qMallocAligned",	//945
    "qMallocAligned$$",	//946
    "qMemCopy",	//947
    "qMemCopy$$$",	//948
    "qMemSet",	//949
    "qMemSet$$$",	//950
    "qPow",	//951
    "qPow$$",	//952
    "qQNaN",	//953
    "qRealloc",	//954
    "qRealloc$$",	//955
    "qReallocAligned",	//956
    "qReallocAligned$$$$",	//957
    "qRegisterStaticPluginInstanceFunction",	//958
    "qRegisterStaticPluginInstanceFunction#",	//959
    "qRemovePostRoutine",	//960
    "qRemovePostRoutine$",	//961
    "qRound",	//962
    "qRound$",	//963
    "qRound64",	//964
    "qRound64$",	//965
    "qSNaN",	//966
    "qSetFieldWidth",	//967
    "qSetFieldWidth$",	//968
    "qSetPadChar",	//969
    "qSetPadChar#",	//970
    "qSetRealNumberPrecision",	//971
    "qSetRealNumberPrecision$",	//972
    "qSharedBuild",	//973
    "qSin",	//974
    "qSin$",	//975
    "qSqrt",	//976
    "qSqrt$",	//977
    "qStringComparisonHelper",	//978
    "qStringComparisonHelper#$",	//979
    "qTan",	//980
    "qTan$",	//981
    "qUncompress",	//982
    "qUncompress#",	//983
    "qUncompress$$",	//984
    "qVersion",	//985
    "qWarning",	//986
    "qbswap_helper",	//987
    "qbswap_helper$$$",	//988
    "qgetenv",	//989
    "qgetenv$",	//990
    "qputenv",	//991
    "qputenv$#",	//992
    "qrand",	//993
    "qsrand",	//994
    "qsrand$",	//995
    "qstrcmp",	//996
    "qstrcmp##",	//997
    "qstrcmp#$",	//998
    "qstrcmp$#",	//999
    "qstrcmp$$",	//1000
    "qstrcpy",	//1001
    "qstrcpy$$",	//1002
    "qstrdup",	//1003
    "qstrdup$",	//1004
    "qstricmp",	//1005
    "qstricmp$$",	//1006
    "qstrlen",	//1007
    "qstrlen$",	//1008
    "qstrncmp",	//1009
    "qstrncmp$$$",	//1010
    "qstrncpy",	//1011
    "qstrncpy$$$",	//1012
    "qstrnicmp",	//1013
    "qstrnicmp$$$",	//1014
    "qstrnlen",	//1015
    "qstrnlen$$",	//1016
    "qtTrId",	//1017
    "qtTrId$",	//1018
    "qtTrId$$",	//1019
    "qt_assert",	//1020
    "qt_assert$$$",	//1021
    "qt_assert_x",	//1022
    "qt_assert_x$$$$",	//1023
    "qt_check_pointer",	//1024
    "qt_check_pointer$$",	//1025
    "qt_error_string",	//1026
    "qt_error_string$",	//1027
    "qt_message_output",	//1028
    "qt_message_output$$",	//1029
    "qt_metacall",	//1030
    "qt_metacall$$?",	//1031
    "qt_metacast",	//1032
    "qt_metacast$",	//1033
    "qt_noop",	//1034
    "qt_qFindChild_helper",	//1035
    "qt_qFindChild_helper#$#",	//1036
    "qt_qFindChildren_helper",	//1037
    "qt_qFindChildren_helper#$##?",	//1038
    "queryProxy",	//1039
    "queryProxy#",	//1040
    "queryType",	//1041
    "qvariant_cast_helper",	//1042
    "qvariant_cast_helper#$$",	//1043
    "qvsnprintf",	//1044
    "qvsnprintf$$$?",	//1045
    "rawCommand",	//1046
    "rawCommand$",	//1047
    "rawCommandReply",	//1048
    "rawCommandReply$$",	//1049
    "rawHeader",	//1050
    "rawHeader#",	//1051
    "rawHeaderList",	//1052
    "rawHeaderPairs",	//1053
    "rawHeaders",	//1054
    "read",	//1055
    "read$$",	//1056
    "readAll",	//1057
    "readBufferSize",	//1058
    "readData",	//1059
    "readData$$",	//1060
    "readDatagram",	//1061
    "readDatagram$$",	//1062
    "readDatagram$$#",	//1063
    "readDatagram$$#$",	//1064
    "readLineData",	//1065
    "readLineData$$",	//1066
    "readyRead",	//1067
    "readyRead#",	//1068
    "realm",	//1069
    "reasonPhrase",	//1070
    "reject",	//1071
    "remove",	//1072
    "remove#",	//1073
    "remove$",	//1074
    "removeAllValues",	//1075
    "removeAllValues$",	//1076
    "removeServer",	//1077
    "removeServer$",	//1078
    "removeValue",	//1079
    "removeValue$",	//1080
    "rename",	//1081
    "rename$$",	//1082
    "request",	//1083
    "request#",	//1084
    "request##",	//1085
    "request###",	//1086
    "requestFinished",	//1087
    "requestFinished$$",	//1088
    "requestStarted",	//1089
    "requestStarted$",	//1090
    "reset",	//1091
    "responseHeaderReceived",	//1092
    "responseHeaderReceived#",	//1093
    "rmdir",	//1094
    "rmdir$",	//1095
    "saveToDisk",	//1096
    "scopeId",	//1097
    "seek",	//1098
    "sendCustomRequest",	//1099
    "sendCustomRequest##",	//1100
    "sendCustomRequest###",	//1101
    "serialNumber",	//1102
    "serverAddress",	//1103
    "serverError",	//1104
    "serverName",	//1105
    "serverPort",	//1106
    "sessionCipher",	//1107
    "sessionProperty",	//1108
    "sessionProperty$",	//1109
    "setAddress",	//1110
    "setAddress#",	//1111
    "setAddress$",	//1112
    "setAddresses",	//1113
    "setAddresses?",	//1114
    "setAllCookies",	//1115
    "setAllCookies?",	//1116
    "setApplicationProxy",	//1117
    "setApplicationProxy#",	//1118
    "setApplicationProxyFactory",	//1119
    "setApplicationProxyFactory#",	//1120
    "setAttribute",	//1121
    "setAttribute$#",	//1122
    "setAttributes",	//1123
    "setAttributes?",	//1124
    "setBody",	//1125
    "setBody#",	//1126
    "setBodyDevice",	//1127
    "setBodyDevice#",	//1128
    "setBoundary",	//1129
    "setBoundary#",	//1130
    "setBroadcast",	//1131
    "setBroadcast#",	//1132
    "setCaCertificates",	//1133
    "setCaCertificates?",	//1134
    "setCache",	//1135
    "setCache#",	//1136
    "setCacheDirectory",	//1137
    "setCacheDirectory$",	//1138
    "setCapabilities",	//1139
    "setCapabilities$",	//1140
    "setCiphers",	//1141
    "setCiphers$",	//1142
    "setCiphers?",	//1143
    "setConfiguration",	//1144
    "setConfiguration#",	//1145
    "setContentLength",	//1146
    "setContentLength$",	//1147
    "setContentType",	//1148
    "setContentType$",	//1149
    "setCookieJar",	//1150
    "setCookieJar#",	//1151
    "setCookiesFromUrl",	//1152
    "setCookiesFromUrl?#",	//1153
    "setDefaultCaCertificates",	//1154
    "setDefaultCaCertificates?",	//1155
    "setDefaultCiphers",	//1156
    "setDefaultCiphers?",	//1157
    "setDefaultConfiguration",	//1158
    "setDefaultConfiguration#",	//1159
    "setDir",	//1160
    "setDir$",	//1161
    "setDomain",	//1162
    "setDomain$",	//1163
    "setError",	//1164
    "setError$",	//1165
    "setError$$",	//1166
    "setErrorString",	//1167
    "setErrorString$",	//1168
    "setExpirationDate",	//1169
    "setExpirationDate#",	//1170
    "setFile",	//1171
    "setFile$",	//1172
    "setFinished",	//1173
    "setFinished$",	//1174
    "setGroup",	//1175
    "setGroup$",	//1176
    "setHeader",	//1177
    "setHeader$#",	//1178
    "setHost",	//1179
    "setHost$",	//1180
    "setHost$$",	//1181
    "setHost$$$",	//1182
    "setHostName",	//1183
    "setHostName$",	//1184
    "setHttpOnly",	//1185
    "setHttpOnly$",	//1186
    "setIp",	//1187
    "setIp#",	//1188
    "setLastModified",	//1189
    "setLastModified#",	//1190
    "setLastRead",	//1191
    "setLastRead#",	//1192
    "setLocalAddress",	//1193
    "setLocalAddress#",	//1194
    "setLocalCertificate",	//1195
    "setLocalCertificate#",	//1196
    "setLocalCertificate$",	//1197
    "setLocalCertificate$$",	//1198
    "setLocalPort",	//1199
    "setLocalPort$",	//1200
    "setLookupId",	//1201
    "setLookupId$",	//1202
    "setMaxPendingConnections",	//1203
    "setMaxPendingConnections$",	//1204
    "setMaximumCacheSize",	//1205
    "setMaximumCacheSize$",	//1206
    "setMulticastInterface",	//1207
    "setMulticastInterface#",	//1208
    "setName",	//1209
    "setName#",	//1210
    "setName$",	//1211
    "setNetmask",	//1212
    "setNetmask#",	//1213
    "setNetworkAccessible",	//1214
    "setNetworkAccessible$",	//1215
    "setNetworkConfiguration",	//1216
    "setNetworkConfiguration#",	//1217
    "setOperation",	//1218
    "setOperation$",	//1219
    "setOption",	//1220
    "setOption$#",	//1221
    "setOriginatingObject",	//1222
    "setOriginatingObject#",	//1223
    "setOwner",	//1224
    "setOwner$",	//1225
    "setPassword",	//1226
    "setPassword$",	//1227
    "setPath",	//1228
    "setPath$",	//1229
    "setPeerAddress",	//1230
    "setPeerAddress#",	//1231
    "setPeerHostName",	//1232
    "setPeerHostName$",	//1233
    "setPeerName",	//1234
    "setPeerName$",	//1235
    "setPeerPort",	//1236
    "setPeerPort$",	//1237
    "setPeerVerifyDepth",	//1238
    "setPeerVerifyDepth$",	//1239
    "setPeerVerifyMode",	//1240
    "setPeerVerifyMode$",	//1241
    "setPeerVerifyName",	//1242
    "setPeerVerifyName$",	//1243
    "setPermissions",	//1244
    "setPermissions$",	//1245
    "setPort",	//1246
    "setPort$",	//1247
    "setPrefixLength",	//1248
    "setPrefixLength$",	//1249
    "setPriority",	//1250
    "setPriority$",	//1251
    "setPrivateKey",	//1252
    "setPrivateKey#",	//1253
    "setPrivateKey$",	//1254
    "setPrivateKey$$",	//1255
    "setPrivateKey$$$",	//1256
    "setPrivateKey$$$#",	//1257
    "setProtocol",	//1258
    "setProtocol$",	//1259
    "setProtocolTag",	//1260
    "setProtocolTag$",	//1261
    "setProxy",	//1262
    "setProxy#",	//1263
    "setProxy$$",	//1264
    "setProxy$$$",	//1265
    "setProxy$$$$",	//1266
    "setProxyFactory",	//1267
    "setProxyFactory#",	//1268
    "setQueryType",	//1269
    "setQueryType$",	//1270
    "setRawHeader",	//1271
    "setRawHeader##",	//1272
    "setRawHeaders",	//1273
    "setRawHeaders?",	//1274
    "setReadBufferSize",	//1275
    "setReadBufferSize$",	//1276
    "setReadable",	//1277
    "setReadable$",	//1278
    "setRequest",	//1279
    "setRequest#",	//1280
    "setRequest$$",	//1281
    "setRequest$$$",	//1282
    "setRequest$$$$",	//1283
    "setSaveToDisk",	//1284
    "setSaveToDisk$",	//1285
    "setScopeId",	//1286
    "setScopeId$",	//1287
    "setSecure",	//1288
    "setSecure$",	//1289
    "setSessionProperty",	//1290
    "setSessionProperty$#",	//1291
    "setSize",	//1292
    "setSize$",	//1293
    "setSocket",	//1294
    "setSocket#",	//1295
    "setSocketDescriptor",	//1296
    "setSocketDescriptor$",	//1297
    "setSocketDescriptor$$",	//1298
    "setSocketDescriptor$$$",	//1299
    "setSocketDescriptor?",	//1300
    "setSocketDescriptor?$",	//1301
    "setSocketDescriptor?$$",	//1302
    "setSocketError",	//1303
    "setSocketError$",	//1304
    "setSocketOption",	//1305
    "setSocketOption$#",	//1306
    "setSocketState",	//1307
    "setSocketState$",	//1308
    "setSslConfiguration",	//1309
    "setSslConfiguration#",	//1310
    "setSslOption",	//1311
    "setSslOption$$",	//1312
    "setStatusLine",	//1313
    "setStatusLine$",	//1314
    "setStatusLine$$",	//1315
    "setStatusLine$$$",	//1316
    "setStatusLine$$$$",	//1317
    "setSymLink",	//1318
    "setSymLink$",	//1319
    "setTransferMode",	//1320
    "setTransferMode$",	//1321
    "setType",	//1322
    "setType$",	//1323
    "setUrl",	//1324
    "setUrl#",	//1325
    "setUseSystemConfiguration",	//1326
    "setUseSystemConfiguration$",	//1327
    "setUser",	//1328
    "setUser$",	//1329
    "setUser$$",	//1330
    "setValid",	//1331
    "setValid$",	//1332
    "setValue",	//1333
    "setValue#",	//1334
    "setValue$$",	//1335
    "setValues",	//1336
    "setValues?",	//1337
    "setWritable",	//1338
    "setWritable$",	//1339
    "size",	//1340
    "socketDescriptor",	//1341
    "socketOption",	//1342
    "socketOption$",	//1343
    "socketType",	//1344
    "sslConfiguration",	//1345
    "sslErrors",	//1346
    "sslErrors#?",	//1347
    "sslErrors?",	//1348
    "startClientEncryption",	//1349
    "startServerEncryption",	//1350
    "state",	//1351
    "stateChanged",	//1352
    "stateChanged$",	//1353
    "staticMetaObject",	//1354
    "statusCode",	//1355
    "stop",	//1356
    "subjectInfo",	//1357
    "subjectInfo#",	//1358
    "subjectInfo$",	//1359
    "supportedBits",	//1360
    "supportedCiphers",	//1361
    "supportsSsl",	//1362
    "systemCaCertificates",	//1363
    "systemProxyForQuery",	//1364
    "systemProxyForQuery#",	//1365
    "testSslOption",	//1366
    "testSslOption$",	//1367
    "timerEvent",	//1368
    "toDer",	//1369
    "toDer#",	//1370
    "toIPv4Address",	//1371
    "toIPv6Address",	//1372
    "toPem",	//1373
    "toPem#",	//1374
    "toRawForm",	//1375
    "toRawForm$",	//1376
    "toString",	//1377
    "tr",	//1378
    "tr$",	//1379
    "tr$$",	//1380
    "tr$$$",	//1381
    "trUtf8",	//1382
    "trUtf8$",	//1383
    "trUtf8$$",	//1384
    "trUtf8$$$",	//1385
    "type",	//1386
    "updateCompleted",	//1387
    "updateConfigurations",	//1388
    "updateMetaData",	//1389
    "updateMetaData#",	//1390
    "uploadProgress",	//1391
    "uploadProgress$$",	//1392
    "url",	//1393
    "usedBits",	//1394
    "user",	//1395
    "value",	//1396
    "value$",	//1397
    "values",	//1398
    "version",	//1399
    "waitForBytesWritten",	//1400
    "waitForBytesWritten$",	//1401
    "waitForConnected",	//1402
    "waitForConnected$",	//1403
    "waitForDisconnected",	//1404
    "waitForDisconnected$",	//1405
    "waitForEncrypted",	//1406
    "waitForEncrypted$",	//1407
    "waitForNewConnection",	//1408
    "waitForNewConnection$",	//1409
    "waitForNewConnection$$",	//1410
    "waitForOpened",	//1411
    "waitForOpened$",	//1412
    "waitForReadyRead",	//1413
    "waitForReadyRead$",	//1414
    "writeData",	//1415
    "writeData$$",	//1416
    "writeDatagram",	//1417
    "writeDatagram##$",	//1418
    "writeDatagram$$#$",	//1419
    "~QAbstractNetworkCache",	//1420
    "~QAbstractSocket",	//1421
    "~QAuthenticator",	//1422
    "~QFtp",	//1423
    "~QHostAddress",	//1424
    "~QHostInfo",	//1425
    "~QHttp",	//1426
    "~QHttpHeader",	//1427
    "~QHttpMultiPart",	//1428
    "~QHttpPart",	//1429
    "~QHttpRequestHeader",	//1430
    "~QHttpResponseHeader",	//1431
    "~QIPv6Address",	//1432
    "~QLocalServer",	//1433
    "~QLocalSocket",	//1434
    "~QNetworkAccessManager",	//1435
    "~QNetworkAddressEntry",	//1436
    "~QNetworkCacheMetaData",	//1437
    "~QNetworkConfiguration",	//1438
    "~QNetworkConfigurationManager",	//1439
    "~QNetworkCookie",	//1440
    "~QNetworkCookieJar",	//1441
    "~QNetworkDiskCache",	//1442
    "~QNetworkInterface",	//1443
    "~QNetworkProxy",	//1444
    "~QNetworkProxyFactory",	//1445
    "~QNetworkProxyQuery",	//1446
    "~QNetworkReply",	//1447
    "~QNetworkRequest",	//1448
    "~QNetworkSession",	//1449
    "~QSslCertificate",	//1450
    "~QSslCipher",	//1451
    "~QSslConfiguration",	//1452
    "~QSslError",	//1453
    "~QSslKey",	//1454
    "~QSslSocket",	//1455
    "~QTcpServer",	//1456
    "~QTcpSocket",	//1457
    "~QUdpSocket",	//1458
    "~QUrlInfo",	//1459
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {1, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1 QAbstractNetworkCache::metaObject() const
    {1, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//2 QAbstractNetworkCache::qt_metacast(const char*)
    {1, 1378, 3, 2, Smoke::mf_static, 215, 3},	//3 QAbstractNetworkCache::tr(const char*, const char*)
    {1, 1382, 3, 2, Smoke::mf_static, 215, 4},	//4 QAbstractNetworkCache::trUtf8(const char*, const char*)
    {1, 1378, 6, 3, Smoke::mf_static, 215, 5},	//5 QAbstractNetworkCache::tr(const char*, const char*, int)
    {1, 1382, 6, 3, Smoke::mf_static, 215, 6},	//6 QAbstractNetworkCache::trUtf8(const char*, const char*, int)
    {1, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//7 QAbstractNetworkCache::qt_metacall(QMetaObject::Call, int, void**)
    {1, 735, 14, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 135, 8},	//8 QAbstractNetworkCache::metaData(const QUrl&) [pure virtual]
    {1, 1389, 16, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 9},	//9 QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData&) [pure virtual]
    {1, 564, 14, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 99, 10},	//10 QAbstractNetworkCache::data(const QUrl&) [pure virtual]
    {1, 1072, 14, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 339, 11},	//11 QAbstractNetworkCache::remove(const QUrl&) [pure virtual]
    {1, 502, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 426, 12},	//12 QAbstractNetworkCache::cacheSize() const [pure virtual]
    {1, 861, 16, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 99, 13},	//13 QAbstractNetworkCache::prepare(const QNetworkCacheMetaData&) [pure virtual]
    {1, 663, 18, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 14},	//14 QAbstractNetworkCache::insert(QIODevice*) [pure virtual]
    {1, 511, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual|Smoke::mf_slot, 0, 15},	//15 QAbstractNetworkCache::clear() [pure virtual]
    {1, 205, 20, 1, Smoke::mf_ctor|Smoke::mf_protected, 2, 16},	//16 QAbstractNetworkCache::QAbstractNetworkCache(QObject*)
    {1, 1378, 1, 1, Smoke::mf_static, 215, 17},	//17 QAbstractNetworkCache::tr(const char*)
    {1, 1382, 1, 1, Smoke::mf_static, 215, 18},	//18 QAbstractNetworkCache::trUtf8(const char*)
    {1, 205, 0, 0, Smoke::mf_ctor|Smoke::mf_protected, 2, 19},	//19 QAbstractNetworkCache::QAbstractNetworkCache()
    {1, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 20},	//20 QAbstractNetworkCache::staticMetaObject() const
    {1, 1420, 0, 0, Smoke::mf_dtor, 0, 21 },	//21 QAbstractNetworkCache::~QAbstractNetworkCache()
    {2, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//22 QAbstractSocket::metaObject() const
    {2, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//23 QAbstractSocket::qt_metacast(const char*)
    {2, 1378, 3, 2, Smoke::mf_static, 215, 3},	//24 QAbstractSocket::tr(const char*, const char*)
    {2, 1382, 3, 2, Smoke::mf_static, 215, 4},	//25 QAbstractSocket::trUtf8(const char*, const char*)
    {2, 1378, 6, 3, Smoke::mf_static, 215, 5},	//26 QAbstractSocket::tr(const char*, const char*, int)
    {2, 1382, 6, 3, Smoke::mf_static, 215, 6},	//27 QAbstractSocket::trUtf8(const char*, const char*, int)
    {2, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//28 QAbstractSocket::qt_metacall(QMetaObject::Call, int, void**)
    {2, 207, 22, 2, Smoke::mf_ctor, 3, 8},	//29 QAbstractSocket::QAbstractSocket(QAbstractSocket::SocketType, QObject*)
    {2, 532, 25, 3, 0, 0, 9},	//30 QAbstractSocket::connectToHost(const QString&, unsigned short, QFlags<QIODevice::OpenModeFlag>)
    {2, 532, 29, 3, 0, 0, 10},	//31 QAbstractSocket::connectToHost(const QHostAddress&, unsigned short, QFlags<QIODevice::OpenModeFlag>)
    {2, 580, 0, 0, 0, 0, 11},	//32 QAbstractSocket::disconnectFromHost()
    {2, 693, 0, 0, Smoke::mf_const, 339, 12},	//33 QAbstractSocket::isValid() const
    {2, 495, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 13},	//34 QAbstractSocket::bytesAvailable() const
    {2, 497, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 14},	//35 QAbstractSocket::bytesToWrite() const
    {2, 503, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 15},	//36 QAbstractSocket::canReadLine() const
    {2, 724, 0, 0, Smoke::mf_const, 438, 16},	//37 QAbstractSocket::localPort() const
    {2, 720, 0, 0, Smoke::mf_const, 75, 17},	//38 QAbstractSocket::localAddress() const
    {2, 844, 0, 0, Smoke::mf_const, 438, 18},	//39 QAbstractSocket::peerPort() const
    {2, 839, 0, 0, Smoke::mf_const, 75, 19},	//40 QAbstractSocket::peerAddress() const
    {2, 843, 0, 0, Smoke::mf_const, 215, 20},	//41 QAbstractSocket::peerName() const
    {2, 1058, 0, 0, Smoke::mf_const, 426, 21},	//42 QAbstractSocket::readBufferSize() const
    {2, 1275, 33, 1, 0, 0, 22},	//43 QAbstractSocket::setReadBufferSize(long long)
    {2, 438, 0, 0, 0, 0, 23},	//44 QAbstractSocket::abort()
    {2, 1341, 0, 0, Smoke::mf_const, 424, 24},	//45 QAbstractSocket::socketDescriptor() const
    {2, 1296, 35, 3, 0, 339, 25},	//46 QAbstractSocket::setSocketDescriptor(int, QAbstractSocket::SocketState, QFlags<QIODevice::OpenModeFlag>)
    {2, 1305, 39, 2, 0, 0, 26},	//47 QAbstractSocket::setSocketOption(QAbstractSocket::SocketOption, const QVariant&)
    {2, 1342, 42, 1, 0, 241, 27},	//48 QAbstractSocket::socketOption(QAbstractSocket::SocketOption)
    {2, 1344, 0, 0, Smoke::mf_const, 8, 28},	//49 QAbstractSocket::socketType() const
    {2, 1351, 0, 0, Smoke::mf_const, 7, 29},	//50 QAbstractSocket::state() const
    {2, 600, 0, 0, Smoke::mf_const, 5, 30},	//51 QAbstractSocket::error() const
    {2, 514, 0, 0, Smoke::mf_virtual, 0, 31},	//52 QAbstractSocket::close()
    {2, 689, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 32},	//53 QAbstractSocket::isSequential() const
    {2, 476, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 33},	//54 QAbstractSocket::atEnd() const
    {2, 613, 0, 0, 0, 339, 34},	//55 QAbstractSocket::flush()
    {2, 1402, 44, 1, 0, 339, 35},	//56 QAbstractSocket::waitForConnected(int)
    {2, 1413, 44, 1, Smoke::mf_virtual, 339, 36},	//57 QAbstractSocket::waitForReadyRead(int)
    {2, 1400, 44, 1, Smoke::mf_virtual, 339, 37},	//58 QAbstractSocket::waitForBytesWritten(int)
    {2, 1404, 44, 1, 0, 339, 38},	//59 QAbstractSocket::waitForDisconnected(int)
    {2, 1262, 46, 1, 0, 0, 39},	//60 QAbstractSocket::setProxy(const QNetworkProxy&)
    {2, 868, 0, 0, Smoke::mf_const, 156, 40},	//61 QAbstractSocket::proxy() const
    {2, 652, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 41},	//62 QAbstractSocket::hostFound()
    {2, 548, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 42},	//63 QAbstractSocket::connected()
    {2, 585, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 43},	//64 QAbstractSocket::disconnected()
    {2, 1352, 48, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 44},	//65 QAbstractSocket::stateChanged(QAbstractSocket::SocketState)
    {2, 600, 50, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 45},	//66 QAbstractSocket::error(QAbstractSocket::SocketError)
    {2, 869, 52, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 46},	//67 QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy&, QAuthenticator*)
    {2, 542, 55, 3, Smoke::mf_protected|Smoke::mf_slot, 0, 47},	//68 QAbstractSocket::connectToHostImplementation(const QString&, quint16, QIODevice::OpenMode)
    {2, 581, 0, 0, Smoke::mf_protected|Smoke::mf_slot, 0, 48},	//69 QAbstractSocket::disconnectFromHostImplementation()
    {2, 1059, 59, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 49},	//70 QAbstractSocket::readData(char*, long long)
    {2, 1065, 59, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 50},	//71 QAbstractSocket::readLineData(char*, long long)
    {2, 1415, 62, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 51},	//72 QAbstractSocket::writeData(const char*, long long)
    {2, 1307, 48, 1, Smoke::mf_protected, 0, 52},	//73 QAbstractSocket::setSocketState(QAbstractSocket::SocketState)
    {2, 1303, 50, 1, Smoke::mf_protected, 0, 53},	//74 QAbstractSocket::setSocketError(QAbstractSocket::SocketError)
    {2, 1199, 65, 1, Smoke::mf_protected, 0, 54},	//75 QAbstractSocket::setLocalPort(unsigned short)
    {2, 1193, 67, 1, Smoke::mf_protected, 0, 55},	//76 QAbstractSocket::setLocalAddress(const QHostAddress&)
    {2, 1236, 65, 1, Smoke::mf_protected, 0, 56},	//77 QAbstractSocket::setPeerPort(unsigned short)
    {2, 1230, 67, 1, Smoke::mf_protected, 0, 57},	//78 QAbstractSocket::setPeerAddress(const QHostAddress&)
    {2, 1234, 69, 1, Smoke::mf_protected, 0, 58},	//79 QAbstractSocket::setPeerName(const QString&)
    {2, 1378, 1, 1, Smoke::mf_static, 215, 59},	//80 QAbstractSocket::tr(const char*)
    {2, 1382, 1, 1, Smoke::mf_static, 215, 60},	//81 QAbstractSocket::trUtf8(const char*)
    {2, 532, 71, 2, 0, 0, 61},	//82 QAbstractSocket::connectToHost(const QString&, unsigned short)
    {2, 532, 74, 2, 0, 0, 62},	//83 QAbstractSocket::connectToHost(const QHostAddress&, unsigned short)
    {2, 1296, 44, 1, 0, 339, 63},	//84 QAbstractSocket::setSocketDescriptor(int)
    {2, 1296, 77, 2, 0, 339, 64},	//85 QAbstractSocket::setSocketDescriptor(int, QAbstractSocket::SocketState)
    {2, 1402, 0, 0, 0, 339, 65},	//86 QAbstractSocket::waitForConnected()
    {2, 1413, 0, 0, 0, 339, 66},	//87 QAbstractSocket::waitForReadyRead()
    {2, 1400, 0, 0, 0, 339, 67},	//88 QAbstractSocket::waitForBytesWritten()
    {2, 1404, 0, 0, 0, 339, 68},	//89 QAbstractSocket::waitForDisconnected()
    {2, 542, 80, 2, Smoke::mf_protected|Smoke::mf_slot, 0, 69},	//90 QAbstractSocket::connectToHostImplementation(const QString&, quint16)
    {2, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 70},	//91 QAbstractSocket::staticMetaObject() const
    {2, 391, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 71},	//92 QAbstractSocket::TcpSocket (enum)
    {2, 399, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 72},	//93 QAbstractSocket::UdpSocket (enum)
    {2, 424, 0, 0, Smoke::mf_static|Smoke::mf_enum, 8, 73},	//94 QAbstractSocket::UnknownSocketType (enum)
    {2, 112, 0, 0, Smoke::mf_static|Smoke::mf_enum, 4, 74},	//95 QAbstractSocket::IPv4Protocol (enum)
    {2, 113, 0, 0, Smoke::mf_static|Smoke::mf_enum, 4, 75},	//96 QAbstractSocket::IPv6Protocol (enum)
    {2, 417, 0, 0, Smoke::mf_static|Smoke::mf_enum, 4, 76},	//97 QAbstractSocket::UnknownNetworkLayerProtocol (enum)
    {2, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 77},	//98 QAbstractSocket::ConnectionRefusedError (enum)
    {2, 350, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 78},	//99 QAbstractSocket::RemoteHostClosedError (enum)
    {2, 105, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 79},	//100 QAbstractSocket::HostNotFoundError (enum)
    {2, 370, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 80},	//101 QAbstractSocket::SocketAccessError (enum)
    {2, 372, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 81},	//102 QAbstractSocket::SocketResourceError (enum)
    {2, 373, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 82},	//103 QAbstractSocket::SocketTimeoutError (enum)
    {2, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 83},	//104 QAbstractSocket::DatagramTooLargeError (enum)
    {2, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 84},	//105 QAbstractSocket::NetworkError (enum)
    {2, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 85},	//106 QAbstractSocket::AddressInUseError (enum)
    {2, 371, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 86},	//107 QAbstractSocket::SocketAddressNotAvailableError (enum)
    {2, 426, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 87},	//108 QAbstractSocket::UnsupportedSocketOperationError (enum)
    {2, 412, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 88},	//109 QAbstractSocket::UnfinishedSocketOperationError (enum)
    {2, 194, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 89},	//110 QAbstractSocket::ProxyAuthenticationRequiredError (enum)
    {2, 377, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 90},	//111 QAbstractSocket::SslHandshakeFailedError (enum)
    {2, 196, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 91},	//112 QAbstractSocket::ProxyConnectionRefusedError (enum)
    {2, 195, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 92},	//113 QAbstractSocket::ProxyConnectionClosedError (enum)
    {2, 197, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 93},	//114 QAbstractSocket::ProxyConnectionTimeoutError (enum)
    {2, 198, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 94},	//115 QAbstractSocket::ProxyNotFoundError (enum)
    {2, 199, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 95},	//116 QAbstractSocket::ProxyProtocolError (enum)
    {2, 423, 0, 0, Smoke::mf_static|Smoke::mf_enum, 5, 96},	//117 QAbstractSocket::UnknownSocketError (enum)
    {2, 408, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 97},	//118 QAbstractSocket::UnconnectedState (enum)
    {2, 101, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 98},	//119 QAbstractSocket::HostLookupState (enum)
    {2, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 99},	//120 QAbstractSocket::ConnectingState (enum)
    {2, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 100},	//121 QAbstractSocket::ConnectedState (enum)
    {2, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 101},	//122 QAbstractSocket::BoundState (enum)
    {2, 149, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 102},	//123 QAbstractSocket::ListeningState (enum)
    {2, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 7, 103},	//124 QAbstractSocket::ClosingState (enum)
    {2, 156, 0, 0, Smoke::mf_static|Smoke::mf_enum, 6, 104},	//125 QAbstractSocket::LowDelayOption (enum)
    {2, 126, 0, 0, Smoke::mf_static|Smoke::mf_enum, 6, 105},	//126 QAbstractSocket::KeepAliveOption (enum)
    {2, 163, 0, 0, Smoke::mf_static|Smoke::mf_enum, 6, 106},	//127 QAbstractSocket::MulticastTtlOption (enum)
    {2, 162, 0, 0, Smoke::mf_static|Smoke::mf_enum, 6, 107},	//128 QAbstractSocket::MulticastLoopbackOption (enum)
    {2, 1421, 0, 0, Smoke::mf_dtor, 0, 108 },	//129 QAbstractSocket::~QAbstractSocket()
    {3, 209, 0, 0, Smoke::mf_ctor, 10, 1},	//130 QAuthenticator::QAuthenticator()
    {3, 209, 83, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 10, 2},	//131 QAuthenticator::QAuthenticator(const QAuthenticator&)
    {3, 796, 83, 1, 0, 9, 3},	//132 QAuthenticator::operator=(const QAuthenticator&)
    {3, 799, 83, 1, Smoke::mf_const, 339, 4},	//133 QAuthenticator::operator==(const QAuthenticator&) const
    {3, 763, 83, 1, Smoke::mf_const, 339, 5},	//134 QAuthenticator::operator!=(const QAuthenticator&) const
    {3, 1395, 0, 0, Smoke::mf_const, 215, 6},	//135 QAuthenticator::user() const
    {3, 1328, 69, 1, 0, 0, 7},	//136 QAuthenticator::setUser(const QString&)
    {3, 837, 0, 0, Smoke::mf_const, 215, 8},	//137 QAuthenticator::password() const
    {3, 1226, 69, 1, 0, 0, 9},	//138 QAuthenticator::setPassword(const QString&)
    {3, 1069, 0, 0, Smoke::mf_const, 215, 10},	//139 QAuthenticator::realm() const
    {3, 824, 69, 1, Smoke::mf_const, 241, 11},	//140 QAuthenticator::option(const QString&) const
    {3, 826, 0, 0, Smoke::mf_const, 74, 12},	//141 QAuthenticator::options() const
    {3, 1220, 85, 2, 0, 0, 13},	//142 QAuthenticator::setOption(const QString&, const QVariant&)
    {3, 682, 0, 0, Smoke::mf_const, 339, 14},	//143 QAuthenticator::isNull() const
    {3, 577, 0, 0, 0, 0, 15},	//144 QAuthenticator::detach()
    {3, 1422, 0, 0, Smoke::mf_dtor, 0, 16 },	//145 QAuthenticator::~QAuthenticator()
    {16, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//146 QFtp::metaObject() const
    {16, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//147 QFtp::qt_metacast(const char*)
    {16, 1378, 3, 2, Smoke::mf_static, 215, 3},	//148 QFtp::tr(const char*, const char*)
    {16, 1382, 3, 2, Smoke::mf_static, 215, 4},	//149 QFtp::trUtf8(const char*, const char*)
    {16, 1378, 6, 3, Smoke::mf_static, 215, 5},	//150 QFtp::tr(const char*, const char*, int)
    {16, 1382, 6, 3, Smoke::mf_static, 215, 6},	//151 QFtp::trUtf8(const char*, const char*, int)
    {16, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//152 QFtp::qt_metacall(QMetaObject::Call, int, void**)
    {16, 211, 20, 1, Smoke::mf_ctor, 67, 8},	//153 QFtp::QFtp(QObject*)
    {16, 1262, 71, 2, 0, 424, 9},	//154 QFtp::setProxy(const QString&, unsigned short)
    {16, 532, 71, 2, 0, 424, 10},	//155 QFtp::connectToHost(const QString&, unsigned short)
    {16, 725, 88, 2, 0, 424, 11},	//156 QFtp::login(const QString&, const QString&)
    {16, 514, 0, 0, 0, 424, 12},	//157 QFtp::close()
    {16, 1320, 91, 1, 0, 424, 13},	//158 QFtp::setTransferMode(QFtp::TransferMode)
    {16, 712, 69, 1, 0, 424, 14},	//159 QFtp::list(const QString&)
    {16, 505, 69, 1, 0, 424, 15},	//160 QFtp::cd(const QString&)
    {16, 627, 93, 3, 0, 424, 16},	//161 QFtp::get(const QString&, QIODevice*, QFtp::TransferType)
    {16, 876, 97, 3, 0, 424, 17},	//162 QFtp::put(const QByteArray&, const QString&, QFtp::TransferType)
    {16, 876, 101, 3, 0, 424, 18},	//163 QFtp::put(QIODevice*, const QString&, QFtp::TransferType)
    {16, 1072, 69, 1, 0, 424, 19},	//164 QFtp::remove(const QString&)
    {16, 742, 69, 1, 0, 424, 20},	//165 QFtp::mkdir(const QString&)
    {16, 1094, 69, 1, 0, 424, 21},	//166 QFtp::rmdir(const QString&)
    {16, 1081, 88, 2, 0, 424, 22},	//167 QFtp::rename(const QString&, const QString&)
    {16, 1046, 69, 1, 0, 424, 23},	//168 QFtp::rawCommand(const QString&)
    {16, 495, 0, 0, Smoke::mf_const, 426, 24},	//169 QFtp::bytesAvailable() const
    {16, 1055, 59, 2, 0, 426, 25},	//170 QFtp::read(char*, long long)
    {16, 1057, 0, 0, 0, 14, 26},	//171 QFtp::readAll()
    {16, 560, 0, 0, Smoke::mf_const, 424, 27},	//172 QFtp::currentId() const
    {16, 559, 0, 0, Smoke::mf_const, 99, 28},	//173 QFtp::currentDevice() const
    {16, 557, 0, 0, Smoke::mf_const, 68, 29},	//174 QFtp::currentCommand() const
    {16, 641, 0, 0, Smoke::mf_const, 339, 30},	//175 QFtp::hasPendingCommands() const
    {16, 512, 0, 0, 0, 0, 31},	//176 QFtp::clearPendingCommands()
    {16, 1351, 0, 0, Smoke::mf_const, 70, 32},	//177 QFtp::state() const
    {16, 600, 0, 0, Smoke::mf_const, 69, 33},	//178 QFtp::error() const
    {16, 602, 0, 0, Smoke::mf_const, 215, 34},	//179 QFtp::errorString() const
    {16, 438, 0, 0, Smoke::mf_slot, 0, 35},	//180 QFtp::abort()
    {16, 1352, 44, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 36},	//181 QFtp::stateChanged(int)
    {16, 714, 105, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 37},	//182 QFtp::listInfo(const QUrlInfo&)
    {16, 1067, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 38},	//183 QFtp::readyRead()
    {16, 570, 107, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 39},	//184 QFtp::dataTransferProgress(qint64, qint64)
    {16, 1048, 110, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 40},	//185 QFtp::rawCommandReply(int, const QString&)
    {16, 519, 44, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 41},	//186 QFtp::commandStarted(int)
    {16, 517, 113, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 42},	//187 QFtp::commandFinished(int, bool)
    {16, 587, 116, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 43},	//188 QFtp::done(bool)
    {16, 1378, 1, 1, Smoke::mf_static, 215, 44},	//189 QFtp::tr(const char*)
    {16, 1382, 1, 1, Smoke::mf_static, 215, 45},	//190 QFtp::trUtf8(const char*)
    {16, 211, 0, 0, Smoke::mf_ctor, 67, 46},	//191 QFtp::QFtp()
    {16, 532, 69, 1, 0, 424, 47},	//192 QFtp::connectToHost(const QString&)
    {16, 725, 0, 0, 0, 424, 48},	//193 QFtp::login()
    {16, 725, 69, 1, 0, 424, 49},	//194 QFtp::login(const QString&)
    {16, 712, 0, 0, 0, 424, 50},	//195 QFtp::list()
    {16, 627, 69, 1, 0, 424, 51},	//196 QFtp::get(const QString&)
    {16, 627, 118, 2, 0, 424, 52},	//197 QFtp::get(const QString&, QIODevice*)
    {16, 876, 121, 2, 0, 424, 53},	//198 QFtp::put(const QByteArray&, const QString&)
    {16, 876, 124, 2, 0, 424, 54},	//199 QFtp::put(QIODevice*, const QString&)
    {16, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 55},	//200 QFtp::staticMetaObject() const
    {16, 407, 0, 0, Smoke::mf_static|Smoke::mf_enum, 70, 56},	//201 QFtp::Unconnected (enum)
    {16, 100, 0, 0, Smoke::mf_static|Smoke::mf_enum, 70, 57},	//202 QFtp::HostLookup (enum)
    {16, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 70, 58},	//203 QFtp::Connecting (enum)
    {16, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 70, 59},	//204 QFtp::Connected (enum)
    {16, 154, 0, 0, Smoke::mf_static|Smoke::mf_enum, 70, 60},	//205 QFtp::LoggedIn (enum)
    {16, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 70, 61},	//206 QFtp::Closing (enum)
    {16, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 62},	//207 QFtp::NoError (enum)
    {16, 415, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 63},	//208 QFtp::UnknownError (enum)
    {16, 104, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 64},	//209 QFtp::HostNotFound (enum)
    {16, 58, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 65},	//210 QFtp::ConnectionRefused (enum)
    {16, 175, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 66},	//211 QFtp::NotConnected (enum)
    {16, 171, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 67},	//212 QFtp::None (enum)
    {16, 368, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 68},	//213 QFtp::SetTransferMode (enum)
    {16, 367, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 69},	//214 QFtp::SetProxy (enum)
    {16, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 70},	//215 QFtp::ConnectToHost (enum)
    {16, 155, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 71},	//216 QFtp::Login (enum)
    {16, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 72},	//217 QFtp::Close (enum)
    {16, 147, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 73},	//218 QFtp::List (enum)
    {16, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 74},	//219 QFtp::Cd (enum)
    {16, 96, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 75},	//220 QFtp::Get (enum)
    {16, 203, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 76},	//221 QFtp::Put (enum)
    {16, 351, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 77},	//222 QFtp::Remove (enum)
    {16, 161, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 78},	//223 QFtp::Mkdir (enum)
    {16, 354, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 79},	//224 QFtp::Rmdir (enum)
    {16, 352, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 80},	//225 QFtp::Rename (enum)
    {16, 341, 0, 0, Smoke::mf_static|Smoke::mf_enum, 68, 81},	//226 QFtp::RawCommand (enum)
    {16, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 71, 82},	//227 QFtp::Active (enum)
    {16, 182, 0, 0, Smoke::mf_static|Smoke::mf_enum, 71, 83},	//228 QFtp::Passive (enum)
    {16, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 72, 84},	//229 QFtp::Binary (enum)
    {16, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 72, 85},	//230 QFtp::Ascii (enum)
    {16, 1423, 0, 0, Smoke::mf_dtor, 0, 86 },	//231 QFtp::~QFtp()
    {17, 962, 127, 1, Smoke::mf_static, 424, 1},	//232 QGlobalSpace::qRound(double)
    {17, 821, 129, 2, Smoke::mf_static, 37, 2},	//233 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {17, 880, 127, 1, Smoke::mf_static, 422, 3},	//234 QGlobalSpace::qAcos(double)
    {17, 813, 132, 2, Smoke::mf_static, 20, 4},	//235 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {17, 821, 135, 2, Smoke::mf_static, 35, 5},	//236 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {17, 813, 138, 2, Smoke::mf_static, 20, 6},	//237 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {17, 884, 0, 0, Smoke::mf_static, 215, 7},	//238 QGlobalSpace::qAppName()
    {17, 821, 141, 2, Smoke::mf_static, 104, 8},	//239 QGlobalSpace::operator|(Qt::WindowType, int)
    {17, 1011, 144, 3, Smoke::mf_static, 342, 9},	//240 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {17, 925, 148, 1, Smoke::mf_static, 435, 10},	//241 QGlobalSpace::qHash(unsigned int)
    {17, 925, 150, 1, Smoke::mf_static, 435, 11},	//242 QGlobalSpace::qHash(char)
    {17, 771, 152, 2, Smoke::mf_static, 398, 12},	//243 QGlobalSpace::operator*(const QSizeF&, double)
    {17, 788, 155, 2, Smoke::mf_static, 24, 13},	//244 QGlobalSpace::operator<<(QDebug, const QLine&)
    {17, 989, 1, 1, Smoke::mf_static, 14, 14},	//245 QGlobalSpace::qgetenv(const char*)
    {17, 784, 158, 2, Smoke::mf_static, 339, 15},	//246 QGlobalSpace::operator<(const QByteArray&, const char*)
    {17, 813, 161, 2, Smoke::mf_static, 20, 16},	//247 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {17, 821, 164, 2, Smoke::mf_static, 57, 17},	//248 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {17, 799, 167, 2, Smoke::mf_static, 339, 18},	//249 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {17, 788, 170, 2, Smoke::mf_static, 24, 19},	//250 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {17, 799, 173, 2, Smoke::mf_static, 339, 20},	//251 QGlobalSpace::operator==(const QSize&, const QSize&)
    {17, 788, 176, 2, Smoke::mf_static, 24, 21},	//252 QGlobalSpace::operator<<(QDebug, const QHostAddress&)
    {17, 911, 127, 1, Smoke::mf_static, 422, 22},	//253 QGlobalSpace::qFastSin(double)
    {17, 774, 179, 2, Smoke::mf_static, 406, 23},	//254 QGlobalSpace::operator+(QChar, const QString&)
    {17, 1009, 182, 3, Smoke::mf_static, 424, 24},	//255 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {17, 792, 186, 2, Smoke::mf_static, 339, 25},	//256 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {17, 788, 189, 2, Smoke::mf_static, 24, 26},	//257 QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketError)
    {17, 1044, 192, 4, Smoke::mf_static, 424, 27},	//258 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {17, 763, 197, 2, Smoke::mf_static, 339, 28},	//259 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {17, 763, 200, 2, Smoke::mf_static, 339, 29},	//260 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {17, 788, 203, 2, Smoke::mf_static, 20, 30},	//261 QGlobalSpace::operator<<(QDataStream&, const QHostAddress&)
    {17, 774, 206, 2, Smoke::mf_static, 406, 31},	//262 QGlobalSpace::operator+(const QString&, QChar)
    {17, 774, 173, 2, Smoke::mf_static, 396, 32},	//263 QGlobalSpace::operator+(const QSize&, const QSize&)
    {17, 1015, 209, 2, Smoke::mf_static, 435, 33},	//264 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {17, 799, 186, 2, Smoke::mf_static, 339, 34},	//265 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {17, 813, 212, 2, Smoke::mf_static, 20, 35},	//266 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {17, 788, 215, 2, Smoke::mf_static, 24, 36},	//267 QGlobalSpace::operator<<(QDebug, const QDate&)
    {17, 763, 218, 2, Smoke::mf_static, 339, 37},	//268 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {17, 821, 221, 2, Smoke::mf_static, 63, 38},	//269 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {17, 788, 224, 2, Smoke::mf_static, 24, 39},	//270 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {17, 763, 227, 2, Smoke::mf_static, 339, 40},	//271 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {17, 925, 230, 1, Smoke::mf_static, 435, 41},	//272 QGlobalSpace::qHash(unsigned char)
    {17, 1037, 232, 5, Smoke::mf_static, 0, 42},	//273 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {17, 799, 238, 2, Smoke::mf_static, 339, 43},	//274 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {17, 1026, 44, 1, Smoke::mf_static, 215, 44},	//275 QGlobalSpace::qt_error_string(int)
    {17, 1026, 0, 0, Smoke::mf_static, 215, 45},	//276 QGlobalSpace::qt_error_string()
    {17, 813, 241, 2, Smoke::mf_static, 20, 46},	//277 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {17, 939, 244, 1, Smoke::mf_static, 339, 47},	//278 QGlobalSpace::qIsNull(float)
    {17, 821, 246, 2, Smoke::mf_static, 104, 48},	//279 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {17, 953, 0, 0, Smoke::mf_static, 422, 49},	//280 QGlobalSpace::qQNaN()
    {17, 763, 249, 2, Smoke::mf_static, 339, 50},	//281 QGlobalSpace::operator!=(QChar, QChar)
    {17, 969, 252, 1, Smoke::mf_static, 228, 51},	//282 QGlobalSpace::qSetPadChar(QChar)
    {17, 813, 254, 2, Smoke::mf_static, 20, 52},	//283 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {17, 779, 197, 2, Smoke::mf_static, 390, 53},	//284 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {17, 788, 257, 2, Smoke::mf_static, 24, 54},	//285 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {17, 821, 260, 2, Smoke::mf_static, 39, 55},	//286 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {17, 788, 263, 2, Smoke::mf_static, 24, 56},	//287 QGlobalSpace::operator<<(QDebug, const QSslError::SslError&)
    {17, 1017, 266, 2, Smoke::mf_static, 215, 57},	//288 QGlobalSpace::qtTrId(const char*, int)
    {17, 1017, 1, 1, Smoke::mf_static, 215, 58},	//289 QGlobalSpace::qtTrId(const char*)
    {17, 889, 269, 2, Smoke::mf_static, 422, 59},	//290 QGlobalSpace::qAtan2(double, double)
    {17, 788, 272, 2, Smoke::mf_static, 20, 60},	//291 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {17, 925, 275, 1, Smoke::mf_static, 435, 61},	//292 QGlobalSpace::qHash(short)
    {17, 788, 277, 2, Smoke::mf_static, 20, 62},	//293 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {17, 821, 280, 2, Smoke::mf_static, 62, 63},	//294 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {17, 933, 127, 1, Smoke::mf_static, 339, 64},	//295 QGlobalSpace::qIsFinite(double)
    {17, 788, 283, 2, Smoke::mf_static, 24, 65},	//296 QGlobalSpace::operator<<(QDebug, const QSslCertificate&)
    {17, 821, 286, 2, Smoke::mf_static, 57, 66},	//297 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {17, 996, 158, 2, Smoke::mf_static, 424, 67},	//298 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {17, 1003, 1, 1, Smoke::mf_static, 342, 68},	//299 QGlobalSpace::qstrdup(const char*)
    {17, 925, 289, 1, Smoke::mf_static, 435, 69},	//300 QGlobalSpace::qHash(long)
    {17, 821, 291, 2, Smoke::mf_static, 56, 70},	//301 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {17, 996, 3, 2, Smoke::mf_static, 424, 71},	//302 QGlobalSpace::qstrcmp(const char*, const char*)
    {17, 788, 294, 2, Smoke::mf_static, 20, 72},	//303 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {17, 763, 297, 2, Smoke::mf_static, 339, 73},	//304 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {17, 774, 300, 2, Smoke::mf_static, 345, 74},	//305 QGlobalSpace::operator+(const char*, const QByteArray&)
    {17, 821, 303, 2, Smoke::mf_static, 43, 75},	//306 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag)
    {17, 821, 306, 2, Smoke::mf_static, 43, 76},	//307 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>)
    {17, 799, 309, 2, Smoke::mf_static, 339, 77},	//308 QGlobalSpace::operator==(QHostAddress::SpecialAddress, const QHostAddress&)
    {17, 925, 312, 1, Smoke::mf_static, 435, 78},	//309 QGlobalSpace::qHash(const QBitArray&)
    {17, 821, 314, 2, Smoke::mf_static, 35, 79},	//310 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {17, 1001, 317, 2, Smoke::mf_static, 342, 80},	//311 QGlobalSpace::qstrcpy(char*, const char*)
    {17, 821, 320, 2, Smoke::mf_static, 11, 81},	//312 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {17, 763, 323, 2, Smoke::mf_static, 339, 82},	//313 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {17, 784, 300, 2, Smoke::mf_static, 339, 83},	//314 QGlobalSpace::operator<(const char*, const QByteArray&)
    {17, 887, 127, 1, Smoke::mf_static, 422, 84},	//315 QGlobalSpace::qAtan(double)
    {17, 996, 300, 2, Smoke::mf_static, 424, 85},	//316 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {17, 809, 249, 2, Smoke::mf_static, 339, 86},	//317 QGlobalSpace::operator>=(QChar, QChar)
    {17, 821, 326, 2, Smoke::mf_static, 58, 87},	//318 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {17, 792, 249, 2, Smoke::mf_static, 339, 88},	//319 QGlobalSpace::operator<=(QChar, QChar)
    {17, 771, 329, 2, Smoke::mf_static, 390, 89},	//320 QGlobalSpace::operator*(const QPointF&, double)
    {17, 788, 332, 2, Smoke::mf_static, 24, 90},	//321 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {17, 799, 335, 2, Smoke::mf_static, 339, 91},	//322 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {17, 821, 338, 2, Smoke::mf_static, 32, 92},	//323 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {17, 821, 341, 2, Smoke::mf_static, 104, 93},	//324 QGlobalSpace::operator|(QUdpSocket::BindFlag, int)
    {17, 1024, 266, 2, Smoke::mf_static, 0, 94},	//325 QGlobalSpace::qt_check_pointer(const char*, int)
    {17, 799, 297, 2, Smoke::mf_static, 339, 95},	//326 QGlobalSpace::operator==(QString::Null, QString::Null)
    {17, 763, 344, 2, Smoke::mf_static, 339, 96},	//327 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {17, 813, 347, 2, Smoke::mf_static, 20, 97},	//328 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {17, 792, 350, 2, Smoke::mf_static, 339, 98},	//329 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {17, 982, 353, 2, Smoke::mf_static, 14, 99},	//330 QGlobalSpace::qUncompress(const unsigned char*, int)
    {17, 821, 356, 2, Smoke::mf_static, 49, 100},	//331 QGlobalSpace::operator|(QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>)
    {17, 896, 359, 2, Smoke::mf_static, 14, 101},	//332 QGlobalSpace::qCompress(const QByteArray&, int)
    {17, 896, 362, 1, Smoke::mf_static, 14, 102},	//333 QGlobalSpace::qCompress(const QByteArray&)
    {17, 788, 364, 2, Smoke::mf_static, 20, 103},	//334 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {17, 813, 367, 2, Smoke::mf_static, 225, 104},	//335 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {17, 788, 370, 2, Smoke::mf_static, 24, 105},	//336 QGlobalSpace::operator<<(QDebug, const QSslError&)
    {17, 821, 373, 2, Smoke::mf_static, 104, 106},	//337 QGlobalSpace::operator|(Qt::DropAction, int)
    {17, 956, 376, 4, Smoke::mf_static, 443, 107},	//338 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {17, 821, 381, 2, Smoke::mf_static, 104, 108},	//339 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {17, 976, 127, 1, Smoke::mf_static, 422, 109},	//340 QGlobalSpace::qSqrt(double)
    {17, 788, 384, 2, Smoke::mf_static, 20, 110},	//341 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {17, 788, 367, 2, Smoke::mf_static, 225, 111},	//342 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {17, 788, 387, 2, Smoke::mf_static, 24, 112},	//343 QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketState)
    {17, 788, 390, 2, Smoke::mf_static, 24, 113},	//344 QGlobalSpace::operator<<(QDebug, const QRect&)
    {17, 788, 393, 2, Smoke::mf_static, 24, 114},	//345 QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketError)
    {17, 805, 186, 2, Smoke::mf_static, 339, 115},	//346 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {17, 809, 350, 2, Smoke::mf_static, 339, 116},	//347 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {17, 931, 244, 1, Smoke::mf_static, 424, 117},	//348 QGlobalSpace::qIntCast(float)
    {17, 821, 396, 2, Smoke::mf_static, 47, 118},	//349 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {17, 799, 197, 2, Smoke::mf_static, 339, 119},	//350 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {17, 805, 300, 2, Smoke::mf_static, 339, 120},	//351 QGlobalSpace::operator>(const char*, const QByteArray&)
    {17, 907, 127, 1, Smoke::mf_static, 422, 121},	//352 QGlobalSpace::qFabs(double)
    {17, 925, 65, 1, Smoke::mf_static, 435, 122},	//353 QGlobalSpace::qHash(unsigned short)
    {17, 799, 300, 2, Smoke::mf_static, 339, 123},	//354 QGlobalSpace::operator==(const char*, const QByteArray&)
    {17, 821, 399, 2, Smoke::mf_static, 62, 124},	//355 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {17, 821, 402, 2, Smoke::mf_static, 46, 125},	//356 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {17, 788, 405, 2, Smoke::mf_static, 24, 126},	//357 QGlobalSpace::operator<<(QDebug, const QDir&)
    {17, 821, 408, 2, Smoke::mf_static, 60, 127},	//358 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {17, 763, 186, 2, Smoke::mf_static, 339, 128},	//359 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {17, 954, 411, 2, Smoke::mf_static, 443, 129},	//360 QGlobalSpace::qRealloc(void*, size_t)
    {17, 821, 414, 2, Smoke::mf_static, 53, 130},	//361 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {17, 821, 417, 2, Smoke::mf_static, 104, 131},	//362 QGlobalSpace::operator|(QSsl::SslOption, int)
    {17, 821, 420, 2, Smoke::mf_static, 104, 132},	//363 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {17, 799, 423, 2, Smoke::mf_static, 339, 133},	//364 QGlobalSpace::operator==(const QString&, QString::Null)
    {17, 821, 426, 2, Smoke::mf_static, 54, 134},	//365 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {17, 986, 0, 0, Smoke::mf_static, 24, 135},	//366 QGlobalSpace::qWarning()
    {17, 821, 429, 2, Smoke::mf_static, 104, 136},	//367 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {17, 921, 269, 2, Smoke::mf_static, 339, 137},	//368 QGlobalSpace::qFuzzyCompare(double, double)
    {17, 788, 432, 2, Smoke::mf_static, 24, 138},	//369 QGlobalSpace::operator<<(QDebug, QSslCertificate::SubjectInfo)
    {17, 821, 435, 2, Smoke::mf_static, 38, 139},	//370 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {17, 821, 438, 2, Smoke::mf_static, 40, 140},	//371 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {17, 813, 441, 2, Smoke::mf_static, 20, 141},	//372 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {17, 788, 444, 2, Smoke::mf_static, 24, 142},	//373 QGlobalSpace::operator<<(QDebug, const QSslKey&)
    {17, 788, 447, 2, Smoke::mf_static, 20, 143},	//374 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {17, 763, 450, 2, Smoke::mf_static, 339, 144},	//375 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {17, 771, 453, 2, Smoke::mf_static, 396, 145},	//376 QGlobalSpace::operator*(double, const QSize&)
    {17, 821, 456, 2, Smoke::mf_static, 52, 146},	//377 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {17, 904, 0, 0, Smoke::mf_static, 24, 147},	//378 QGlobalSpace::qDebug()
    {17, 925, 33, 1, Smoke::mf_static, 435, 148},	//379 QGlobalSpace::qHash(long long)
    {17, 821, 459, 2, Smoke::mf_static, 59, 149},	//380 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {17, 771, 462, 2, Smoke::mf_static, 388, 150},	//381 QGlobalSpace::operator*(const QPoint&, float)
    {17, 779, 465, 1, Smoke::mf_static, 390, 151},	//382 QGlobalSpace::operator-(const QPointF&)
    {17, 821, 467, 2, Smoke::mf_static, 104, 152},	//383 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {17, 935, 244, 1, Smoke::mf_static, 339, 153},	//384 QGlobalSpace::qIsInf(float)
    {17, 821, 470, 2, Smoke::mf_static, 104, 154},	//385 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {17, 792, 300, 2, Smoke::mf_static, 339, 155},	//386 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {17, 788, 473, 2, Smoke::mf_static, 24, 156},	//387 QGlobalSpace::operator<<(QDebug, const QSize&)
    {17, 925, 67, 1, Smoke::mf_static, 435, 157},	//388 QGlobalSpace::qHash(const QHostAddress&)
    {17, 763, 350, 2, Smoke::mf_static, 339, 158},	//389 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {17, 805, 249, 2, Smoke::mf_static, 339, 159},	//390 QGlobalSpace::operator>(QChar, QChar)
    {17, 782, 152, 2, Smoke::mf_static, 398, 160},	//391 QGlobalSpace::operator/(const QSizeF&, double)
    {17, 821, 476, 2, Smoke::mf_static, 104, 161},	//392 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {17, 788, 479, 2, Smoke::mf_static, 24, 162},	//393 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {17, 996, 350, 2, Smoke::mf_static, 424, 163},	//394 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {17, 769, 320, 2, Smoke::mf_static, 11, 164},	//395 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {17, 779, 482, 1, Smoke::mf_static, 388, 165},	//396 QGlobalSpace::operator-(const QPoint&)
    {17, 788, 484, 2, Smoke::mf_static, 24, 166},	//397 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {17, 809, 158, 2, Smoke::mf_static, 339, 167},	//398 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {17, 788, 487, 2, Smoke::mf_static, 20, 168},	//399 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {17, 821, 490, 2, Smoke::mf_static, 47, 169},	//400 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {17, 784, 186, 2, Smoke::mf_static, 339, 170},	//401 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {17, 813, 493, 2, Smoke::mf_static, 20, 171},	//402 QGlobalSpace::operator>>(QDataStream&, QHostAddress&)
    {17, 763, 496, 2, Smoke::mf_static, 339, 172},	//403 QGlobalSpace::operator!=(QBool, QBool)
    {17, 763, 499, 2, Smoke::mf_static, 339, 173},	//404 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {17, 925, 502, 1, Smoke::mf_static, 435, 174},	//405 QGlobalSpace::qHash(unsigned long long)
    {17, 913, 1, 1, Smoke::mf_static, 418, 175},	//406 QGlobalSpace::qFlagLocation(const char*)
    {17, 782, 329, 2, Smoke::mf_static, 390, 176},	//407 QGlobalSpace::operator/(const QPointF&, double)
    {17, 931, 127, 1, Smoke::mf_static, 424, 177},	//408 QGlobalSpace::qIntCast(double)
    {17, 821, 504, 2, Smoke::mf_static, 104, 178},	//409 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {17, 982, 362, 1, Smoke::mf_static, 14, 179},	//410 QGlobalSpace::qUncompress(const QByteArray&)
    {17, 788, 507, 2, Smoke::mf_static, 24, 180},	//411 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {17, 763, 167, 2, Smoke::mf_static, 339, 181},	//412 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {17, 799, 510, 2, Smoke::mf_static, 339, 182},	//413 QGlobalSpace::operator==(QString::Null, const QString&)
    {17, 792, 158, 2, Smoke::mf_static, 339, 183},	//414 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {17, 909, 127, 1, Smoke::mf_static, 422, 184},	//415 QGlobalSpace::qFastCos(double)
    {17, 960, 513, 1, Smoke::mf_static, 0, 185},	//416 QGlobalSpace::qRemovePostRoutine(void(*)())
    {17, 821, 515, 2, Smoke::mf_static, 40, 186},	//417 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {17, 821, 518, 2, Smoke::mf_static, 54, 187},	//418 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {17, 813, 521, 2, Smoke::mf_static, 20, 188},	//419 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {17, 921, 524, 2, Smoke::mf_static, 339, 189},	//420 QGlobalSpace::qFuzzyCompare(float, float)
    {17, 788, 527, 2, Smoke::mf_static, 20, 190},	//421 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {17, 894, 209, 2, Smoke::mf_static, 438, 191},	//422 QGlobalSpace::qChecksum(const char*, unsigned int)
    {17, 813, 530, 2, Smoke::mf_static, 20, 192},	//423 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {17, 771, 533, 2, Smoke::mf_static, 396, 193},	//424 QGlobalSpace::operator*(const QSize&, double)
    {17, 929, 536, 1, Smoke::mf_static, 442, 194},	//425 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {17, 779, 323, 2, Smoke::mf_static, 388, 195},	//426 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {17, 788, 538, 2, Smoke::mf_static, 225, 196},	//427 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {17, 821, 541, 2, Smoke::mf_static, 51, 197},	//428 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {17, 813, 544, 2, Smoke::mf_static, 20, 198},	//429 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {17, 821, 547, 2, Smoke::mf_static, 33, 199},	//430 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {17, 903, 0, 0, Smoke::mf_static, 24, 200},	//431 QGlobalSpace::qCritical()
    {17, 782, 550, 2, Smoke::mf_static, 388, 201},	//432 QGlobalSpace::operator/(const QPoint&, double)
    {17, 951, 269, 2, Smoke::mf_static, 422, 202},	//433 QGlobalSpace::qPow(double, double)
    {17, 788, 553, 2, Smoke::mf_static, 20, 203},	//434 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {17, 788, 556, 2, Smoke::mf_static, 20, 204},	//435 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {17, 763, 510, 2, Smoke::mf_static, 339, 205},	//436 QGlobalSpace::operator!=(QString::Null, const QString&)
    {17, 788, 559, 2, Smoke::mf_static, 20, 206},	//437 QGlobalSpace::operator<<(QDataStream&, const QNetworkCacheMetaData&)
    {17, 925, 44, 1, Smoke::mf_static, 435, 207},	//438 QGlobalSpace::qHash(int)
    {17, 821, 562, 2, Smoke::mf_static, 55, 208},	//439 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {17, 1034, 0, 0, Smoke::mf_static, 0, 209},	//440 QGlobalSpace::qt_noop()
    {17, 799, 200, 2, Smoke::mf_static, 339, 210},	//441 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {17, 821, 565, 2, Smoke::mf_static, 104, 211},	//442 QGlobalSpace::operator|(Qt::WindowState, int)
    {17, 763, 238, 2, Smoke::mf_static, 339, 212},	//443 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {17, 813, 568, 2, Smoke::mf_static, 20, 213},	//444 QGlobalSpace::operator>>(QDataStream&, QString&)
    {17, 1035, 571, 3, Smoke::mf_static, 178, 214},	//445 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {17, 788, 575, 2, Smoke::mf_static, 20, 215},	//446 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {17, 799, 496, 2, Smoke::mf_static, 339, 216},	//447 QGlobalSpace::operator==(QBool, QBool)
    {17, 813, 578, 2, Smoke::mf_static, 20, 217},	//448 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {17, 905, 127, 1, Smoke::mf_static, 422, 218},	//449 QGlobalSpace::qExp(double)
    {17, 813, 581, 2, Smoke::mf_static, 20, 219},	//450 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {17, 821, 584, 2, Smoke::mf_static, 58, 220},	//451 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {17, 799, 587, 2, Smoke::mf_static, 339, 221},	//452 QGlobalSpace::operator==(bool, QBool)
    {17, 821, 590, 2, Smoke::mf_static, 48, 222},	//453 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {17, 813, 593, 2, Smoke::mf_static, 20, 223},	//454 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {17, 923, 127, 1, Smoke::mf_static, 339, 224},	//455 QGlobalSpace::qFuzzyIsNull(double)
    {17, 1042, 596, 3, Smoke::mf_static, 339, 225},	//456 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {17, 799, 600, 2, Smoke::mf_static, 339, 226},	//457 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {17, 987, 603, 3, Smoke::mf_static, 0, 227},	//458 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {17, 925, 252, 1, Smoke::mf_static, 435, 228},	//459 QGlobalSpace::qHash(QChar)
    {17, 821, 607, 2, Smoke::mf_static, 104, 229},	//460 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {17, 788, 610, 2, Smoke::mf_static, 20, 230},	//461 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {17, 763, 600, 2, Smoke::mf_static, 339, 231},	//462 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {17, 763, 587, 2, Smoke::mf_static, 339, 232},	//463 QGlobalSpace::operator!=(bool, QBool)
    {17, 1028, 613, 2, Smoke::mf_static, 0, 233},	//464 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {17, 821, 616, 2, Smoke::mf_static, 36, 234},	//465 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {17, 994, 148, 1, Smoke::mf_static, 0, 235},	//466 QGlobalSpace::qsrand(unsigned int)
    {17, 799, 619, 2, Smoke::mf_static, 339, 236},	//467 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {17, 821, 622, 2, Smoke::mf_static, 50, 237},	//468 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {17, 821, 625, 2, Smoke::mf_static, 44, 238},	//469 QGlobalSpace::operator|(QNetworkProxy::Capability, QNetworkProxy::Capability)
    {17, 821, 628, 2, Smoke::mf_static, 42, 239},	//470 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>)
    {17, 788, 631, 2, Smoke::mf_static, 24, 240},	//471 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {17, 813, 634, 2, Smoke::mf_static, 20, 241},	//472 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {17, 821, 637, 2, Smoke::mf_static, 104, 242},	//473 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {17, 763, 423, 2, Smoke::mf_static, 339, 243},	//474 QGlobalSpace::operator!=(const QString&, QString::Null)
    {17, 1005, 3, 2, Smoke::mf_static, 424, 244},	//475 QGlobalSpace::qstricmp(const char*, const char*)
    {17, 821, 640, 2, Smoke::mf_static, 66, 245},	//476 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {17, 788, 643, 2, Smoke::mf_static, 24, 246},	//477 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {17, 949, 646, 3, Smoke::mf_static, 443, 247},	//478 QGlobalSpace::qMemSet(void*, int, size_t)
    {17, 763, 173, 2, Smoke::mf_static, 339, 248},	//479 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {17, 892, 127, 1, Smoke::mf_static, 424, 249},	//480 QGlobalSpace::qCeil(double)
    {17, 925, 650, 1, Smoke::mf_static, 435, 250},	//481 QGlobalSpace::qHash(signed char)
    {17, 821, 652, 2, Smoke::mf_static, 66, 251},	//482 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {17, 799, 227, 2, Smoke::mf_static, 339, 252},	//483 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {17, 821, 655, 2, Smoke::mf_static, 65, 253},	//484 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {17, 799, 499, 2, Smoke::mf_static, 339, 254},	//485 QGlobalSpace::operator==(const char*, const QStringRef&)
    {17, 813, 658, 2, Smoke::mf_static, 20, 255},	//486 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {17, 788, 661, 2, Smoke::mf_static, 24, 256},	//487 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {17, 821, 664, 2, Smoke::mf_static, 104, 257},	//488 QGlobalSpace::operator|(QFile::Permission, int)
    {17, 774, 323, 2, Smoke::mf_static, 388, 258},	//489 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {17, 774, 158, 2, Smoke::mf_static, 345, 259},	//490 QGlobalSpace::operator+(const QByteArray&, const char*)
    {17, 882, 513, 1, Smoke::mf_static, 0, 260},	//491 QGlobalSpace::qAddPostRoutine(void(*)())
    {17, 958, 667, 1, Smoke::mf_static, 0, 261},	//492 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {17, 771, 669, 2, Smoke::mf_static, 390, 262},	//493 QGlobalSpace::operator*(double, const QPointF&)
    {17, 771, 672, 2, Smoke::mf_static, 388, 263},	//494 QGlobalSpace::operator*(int, const QPoint&)
    {17, 973, 0, 0, Smoke::mf_static, 339, 264},	//495 QGlobalSpace::qSharedBuild()
    {17, 788, 675, 2, Smoke::mf_static, 20, 265},	//496 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {17, 813, 678, 2, Smoke::mf_static, 20, 266},	//497 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {17, 788, 681, 2, Smoke::mf_static, 20, 267},	//498 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {17, 928, 0, 0, Smoke::mf_static, 422, 268},	//499 QGlobalSpace::qInf()
    {17, 1013, 182, 3, Smoke::mf_static, 424, 269},	//500 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {17, 821, 684, 2, Smoke::mf_static, 49, 270},	//501 QGlobalSpace::operator|(QUdpSocket::BindFlag, QUdpSocket::BindFlag)
    {17, 925, 687, 1, Smoke::mf_static, 435, 271},	//502 QGlobalSpace::qHash(const QStringRef&)
    {17, 813, 689, 2, Smoke::mf_static, 20, 272},	//503 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {17, 821, 692, 2, Smoke::mf_static, 104, 273},	//504 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {17, 805, 350, 2, Smoke::mf_static, 339, 274},	//505 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {17, 788, 695, 2, Smoke::mf_static, 20, 275},	//506 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {17, 799, 249, 2, Smoke::mf_static, 339, 276},	//507 QGlobalSpace::operator==(QChar, QChar)
    {17, 901, 127, 1, Smoke::mf_static, 422, 277},	//508 QGlobalSpace::qCos(double)
    {17, 945, 698, 2, Smoke::mf_static, 443, 278},	//509 QGlobalSpace::qMallocAligned(size_t, size_t)
    {17, 788, 701, 2, Smoke::mf_static, 20, 279},	//510 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {17, 1022, 704, 4, Smoke::mf_static, 0, 280},	//511 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {17, 821, 709, 2, Smoke::mf_static, 50, 281},	//512 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {17, 821, 712, 2, Smoke::mf_static, 36, 282},	//513 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {17, 774, 715, 2, Smoke::mf_static, 345, 283},	//514 QGlobalSpace::operator+(const QByteArray&, char)
    {17, 821, 718, 2, Smoke::mf_static, 104, 284},	//515 QGlobalSpace::operator|(QNetworkProxy::Capability, int)
    {17, 821, 721, 2, Smoke::mf_static, 39, 285},	//516 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {17, 985, 0, 0, Smoke::mf_static, 418, 286},	//517 QGlobalSpace::qVersion()
    {17, 821, 724, 2, Smoke::mf_static, 51, 287},	//518 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {17, 774, 197, 2, Smoke::mf_static, 390, 288},	//519 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {17, 788, 727, 2, Smoke::mf_static, 20, 289},	//520 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {17, 821, 730, 2, Smoke::mf_static, 38, 290},	//521 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {17, 788, 733, 2, Smoke::mf_static, 20, 291},	//522 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {17, 821, 736, 2, Smoke::mf_static, 104, 292},	//523 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {17, 799, 450, 2, Smoke::mf_static, 339, 293},	//524 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {17, 978, 739, 2, Smoke::mf_static, 339, 294},	//525 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {17, 821, 742, 2, Smoke::mf_static, 34, 295},	//526 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {17, 788, 745, 2, Smoke::mf_static, 24, 296},	//527 QGlobalSpace::operator<<(QDebug, const QNetworkCookie&)
    {17, 788, 748, 2, Smoke::mf_static, 20, 297},	//528 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {17, 774, 751, 2, Smoke::mf_static, 345, 298},	//529 QGlobalSpace::operator+(char, const QByteArray&)
    {17, 821, 754, 2, Smoke::mf_static, 104, 299},	//530 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {17, 784, 350, 2, Smoke::mf_static, 339, 300},	//531 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {17, 896, 757, 3, Smoke::mf_static, 14, 301},	//532 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {17, 896, 353, 2, Smoke::mf_static, 14, 302},	//533 QGlobalSpace::qCompress(const unsigned char*, int)
    {17, 915, 127, 1, Smoke::mf_static, 424, 303},	//534 QGlobalSpace::qFloor(double)
    {17, 821, 761, 2, Smoke::mf_static, 61, 304},	//535 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {17, 925, 69, 1, Smoke::mf_static, 435, 305},	//536 QGlobalSpace::qHash(const QString&)
    {17, 774, 88, 2, Smoke::mf_static, 406, 306},	//537 QGlobalSpace::operator+(const QString&, const QString&)
    {17, 763, 764, 2, Smoke::mf_static, 339, 307},	//538 QGlobalSpace::operator!=(QBool, bool)
    {17, 799, 350, 2, Smoke::mf_static, 339, 308},	//539 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {17, 788, 767, 2, Smoke::mf_static, 20, 309},	//540 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {17, 937, 244, 1, Smoke::mf_static, 339, 310},	//541 QGlobalSpace::qIsNaN(float)
    {17, 788, 770, 2, Smoke::mf_static, 20, 311},	//542 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {17, 821, 773, 2, Smoke::mf_static, 104, 312},	//543 QGlobalSpace::operator|(QDir::SortFlag, int)
    {17, 947, 776, 3, Smoke::mf_static, 443, 313},	//544 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {17, 917, 780, 1, Smoke::mf_static, 0, 314},	//545 QGlobalSpace::qFree(void*)
    {17, 799, 739, 2, Smoke::mf_static, 339, 315},	//546 QGlobalSpace::operator==(const QStringRef&, const char*)
    {17, 937, 127, 1, Smoke::mf_static, 339, 316},	//547 QGlobalSpace::qIsNaN(double)
    {17, 821, 782, 2, Smoke::mf_static, 63, 317},	//548 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {17, 771, 550, 2, Smoke::mf_static, 388, 318},	//549 QGlobalSpace::operator*(const QPoint&, double)
    {17, 788, 785, 2, Smoke::mf_static, 24, 319},	//550 QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketState)
    {17, 788, 788, 2, Smoke::mf_static, 24, 320},	//551 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {17, 971, 44, 1, Smoke::mf_static, 228, 321},	//552 QGlobalSpace::qSetRealNumberPrecision(int)
    {17, 993, 0, 0, Smoke::mf_static, 424, 322},	//553 QGlobalSpace::qrand()
    {17, 813, 791, 2, Smoke::mf_static, 20, 323},	//554 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {17, 925, 14, 1, Smoke::mf_static, 435, 324},	//555 QGlobalSpace::qHash(const QUrl&)
    {17, 821, 794, 2, Smoke::mf_static, 64, 325},	//556 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {17, 774, 350, 2, Smoke::mf_static, 345, 326},	//557 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {17, 771, 797, 2, Smoke::mf_static, 388, 327},	//558 QGlobalSpace::operator*(float, const QPoint&)
    {17, 771, 800, 2, Smoke::mf_static, 388, 328},	//559 QGlobalSpace::operator*(double, const QPoint&)
    {17, 788, 803, 2, Smoke::mf_static, 24, 329},	//560 QGlobalSpace::operator<<(QDebug, const QNetworkInterface&)
    {17, 763, 739, 2, Smoke::mf_static, 339, 330},	//561 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {17, 974, 127, 1, Smoke::mf_static, 422, 331},	//562 QGlobalSpace::qSin(double)
    {17, 788, 806, 2, Smoke::mf_static, 24, 332},	//563 QGlobalSpace::operator<<(QDebug, const QObject*)
    {17, 788, 809, 2, Smoke::mf_static, 24, 333},	//564 QGlobalSpace::operator<<(QDebug, const QSslCipher&)
    {17, 799, 323, 2, Smoke::mf_static, 339, 334},	//565 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {17, 821, 812, 2, Smoke::mf_static, 37, 335},	//566 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {17, 1020, 6, 3, Smoke::mf_static, 0, 336},	//567 QGlobalSpace::qt_assert(const char*, const char*, int)
    {17, 813, 815, 2, Smoke::mf_static, 20, 337},	//568 QGlobalSpace::operator>>(QDataStream&, QNetworkCacheMetaData&)
    {17, 821, 818, 2, Smoke::mf_static, 45, 338},	//569 QGlobalSpace::operator|(QSsl::SslOption, QSsl::SslOption)
    {17, 788, 821, 2, Smoke::mf_static, 24, 339},	//570 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {17, 1007, 1, 1, Smoke::mf_static, 435, 340},	//571 QGlobalSpace::qstrlen(const char*)
    {17, 821, 824, 2, Smoke::mf_static, 48, 341},	//572 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {17, 821, 827, 2, Smoke::mf_static, 34, 342},	//573 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {17, 935, 127, 1, Smoke::mf_static, 339, 343},	//574 QGlobalSpace::qIsInf(double)
    {17, 779, 173, 2, Smoke::mf_static, 396, 344},	//575 QGlobalSpace::operator-(const QSize&, const QSize&)
    {17, 821, 830, 2, Smoke::mf_static, 44, 345},	//576 QGlobalSpace::operator|(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>)
    {17, 821, 833, 2, Smoke::mf_static, 104, 346},	//577 QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, int)
    {17, 782, 533, 2, Smoke::mf_static, 396, 347},	//578 QGlobalSpace::operator/(const QSize&, double)
    {17, 809, 300, 2, Smoke::mf_static, 339, 348},	//579 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {17, 821, 836, 2, Smoke::mf_static, 104, 349},	//580 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {17, 821, 839, 2, Smoke::mf_static, 104, 350},	//581 QGlobalSpace::operator|(QDir::Filter, int)
    {17, 763, 300, 2, Smoke::mf_static, 339, 351},	//582 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {17, 980, 127, 1, Smoke::mf_static, 422, 352},	//583 QGlobalSpace::qTan(double)
    {17, 964, 127, 1, Smoke::mf_static, 426, 353},	//584 QGlobalSpace::qRound64(double)
    {17, 925, 842, 1, Smoke::mf_static, 435, 354},	//585 QGlobalSpace::qHash(unsigned long)
    {17, 821, 844, 2, Smoke::mf_static, 32, 355},	//586 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {17, 966, 0, 0, Smoke::mf_static, 422, 356},	//587 QGlobalSpace::qSNaN()
    {17, 784, 249, 2, Smoke::mf_static, 339, 357},	//588 QGlobalSpace::operator<(QChar, QChar)
    {17, 821, 847, 2, Smoke::mf_static, 60, 358},	//589 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {17, 821, 850, 2, Smoke::mf_static, 53, 359},	//590 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {17, 779, 450, 2, Smoke::mf_static, 398, 360},	//591 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {17, 943, 853, 1, Smoke::mf_static, 443, 361},	//592 QGlobalSpace::qMalloc(size_t)
    {17, 939, 127, 1, Smoke::mf_static, 339, 362},	//593 QGlobalSpace::qIsNull(double)
    {17, 991, 300, 2, Smoke::mf_static, 339, 363},	//594 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {17, 821, 855, 2, Smoke::mf_static, 104, 364},	//595 QGlobalSpace::operator|(Qt::Orientation, int)
    {17, 821, 858, 2, Smoke::mf_static, 104, 365},	//596 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {17, 813, 861, 2, Smoke::mf_static, 20, 366},	//597 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {17, 813, 864, 2, Smoke::mf_static, 20, 367},	//598 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {17, 923, 244, 1, Smoke::mf_static, 339, 368},	//599 QGlobalSpace::qFuzzyIsNull(float)
    {17, 788, 867, 2, Smoke::mf_static, 20, 369},	//600 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {17, 788, 870, 2, Smoke::mf_static, 24, 370},	//601 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {17, 925, 873, 1, Smoke::mf_static, 435, 371},	//602 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {17, 821, 875, 2, Smoke::mf_static, 42, 372},	//603 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability)
    {17, 788, 878, 2, Smoke::mf_static, 24, 373},	//604 QGlobalSpace::operator<<(QDebug, const QTime&)
    {17, 821, 881, 2, Smoke::mf_static, 104, 374},	//605 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {17, 821, 884, 2, Smoke::mf_static, 64, 375},	//606 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {17, 805, 158, 2, Smoke::mf_static, 339, 376},	//607 QGlobalSpace::operator>(const QByteArray&, const char*)
    {17, 821, 887, 2, Smoke::mf_static, 45, 377},	//608 QGlobalSpace::operator|(QSsl::SslOption, QFlags<QSsl::SslOption>)
    {17, 763, 619, 2, Smoke::mf_static, 339, 378},	//609 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {17, 821, 890, 2, Smoke::mf_static, 55, 379},	//610 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {17, 967, 44, 1, Smoke::mf_static, 228, 380},	//611 QGlobalSpace::qSetFieldWidth(int)
    {17, 821, 893, 2, Smoke::mf_static, 65, 381},	//612 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {17, 821, 896, 2, Smoke::mf_static, 52, 382},	//613 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {17, 821, 899, 2, Smoke::mf_static, 104, 383},	//614 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {17, 771, 902, 2, Smoke::mf_static, 398, 384},	//615 QGlobalSpace::operator*(double, const QSizeF&)
    {17, 809, 186, 2, Smoke::mf_static, 339, 385},	//616 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {17, 788, 905, 2, Smoke::mf_static, 24, 386},	//617 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {17, 925, 362, 1, Smoke::mf_static, 435, 387},	//618 QGlobalSpace::qHash(const QByteArray&)
    {17, 799, 218, 2, Smoke::mf_static, 339, 388},	//619 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {17, 925, 908, 1, Smoke::mf_static, 435, 389},	//620 QGlobalSpace::qHash(const QModelIndex&)
    {17, 771, 910, 2, Smoke::mf_static, 388, 390},	//621 QGlobalSpace::operator*(const QPoint&, int)
    {17, 799, 344, 2, Smoke::mf_static, 339, 391},	//622 QGlobalSpace::operator==(const QRect&, const QRect&)
    {17, 821, 913, 2, Smoke::mf_static, 104, 392},	//623 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {17, 821, 916, 2, Smoke::mf_static, 59, 393},	//624 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {17, 821, 919, 2, Smoke::mf_static, 56, 394},	//625 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {17, 919, 780, 1, Smoke::mf_static, 0, 395},	//626 QGlobalSpace::qFreeAligned(void*)
    {17, 821, 922, 2, Smoke::mf_static, 61, 396},	//627 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {17, 788, 925, 2, Smoke::mf_static, 24, 397},	//628 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {17, 799, 158, 2, Smoke::mf_static, 339, 398},	//629 QGlobalSpace::operator==(const QByteArray&, const char*)
    {17, 821, 928, 2, Smoke::mf_static, 104, 399},	//630 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {17, 821, 931, 2, Smoke::mf_static, 104, 400},	//631 QGlobalSpace::operator|(Qt::MouseButton, int)
    {17, 941, 127, 1, Smoke::mf_static, 422, 401},	//632 QGlobalSpace::qLn(double)
    {17, 799, 764, 2, Smoke::mf_static, 339, 402},	//633 QGlobalSpace::operator==(QBool, bool)
    {17, 763, 158, 2, Smoke::mf_static, 339, 403},	//634 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {17, 819, 320, 2, Smoke::mf_static, 11, 404},	//635 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {17, 885, 127, 1, Smoke::mf_static, 422, 405},	//636 QGlobalSpace::qAsin(double)
    {17, 813, 934, 2, Smoke::mf_static, 20, 406},	//637 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {17, 891, 0, 0, Smoke::mf_static, 0, 407},	//638 QGlobalSpace::qBadAlloc()
    {17, 821, 937, 2, Smoke::mf_static, 104, 408},	//639 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {17, 821, 940, 2, Smoke::mf_static, 104, 409},	//640 QGlobalSpace::operator|(QString::SectionFlag, int)
    {17, 821, 943, 2, Smoke::mf_static, 104, 410},	//641 QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, int)
    {17, 788, 946, 2, Smoke::mf_static, 20, 411},	//642 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {17, 933, 244, 1, Smoke::mf_static, 339, 412},	//643 QGlobalSpace::qIsFinite(float)
    {17, 774, 450, 2, Smoke::mf_static, 398, 413},	//644 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {17, 821, 949, 2, Smoke::mf_static, 33, 414},	//645 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {17, 821, 952, 2, Smoke::mf_static, 46, 415},	//646 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {17, 330, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 416},	//647 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {17, 333, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 417},	//648 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {17, 334, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 418},	//649 QGlobalSpace::Q_STATIC_TYPE (enum)
    {17, 332, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 419},	//650 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {17, 331, 0, 0, Smoke::mf_static|Smoke::mf_enum, 425, 420},	//651 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {17, 132, 0, 0, Smoke::mf_static|Smoke::mf_enum, 324, 421},	//652 QGlobalSpace::LicensedGui (enum)
    {17, 145, 0, 0, Smoke::mf_static|Smoke::mf_enum, 337, 422},	//653 QGlobalSpace::LicensedXml (enum)
    {17, 139, 0, 0, Smoke::mf_static|Smoke::mf_enum, 330, 423},	//654 QGlobalSpace::LicensedQt3SupportLight (enum)
    {17, 140, 0, 0, Smoke::mf_static|Smoke::mf_enum, 332, 424},	//655 QGlobalSpace::LicensedScript (enum)
    {17, 137, 0, 0, Smoke::mf_static|Smoke::mf_enum, 329, 425},	//656 QGlobalSpace::LicensedOpenVG (enum)
    {17, 130, 0, 0, Smoke::mf_static|Smoke::mf_enum, 322, 426},	//657 QGlobalSpace::LicensedDBus (enum)
    {17, 144, 0, 0, Smoke::mf_static|Smoke::mf_enum, 336, 427},	//658 QGlobalSpace::LicensedTest (enum)
    {17, 128, 0, 0, Smoke::mf_static|Smoke::mf_enum, 320, 428},	//659 QGlobalSpace::LicensedActiveQt (enum)
    {17, 141, 0, 0, Smoke::mf_static|Smoke::mf_enum, 333, 429},	//660 QGlobalSpace::LicensedScriptTools (enum)
    {17, 143, 0, 0, Smoke::mf_static|Smoke::mf_enum, 335, 430},	//661 QGlobalSpace::LicensedSvg (enum)
    {17, 131, 0, 0, Smoke::mf_static|Smoke::mf_enum, 323, 431},	//662 QGlobalSpace::LicensedDeclarative (enum)
    {17, 142, 0, 0, Smoke::mf_static|Smoke::mf_enum, 334, 432},	//663 QGlobalSpace::LicensedSql (enum)
    {17, 136, 0, 0, Smoke::mf_static|Smoke::mf_enum, 328, 433},	//664 QGlobalSpace::LicensedOpenGL (enum)
    {17, 129, 0, 0, Smoke::mf_static|Smoke::mf_enum, 321, 434},	//665 QGlobalSpace::LicensedCore (enum)
    {17, 336, 0, 0, Smoke::mf_static|Smoke::mf_enum, 319, 435},	//666 QGlobalSpace::QtDebugMsg (enum)
    {17, 339, 0, 0, Smoke::mf_static|Smoke::mf_enum, 319, 436},	//667 QGlobalSpace::QtWarningMsg (enum)
    {17, 335, 0, 0, Smoke::mf_static|Smoke::mf_enum, 319, 437},	//668 QGlobalSpace::QtCriticalMsg (enum)
    {17, 337, 0, 0, Smoke::mf_static|Smoke::mf_enum, 319, 438},	//669 QGlobalSpace::QtFatalMsg (enum)
    {17, 338, 0, 0, Smoke::mf_static|Smoke::mf_enum, 319, 439},	//670 QGlobalSpace::QtSystemMsg (enum)
    {17, 133, 0, 0, Smoke::mf_static|Smoke::mf_enum, 325, 440},	//671 QGlobalSpace::LicensedHelp (enum)
    {17, 134, 0, 0, Smoke::mf_static|Smoke::mf_enum, 326, 441},	//672 QGlobalSpace::LicensedMultimedia (enum)
    {17, 138, 0, 0, Smoke::mf_static|Smoke::mf_enum, 331, 442},	//673 QGlobalSpace::LicensedQt3Support (enum)
    {17, 146, 0, 0, Smoke::mf_static|Smoke::mf_enum, 338, 443},	//674 QGlobalSpace::LicensedXmlPatterns (enum)
    {17, 135, 0, 0, Smoke::mf_static|Smoke::mf_enum, 327, 444},	//675 QGlobalSpace::LicensedNetwork (enum)
    {19, 213, 0, 0, Smoke::mf_ctor, 77, 1},	//676 QHostAddress::QHostAddress()
    {19, 213, 148, 1, Smoke::mf_ctor, 77, 2},	//677 QHostAddress::QHostAddress(unsigned int)
    {19, 213, 955, 1, Smoke::mf_ctor, 77, 3},	//678 QHostAddress::QHostAddress(unsigned char*)
    {19, 213, 957, 1, Smoke::mf_ctor, 77, 4},	//679 QHostAddress::QHostAddress(const QIPv6Address&)
    {19, 213, 959, 1, Smoke::mf_ctor, 77, 5},	//680 QHostAddress::QHostAddress(const sockaddr*)
    {19, 213, 69, 1, Smoke::mf_ctor, 77, 6},	//681 QHostAddress::QHostAddress(const QString&)
    {19, 213, 67, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 77, 7},	//682 QHostAddress::QHostAddress(const QHostAddress&)
    {19, 213, 961, 1, Smoke::mf_ctor, 77, 8},	//683 QHostAddress::QHostAddress(QHostAddress::SpecialAddress)
    {19, 796, 67, 1, 0, 76, 9},	//684 QHostAddress::operator=(const QHostAddress&)
    {19, 796, 69, 1, 0, 76, 10},	//685 QHostAddress::operator=(const QString&)
    {19, 1110, 148, 1, 0, 0, 11},	//686 QHostAddress::setAddress(unsigned int)
    {19, 1110, 955, 1, 0, 0, 12},	//687 QHostAddress::setAddress(unsigned char*)
    {19, 1110, 957, 1, 0, 0, 13},	//688 QHostAddress::setAddress(const QIPv6Address&)
    {19, 1110, 959, 1, 0, 0, 14},	//689 QHostAddress::setAddress(const sockaddr*)
    {19, 1110, 69, 1, 0, 339, 15},	//690 QHostAddress::setAddress(const QString&)
    {19, 865, 0, 0, Smoke::mf_const, 4, 16},	//691 QHostAddress::protocol() const
    {19, 1371, 0, 0, Smoke::mf_const, 435, 17},	//692 QHostAddress::toIPv4Address() const
    {19, 1372, 0, 0, Smoke::mf_const, 102, 18},	//693 QHostAddress::toIPv6Address() const
    {19, 1377, 0, 0, Smoke::mf_const, 215, 19},	//694 QHostAddress::toString() const
    {19, 1097, 0, 0, Smoke::mf_const, 215, 20},	//695 QHostAddress::scopeId() const
    {19, 1286, 69, 1, 0, 0, 21},	//696 QHostAddress::setScopeId(const QString&)
    {19, 799, 67, 1, Smoke::mf_const, 339, 22},	//697 QHostAddress::operator==(const QHostAddress&) const
    {19, 799, 961, 1, Smoke::mf_const, 339, 23},	//698 QHostAddress::operator==(QHostAddress::SpecialAddress) const
    {19, 763, 67, 1, Smoke::mf_const, 339, 24},	//699 QHostAddress::operator!=(const QHostAddress&) const
    {19, 763, 961, 1, Smoke::mf_const, 339, 25},	//700 QHostAddress::operator!=(QHostAddress::SpecialAddress) const
    {19, 682, 0, 0, Smoke::mf_const, 339, 26},	//701 QHostAddress::isNull() const
    {19, 511, 0, 0, 0, 0, 27},	//702 QHostAddress::clear()
    {19, 678, 963, 2, Smoke::mf_const, 339, 28},	//703 QHostAddress::isInSubnet(const QHostAddress&, int) const
    {19, 678, 966, 1, Smoke::mf_const, 339, 29},	//704 QHostAddress::isInSubnet(const QPair<QHostAddress,int>&) const
    {19, 835, 69, 1, Smoke::mf_static, 180, 30},	//705 QHostAddress::parseSubnet(const QString&)
    {19, 177, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 31},	//706 QHostAddress::Null (enum)
    {19, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 32},	//707 QHostAddress::Broadcast (enum)
    {19, 150, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 33},	//708 QHostAddress::LocalHost (enum)
    {19, 151, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 34},	//709 QHostAddress::LocalHostIPv6 (enum)
    {19, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 35},	//710 QHostAddress::Any (enum)
    {19, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 36},	//711 QHostAddress::AnyIPv6 (enum)
    {19, 1424, 0, 0, Smoke::mf_dtor, 0, 37 },	//712 QHostAddress::~QHostAddress()
    {20, 216, 44, 1, Smoke::mf_ctor, 81, 1},	//713 QHostInfo::QHostInfo(int)
    {20, 216, 968, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 81, 2},	//714 QHostInfo::QHostInfo(const QHostInfo&)
    {20, 796, 968, 1, 0, 80, 3},	//715 QHostInfo::operator=(const QHostInfo&)
    {20, 653, 0, 0, Smoke::mf_const, 215, 4},	//716 QHostInfo::hostName() const
    {20, 1183, 69, 1, 0, 0, 5},	//717 QHostInfo::setHostName(const QString&)
    {20, 463, 0, 0, Smoke::mf_const, 110, 6},	//718 QHostInfo::addresses() const
    {20, 1113, 970, 1, 0, 0, 7},	//719 QHostInfo::setAddresses(const QList<QHostAddress>&)
    {20, 600, 0, 0, Smoke::mf_const, 82, 8},	//720 QHostInfo::error() const
    {20, 1164, 972, 1, 0, 0, 9},	//721 QHostInfo::setError(QHostInfo::HostInfoError)
    {20, 602, 0, 0, Smoke::mf_const, 215, 10},	//722 QHostInfo::errorString() const
    {20, 1167, 69, 1, 0, 0, 11},	//723 QHostInfo::setErrorString(const QString&)
    {20, 1201, 44, 1, 0, 0, 12},	//724 QHostInfo::setLookupId(int)
    {20, 730, 0, 0, Smoke::mf_const, 424, 13},	//725 QHostInfo::lookupId() const
    {20, 728, 974, 3, Smoke::mf_static, 424, 14},	//726 QHostInfo::lookupHost(const QString&, QObject*, const char*)
    {20, 439, 44, 1, Smoke::mf_static, 0, 15},	//727 QHostInfo::abortHostLookup(int)
    {20, 620, 69, 1, Smoke::mf_static, 79, 16},	//728 QHostInfo::fromName(const QString&)
    {20, 723, 0, 0, Smoke::mf_static, 215, 17},	//729 QHostInfo::localHostName()
    {20, 722, 0, 0, Smoke::mf_static, 215, 18},	//730 QHostInfo::localDomainName()
    {20, 216, 0, 0, Smoke::mf_ctor, 81, 19},	//731 QHostInfo::QHostInfo()
    {20, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 82, 20},	//732 QHostInfo::NoError (enum)
    {20, 104, 0, 0, Smoke::mf_static|Smoke::mf_enum, 82, 21},	//733 QHostInfo::HostNotFound (enum)
    {20, 415, 0, 0, Smoke::mf_static|Smoke::mf_enum, 82, 22},	//734 QHostInfo::UnknownError (enum)
    {20, 1425, 0, 0, Smoke::mf_dtor, 0, 23 },	//735 QHostInfo::~QHostInfo()
    {21, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//736 QHttp::metaObject() const
    {21, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//737 QHttp::qt_metacast(const char*)
    {21, 1378, 3, 2, Smoke::mf_static, 215, 3},	//738 QHttp::tr(const char*, const char*)
    {21, 1382, 3, 2, Smoke::mf_static, 215, 4},	//739 QHttp::trUtf8(const char*, const char*)
    {21, 1378, 6, 3, Smoke::mf_static, 215, 5},	//740 QHttp::tr(const char*, const char*, int)
    {21, 1382, 6, 3, Smoke::mf_static, 215, 6},	//741 QHttp::trUtf8(const char*, const char*, int)
    {21, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//742 QHttp::qt_metacall(QMetaObject::Call, int, void**)
    {21, 219, 20, 1, Smoke::mf_ctor, 83, 8},	//743 QHttp::QHttp(QObject*)
    {21, 219, 978, 3, Smoke::mf_ctor, 83, 9},	//744 QHttp::QHttp(const QString&, unsigned short, QObject*)
    {21, 219, 982, 4, Smoke::mf_ctor, 83, 10},	//745 QHttp::QHttp(const QString&, QHttp::ConnectionMode, unsigned short, QObject*)
    {21, 1179, 71, 2, 0, 424, 11},	//746 QHttp::setHost(const QString&, unsigned short)
    {21, 1179, 987, 3, 0, 424, 12},	//747 QHttp::setHost(const QString&, QHttp::ConnectionMode, unsigned short)
    {21, 1294, 991, 1, 0, 424, 13},	//748 QHttp::setSocket(QTcpSocket*)
    {21, 1328, 88, 2, 0, 424, 14},	//749 QHttp::setUser(const QString&, const QString&)
    {21, 1262, 993, 4, 0, 424, 15},	//750 QHttp::setProxy(const QString&, int, const QString&, const QString&)
    {21, 1262, 46, 1, 0, 424, 16},	//751 QHttp::setProxy(const QNetworkProxy&)
    {21, 627, 118, 2, 0, 424, 17},	//752 QHttp::get(const QString&, QIODevice*)
    {21, 854, 998, 3, 0, 424, 18},	//753 QHttp::post(const QString&, QIODevice*, QIODevice*)
    {21, 854, 1002, 3, 0, 424, 19},	//754 QHttp::post(const QString&, const QByteArray&, QIODevice*)
    {21, 647, 69, 1, 0, 424, 20},	//755 QHttp::head(const QString&)
    {21, 1083, 1006, 3, 0, 424, 21},	//756 QHttp::request(const QHttpRequestHeader&, QIODevice*, QIODevice*)
    {21, 1083, 1010, 3, 0, 424, 22},	//757 QHttp::request(const QHttpRequestHeader&, const QByteArray&, QIODevice*)
    {21, 515, 0, 0, 0, 424, 23},	//758 QHttp::closeConnection()
    {21, 514, 0, 0, 0, 424, 24},	//759 QHttp::close()
    {21, 495, 0, 0, Smoke::mf_const, 426, 25},	//760 QHttp::bytesAvailable() const
    {21, 1055, 59, 2, 0, 426, 26},	//761 QHttp::read(char*, long long)
    {21, 1057, 0, 0, 0, 14, 27},	//762 QHttp::readAll()
    {21, 560, 0, 0, Smoke::mf_const, 424, 28},	//763 QHttp::currentId() const
    {21, 562, 0, 0, Smoke::mf_const, 99, 29},	//764 QHttp::currentSourceDevice() const
    {21, 558, 0, 0, Smoke::mf_const, 99, 30},	//765 QHttp::currentDestinationDevice() const
    {21, 561, 0, 0, Smoke::mf_const, 93, 31},	//766 QHttp::currentRequest() const
    {21, 705, 0, 0, Smoke::mf_const, 96, 32},	//767 QHttp::lastResponse() const
    {21, 644, 0, 0, Smoke::mf_const, 339, 33},	//768 QHttp::hasPendingRequests() const
    {21, 513, 0, 0, 0, 0, 34},	//769 QHttp::clearPendingRequests()
    {21, 1351, 0, 0, Smoke::mf_const, 86, 35},	//770 QHttp::state() const
    {21, 600, 0, 0, Smoke::mf_const, 85, 36},	//771 QHttp::error() const
    {21, 602, 0, 0, Smoke::mf_const, 215, 37},	//772 QHttp::errorString() const
    {21, 438, 0, 0, Smoke::mf_slot, 0, 38},	//773 QHttp::abort()
    {21, 657, 0, 0, Smoke::mf_slot, 0, 39},	//774 QHttp::ignoreSslErrors()
    {21, 1352, 44, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 40},	//775 QHttp::stateChanged(int)
    {21, 1092, 1014, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 41},	//776 QHttp::responseHeaderReceived(const QHttpResponseHeader&)
    {21, 1067, 1014, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 42},	//777 QHttp::readyRead(const QHttpResponseHeader&)
    {21, 568, 1016, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 43},	//778 QHttp::dataSendProgress(int, int)
    {21, 566, 1016, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 44},	//779 QHttp::dataReadProgress(int, int)
    {21, 1089, 44, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 45},	//780 QHttp::requestStarted(int)
    {21, 1087, 113, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 46},	//781 QHttp::requestFinished(int, bool)
    {21, 587, 116, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 47},	//782 QHttp::done(bool)
    {21, 869, 52, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 48},	//783 QHttp::proxyAuthenticationRequired(const QNetworkProxy&, QAuthenticator*)
    {21, 482, 1019, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 49},	//784 QHttp::authenticationRequired(const QString&, quint16, QAuthenticator*)
    {21, 1346, 1023, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 50},	//785 QHttp::sslErrors(const QList<QSslError>&)
    {21, 1378, 1, 1, Smoke::mf_static, 215, 51},	//786 QHttp::tr(const char*)
    {21, 1382, 1, 1, Smoke::mf_static, 215, 52},	//787 QHttp::trUtf8(const char*)
    {21, 219, 0, 0, Smoke::mf_ctor, 83, 53},	//788 QHttp::QHttp()
    {21, 219, 69, 1, Smoke::mf_ctor, 83, 54},	//789 QHttp::QHttp(const QString&)
    {21, 219, 71, 2, Smoke::mf_ctor, 83, 55},	//790 QHttp::QHttp(const QString&, unsigned short)
    {21, 219, 1025, 2, Smoke::mf_ctor, 83, 56},	//791 QHttp::QHttp(const QString&, QHttp::ConnectionMode)
    {21, 219, 987, 3, Smoke::mf_ctor, 83, 57},	//792 QHttp::QHttp(const QString&, QHttp::ConnectionMode, unsigned short)
    {21, 1179, 69, 1, 0, 424, 58},	//793 QHttp::setHost(const QString&)
    {21, 1179, 1025, 2, 0, 424, 59},	//794 QHttp::setHost(const QString&, QHttp::ConnectionMode)
    {21, 1328, 69, 1, 0, 424, 60},	//795 QHttp::setUser(const QString&)
    {21, 1262, 1028, 2, 0, 424, 61},	//796 QHttp::setProxy(const QString&, int)
    {21, 1262, 1031, 3, 0, 424, 62},	//797 QHttp::setProxy(const QString&, int, const QString&)
    {21, 627, 69, 1, 0, 424, 63},	//798 QHttp::get(const QString&)
    {21, 854, 118, 2, 0, 424, 64},	//799 QHttp::post(const QString&, QIODevice*)
    {21, 854, 1035, 2, 0, 424, 65},	//800 QHttp::post(const QString&, const QByteArray&)
    {21, 1083, 1038, 1, 0, 424, 66},	//801 QHttp::request(const QHttpRequestHeader&)
    {21, 1083, 1040, 2, 0, 424, 67},	//802 QHttp::request(const QHttpRequestHeader&, QIODevice*)
    {21, 1083, 1043, 2, 0, 424, 68},	//803 QHttp::request(const QHttpRequestHeader&, const QByteArray&)
    {21, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 69},	//804 QHttp::staticMetaObject() const
    {21, 56, 0, 0, Smoke::mf_static|Smoke::mf_enum, 84, 70},	//805 QHttp::ConnectionModeHttp (enum)
    {21, 57, 0, 0, Smoke::mf_static|Smoke::mf_enum, 84, 71},	//806 QHttp::ConnectionModeHttps (enum)
    {21, 407, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 72},	//807 QHttp::Unconnected (enum)
    {21, 100, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 73},	//808 QHttp::HostLookup (enum)
    {21, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 74},	//809 QHttp::Connecting (enum)
    {21, 361, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 75},	//810 QHttp::Sending (enum)
    {21, 347, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 76},	//811 QHttp::Reading (enum)
    {21, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 77},	//812 QHttp::Connected (enum)
    {21, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 86, 78},	//813 QHttp::Closing (enum)
    {21, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 79},	//814 QHttp::NoError (enum)
    {21, 415, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 80},	//815 QHttp::UnknownError (enum)
    {21, 104, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 81},	//816 QHttp::HostNotFound (enum)
    {21, 58, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 82},	//817 QHttp::ConnectionRefused (enum)
    {21, 411, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 83},	//818 QHttp::UnexpectedClose (enum)
    {21, 121, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 84},	//819 QHttp::InvalidResponseHeader (enum)
    {21, 437, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 85},	//820 QHttp::WrongContentLength (enum)
    {21, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 86},	//821 QHttp::Aborted (enum)
    {21, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 87},	//822 QHttp::AuthenticationRequiredError (enum)
    {21, 194, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 88},	//823 QHttp::ProxyAuthenticationRequiredError (enum)
    {21, 1426, 0, 0, Smoke::mf_dtor, 0, 89 },	//824 QHttp::~QHttp()
    {22, 226, 0, 0, Smoke::mf_ctor, 88, 1},	//825 QHttpHeader::QHttpHeader()
    {22, 226, 1046, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 88, 2},	//826 QHttpHeader::QHttpHeader(const QHttpHeader&)
    {22, 226, 69, 1, Smoke::mf_ctor, 88, 3},	//827 QHttpHeader::QHttpHeader(const QString&)
    {22, 796, 1046, 1, 0, 87, 4},	//828 QHttpHeader::operator=(const QHttpHeader&)
    {22, 1333, 88, 2, 0, 0, 5},	//829 QHttpHeader::setValue(const QString&, const QString&)
    {22, 1336, 1048, 1, 0, 0, 6},	//830 QHttpHeader::setValues(const QList<QPair<QString,QString> >&)
    {22, 460, 88, 2, 0, 0, 7},	//831 QHttpHeader::addValue(const QString&, const QString&)
    {22, 1398, 0, 0, Smoke::mf_const, 117, 8},	//832 QHttpHeader::values() const
    {22, 639, 69, 1, Smoke::mf_const, 339, 9},	//833 QHttpHeader::hasKey(const QString&) const
    {22, 702, 0, 0, Smoke::mf_const, 219, 10},	//834 QHttpHeader::keys() const
    {22, 1396, 69, 1, Smoke::mf_const, 215, 11},	//835 QHttpHeader::value(const QString&) const
    {22, 470, 69, 1, Smoke::mf_const, 219, 12},	//836 QHttpHeader::allValues(const QString&) const
    {22, 1079, 69, 1, 0, 0, 13},	//837 QHttpHeader::removeValue(const QString&)
    {22, 1075, 69, 1, 0, 0, 14},	//838 QHttpHeader::removeAllValues(const QString&)
    {22, 637, 0, 0, Smoke::mf_const, 339, 15},	//839 QHttpHeader::hasContentLength() const
    {22, 549, 0, 0, Smoke::mf_const, 435, 16},	//840 QHttpHeader::contentLength() const
    {22, 1146, 44, 1, 0, 0, 17},	//841 QHttpHeader::setContentLength(int)
    {22, 638, 0, 0, Smoke::mf_const, 339, 18},	//842 QHttpHeader::hasContentType() const
    {22, 550, 0, 0, Smoke::mf_const, 215, 19},	//843 QHttpHeader::contentType() const
    {22, 1148, 69, 1, 0, 0, 20},	//844 QHttpHeader::setContentType(const QString&)
    {22, 1377, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 215, 21},	//845 QHttpHeader::toString() const
    {22, 693, 0, 0, Smoke::mf_const, 339, 22},	//846 QHttpHeader::isValid() const
    {22, 731, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 424, 23},	//847 QHttpHeader::majorVersion() const [pure virtual]
    {22, 741, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 424, 24},	//848 QHttpHeader::minorVersion() const [pure virtual]
    {22, 833, 1028, 2, Smoke::mf_protected|Smoke::mf_virtual, 339, 25},	//849 QHttpHeader::parseLine(const QString&, int)
    {22, 829, 69, 1, Smoke::mf_protected, 339, 26},	//850 QHttpHeader::parse(const QString&)
    {22, 1331, 116, 1, Smoke::mf_protected, 0, 27},	//851 QHttpHeader::setValid(bool)
    {22, 1427, 0, 0, Smoke::mf_dtor, 0, 28 },	//852 QHttpHeader::~QHttpHeader()
    {23, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//853 QHttpMultiPart::metaObject() const
    {23, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//854 QHttpMultiPart::qt_metacast(const char*)
    {23, 1378, 3, 2, Smoke::mf_static, 215, 3},	//855 QHttpMultiPart::tr(const char*, const char*)
    {23, 1382, 3, 2, Smoke::mf_static, 215, 4},	//856 QHttpMultiPart::trUtf8(const char*, const char*)
    {23, 1378, 6, 3, Smoke::mf_static, 215, 5},	//857 QHttpMultiPart::tr(const char*, const char*, int)
    {23, 1382, 6, 3, Smoke::mf_static, 215, 6},	//858 QHttpMultiPart::trUtf8(const char*, const char*, int)
    {23, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//859 QHttpMultiPart::qt_metacall(QMetaObject::Call, int, void**)
    {23, 229, 20, 1, Smoke::mf_ctor, 89, 8},	//860 QHttpMultiPart::QHttpMultiPart(QObject*)
    {23, 229, 1050, 2, Smoke::mf_ctor, 89, 9},	//861 QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType, QObject*)
    {23, 473, 1053, 1, 0, 0, 10},	//862 QHttpMultiPart::append(const QHttpPart&)
    {23, 1148, 1055, 1, 0, 0, 11},	//863 QHttpMultiPart::setContentType(QHttpMultiPart::ContentType)
    {23, 493, 0, 0, Smoke::mf_const, 14, 12},	//864 QHttpMultiPart::boundary() const
    {23, 1129, 362, 1, 0, 0, 13},	//865 QHttpMultiPart::setBoundary(const QByteArray&)
    {23, 1378, 1, 1, Smoke::mf_static, 215, 14},	//866 QHttpMultiPart::tr(const char*)
    {23, 1382, 1, 1, Smoke::mf_static, 215, 15},	//867 QHttpMultiPart::trUtf8(const char*)
    {23, 229, 0, 0, Smoke::mf_ctor, 89, 16},	//868 QHttpMultiPart::QHttpMultiPart()
    {23, 229, 1055, 1, Smoke::mf_ctor, 89, 17},	//869 QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType)
    {23, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 18},	//870 QHttpMultiPart::staticMetaObject() const
    {23, 160, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 19},	//871 QHttpMultiPart::MixedType (enum)
    {23, 349, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 20},	//872 QHttpMultiPart::RelatedType (enum)
    {23, 93, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 21},	//873 QHttpMultiPart::FormDataType (enum)
    {23, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 22},	//874 QHttpMultiPart::AlternativeType (enum)
    {23, 1428, 0, 0, Smoke::mf_dtor, 0, 23 },	//875 QHttpMultiPart::~QHttpMultiPart()
    {24, 233, 0, 0, Smoke::mf_ctor, 92, 1},	//876 QHttpPart::QHttpPart()
    {24, 233, 1053, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 92, 2},	//877 QHttpPart::QHttpPart(const QHttpPart&)
    {24, 796, 1053, 1, 0, 91, 3},	//878 QHttpPart::operator=(const QHttpPart&)
    {24, 799, 1053, 1, Smoke::mf_const, 339, 4},	//879 QHttpPart::operator==(const QHttpPart&) const
    {24, 763, 1053, 1, Smoke::mf_const, 339, 5},	//880 QHttpPart::operator!=(const QHttpPart&) const
    {24, 1177, 1057, 2, 0, 0, 6},	//881 QHttpPart::setHeader(QNetworkRequest::KnownHeaders, const QVariant&)
    {24, 1271, 350, 2, 0, 0, 7},	//882 QHttpPart::setRawHeader(const QByteArray&, const QByteArray&)
    {24, 1125, 362, 1, 0, 0, 8},	//883 QHttpPart::setBody(const QByteArray&)
    {24, 1127, 18, 1, 0, 0, 9},	//884 QHttpPart::setBodyDevice(QIODevice*)
    {24, 1429, 0, 0, Smoke::mf_dtor, 0, 10 },	//885 QHttpPart::~QHttpPart()
    {25, 235, 0, 0, Smoke::mf_ctor, 95, 1},	//886 QHttpRequestHeader::QHttpRequestHeader()
    {25, 235, 1060, 4, Smoke::mf_ctor, 95, 2},	//887 QHttpRequestHeader::QHttpRequestHeader(const QString&, const QString&, int, int)
    {25, 235, 1038, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 95, 3},	//888 QHttpRequestHeader::QHttpRequestHeader(const QHttpRequestHeader&)
    {25, 235, 69, 1, Smoke::mf_ctor, 95, 4},	//889 QHttpRequestHeader::QHttpRequestHeader(const QString&)
    {25, 796, 1038, 1, 0, 94, 5},	//890 QHttpRequestHeader::operator=(const QHttpRequestHeader&)
    {25, 1279, 1060, 4, 0, 0, 6},	//891 QHttpRequestHeader::setRequest(const QString&, const QString&, int, int)
    {25, 739, 0, 0, Smoke::mf_const, 215, 7},	//892 QHttpRequestHeader::method() const
    {25, 838, 0, 0, Smoke::mf_const, 215, 8},	//893 QHttpRequestHeader::path() const
    {25, 731, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 424, 9},	//894 QHttpRequestHeader::majorVersion() const
    {25, 741, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 424, 10},	//895 QHttpRequestHeader::minorVersion() const
    {25, 1377, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 215, 11},	//896 QHttpRequestHeader::toString() const
    {25, 833, 1028, 2, Smoke::mf_protected|Smoke::mf_virtual, 339, 12},	//897 QHttpRequestHeader::parseLine(const QString&, int)
    {25, 235, 88, 2, Smoke::mf_ctor, 95, 13},	//898 QHttpRequestHeader::QHttpRequestHeader(const QString&, const QString&)
    {25, 235, 1065, 3, Smoke::mf_ctor, 95, 14},	//899 QHttpRequestHeader::QHttpRequestHeader(const QString&, const QString&, int)
    {25, 1279, 88, 2, 0, 0, 15},	//900 QHttpRequestHeader::setRequest(const QString&, const QString&)
    {25, 1279, 1065, 3, 0, 0, 16},	//901 QHttpRequestHeader::setRequest(const QString&, const QString&, int)
    {25, 1430, 0, 0, Smoke::mf_dtor, 0, 17 },	//902 QHttpRequestHeader::~QHttpRequestHeader()
    {26, 241, 0, 0, Smoke::mf_ctor, 98, 1},	//903 QHttpResponseHeader::QHttpResponseHeader()
    {26, 241, 1014, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 98, 2},	//904 QHttpResponseHeader::QHttpResponseHeader(const QHttpResponseHeader&)
    {26, 241, 69, 1, Smoke::mf_ctor, 98, 3},	//905 QHttpResponseHeader::QHttpResponseHeader(const QString&)
    {26, 241, 1069, 4, Smoke::mf_ctor, 98, 4},	//906 QHttpResponseHeader::QHttpResponseHeader(int, const QString&, int, int)
    {26, 796, 1014, 1, 0, 97, 5},	//907 QHttpResponseHeader::operator=(const QHttpResponseHeader&)
    {26, 1313, 1069, 4, 0, 0, 6},	//908 QHttpResponseHeader::setStatusLine(int, const QString&, int, int)
    {26, 1355, 0, 0, Smoke::mf_const, 424, 7},	//909 QHttpResponseHeader::statusCode() const
    {26, 1070, 0, 0, Smoke::mf_const, 215, 8},	//910 QHttpResponseHeader::reasonPhrase() const
    {26, 731, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 424, 9},	//911 QHttpResponseHeader::majorVersion() const
    {26, 741, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 424, 10},	//912 QHttpResponseHeader::minorVersion() const
    {26, 1377, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 215, 11},	//913 QHttpResponseHeader::toString() const
    {26, 833, 1028, 2, Smoke::mf_protected|Smoke::mf_virtual, 339, 12},	//914 QHttpResponseHeader::parseLine(const QString&, int)
    {26, 241, 44, 1, Smoke::mf_ctor, 98, 13},	//915 QHttpResponseHeader::QHttpResponseHeader(int)
    {26, 241, 110, 2, Smoke::mf_ctor, 98, 14},	//916 QHttpResponseHeader::QHttpResponseHeader(int, const QString&)
    {26, 241, 1074, 3, Smoke::mf_ctor, 98, 15},	//917 QHttpResponseHeader::QHttpResponseHeader(int, const QString&, int)
    {26, 1313, 44, 1, 0, 0, 16},	//918 QHttpResponseHeader::setStatusLine(int)
    {26, 1313, 110, 2, 0, 0, 17},	//919 QHttpResponseHeader::setStatusLine(int, const QString&)
    {26, 1313, 1074, 3, 0, 0, 18},	//920 QHttpResponseHeader::setStatusLine(int, const QString&, int)
    {26, 1431, 0, 0, Smoke::mf_dtor, 0, 19 },	//921 QHttpResponseHeader::~QHttpResponseHeader()
    {27, 760, 1078, 1, Smoke::mf_virtual, 339, 0},	//922 QIODevice::open(QFlags<QIODevice::OpenModeFlag>)
    {27, 853, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 0},	//923 QIODevice::pos() const
    {27, 1340, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 0},	//924 QIODevice::size() const
    {27, 1098, 33, 1, Smoke::mf_virtual, 339, 0},	//925 QIODevice::seek(long long)
    {27, 476, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 0},	//926 QIODevice::atEnd() const
    {27, 1091, 0, 0, Smoke::mf_virtual, 339, 0},	//927 QIODevice::reset()
    {27, 495, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 0},	//928 QIODevice::bytesAvailable() const
    {27, 497, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 0},	//929 QIODevice::bytesToWrite() const
    {27, 503, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 0},	//930 QIODevice::canReadLine() const
    {27, 1413, 44, 1, Smoke::mf_virtual, 339, 0},	//931 QIODevice::waitForReadyRead(int)
    {27, 1400, 44, 1, Smoke::mf_virtual, 339, 0},	//932 QIODevice::waitForBytesWritten(int)
    {27, 1059, 59, 2, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 426, 0},	//933 QIODevice::readData(char*, long long) [pure virtual]
    {27, 1065, 59, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 0},	//934 QIODevice::readLineData(char*, long long)
    {27, 176, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 14},	//935 QIODevice::NotOpen (enum)
    {27, 343, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 15},	//936 QIODevice::ReadOnly (enum)
    {27, 434, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 16},	//937 QIODevice::WriteOnly (enum)
    {27, 346, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 17},	//938 QIODevice::ReadWrite (enum)
    {27, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 18},	//939 QIODevice::Append (enum)
    {27, 397, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 19},	//940 QIODevice::Truncate (enum)
    {27, 393, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 20},	//941 QIODevice::Text (enum)
    {27, 406, 0, 0, Smoke::mf_static|Smoke::mf_enum, 101, 21},	//942 QIODevice::Unbuffered (enum)
    {28, 817, 44, 1, 0, 433, 1},	//943 QIPv6Address::operator[](int)
    {28, 817, 44, 1, Smoke::mf_const, 432, 2},	//944 QIPv6Address::operator[](int) const
    {28, 247, 0, 0, Smoke::mf_ctor, 103, 3},	//945 QIPv6Address::QIPv6Address()
    {28, 247, 957, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 103, 4},	//946 QIPv6Address::QIPv6Address(const QIPv6Address&)
    {28, 1432, 0, 0, Smoke::mf_dtor, 0, 5 },	//947 QIPv6Address::~QIPv6Address()
    {33, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//948 QLocalServer::metaObject() const
    {33, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//949 QLocalServer::qt_metacast(const char*)
    {33, 1378, 3, 2, Smoke::mf_static, 215, 3},	//950 QLocalServer::tr(const char*, const char*)
    {33, 1382, 3, 2, Smoke::mf_static, 215, 4},	//951 QLocalServer::trUtf8(const char*, const char*)
    {33, 1378, 6, 3, Smoke::mf_static, 215, 5},	//952 QLocalServer::tr(const char*, const char*, int)
    {33, 1382, 6, 3, Smoke::mf_static, 215, 6},	//953 QLocalServer::trUtf8(const char*, const char*, int)
    {33, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//954 QLocalServer::qt_metacall(QMetaObject::Call, int, void**)
    {33, 756, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 8},	//955 QLocalServer::newConnection()
    {33, 249, 20, 1, Smoke::mf_ctor, 122, 9},	//956 QLocalServer::QLocalServer(QObject*)
    {33, 514, 0, 0, 0, 0, 10},	//957 QLocalServer::close()
    {33, 602, 0, 0, Smoke::mf_const, 215, 11},	//958 QLocalServer::errorString() const
    {33, 642, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 12},	//959 QLocalServer::hasPendingConnections() const
    {33, 681, 0, 0, Smoke::mf_const, 339, 13},	//960 QLocalServer::isListening() const
    {33, 716, 69, 1, 0, 339, 14},	//961 QLocalServer::listen(const QString&)
    {33, 733, 0, 0, Smoke::mf_const, 424, 15},	//962 QLocalServer::maxPendingConnections() const
    {33, 757, 0, 0, Smoke::mf_virtual, 123, 16},	//963 QLocalServer::nextPendingConnection()
    {33, 1105, 0, 0, Smoke::mf_const, 215, 17},	//964 QLocalServer::serverName() const
    {33, 626, 0, 0, Smoke::mf_const, 215, 18},	//965 QLocalServer::fullServerName() const
    {33, 1077, 69, 1, Smoke::mf_static, 339, 19},	//966 QLocalServer::removeServer(const QString&)
    {33, 1104, 0, 0, Smoke::mf_const, 5, 20},	//967 QLocalServer::serverError() const
    {33, 1203, 44, 1, 0, 0, 21},	//968 QLocalServer::setMaxPendingConnections(int)
    {33, 1408, 1080, 2, 0, 339, 22},	//969 QLocalServer::waitForNewConnection(int, bool*)
    {33, 659, 1083, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 23},	//970 QLocalServer::incomingConnection(QIntegerForSizeof< void* >::Unsigned)
    {33, 1378, 1, 1, Smoke::mf_static, 215, 24},	//971 QLocalServer::tr(const char*)
    {33, 1382, 1, 1, Smoke::mf_static, 215, 25},	//972 QLocalServer::trUtf8(const char*)
    {33, 249, 0, 0, Smoke::mf_ctor, 122, 26},	//973 QLocalServer::QLocalServer()
    {33, 1408, 0, 0, 0, 339, 27},	//974 QLocalServer::waitForNewConnection()
    {33, 1408, 44, 1, 0, 339, 28},	//975 QLocalServer::waitForNewConnection(int)
    {33, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 29},	//976 QLocalServer::staticMetaObject() const
    {33, 1433, 0, 0, Smoke::mf_dtor, 0, 30 },	//977 QLocalServer::~QLocalServer()
    {34, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//978 QLocalSocket::metaObject() const
    {34, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//979 QLocalSocket::qt_metacast(const char*)
    {34, 1378, 3, 2, Smoke::mf_static, 215, 3},	//980 QLocalSocket::tr(const char*, const char*)
    {34, 1382, 3, 2, Smoke::mf_static, 215, 4},	//981 QLocalSocket::trUtf8(const char*, const char*)
    {34, 1378, 6, 3, Smoke::mf_static, 215, 5},	//982 QLocalSocket::tr(const char*, const char*, int)
    {34, 1382, 6, 3, Smoke::mf_static, 215, 6},	//983 QLocalSocket::trUtf8(const char*, const char*, int)
    {34, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//984 QLocalSocket::qt_metacall(QMetaObject::Call, int, void**)
    {34, 251, 20, 1, Smoke::mf_ctor, 123, 8},	//985 QLocalSocket::QLocalSocket(QObject*)
    {34, 545, 1085, 2, 0, 0, 9},	//986 QLocalSocket::connectToServer(const QString&, QFlags<QIODevice::OpenModeFlag>)
    {34, 582, 0, 0, 0, 0, 10},	//987 QLocalSocket::disconnectFromServer()
    {34, 1105, 0, 0, Smoke::mf_const, 215, 11},	//988 QLocalSocket::serverName() const
    {34, 626, 0, 0, Smoke::mf_const, 215, 12},	//989 QLocalSocket::fullServerName() const
    {34, 438, 0, 0, 0, 0, 13},	//990 QLocalSocket::abort()
    {34, 689, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 14},	//991 QLocalSocket::isSequential() const
    {34, 495, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 15},	//992 QLocalSocket::bytesAvailable() const
    {34, 497, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 16},	//993 QLocalSocket::bytesToWrite() const
    {34, 503, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 17},	//994 QLocalSocket::canReadLine() const
    {34, 514, 0, 0, Smoke::mf_virtual, 0, 18},	//995 QLocalSocket::close()
    {34, 600, 0, 0, Smoke::mf_const, 124, 19},	//996 QLocalSocket::error() const
    {34, 613, 0, 0, 0, 339, 20},	//997 QLocalSocket::flush()
    {34, 693, 0, 0, Smoke::mf_const, 339, 21},	//998 QLocalSocket::isValid() const
    {34, 1058, 0, 0, Smoke::mf_const, 426, 22},	//999 QLocalSocket::readBufferSize() const
    {34, 1275, 33, 1, 0, 0, 23},	//1000 QLocalSocket::setReadBufferSize(long long)
    {34, 1296, 1088, 3, 0, 339, 24},	//1001 QLocalSocket::setSocketDescriptor(QIntegerForSizeof< void* >::Unsigned, QLocalSocket::LocalSocketState, QFlags<QIODevice::OpenModeFlag>)
    {34, 1341, 0, 0, Smoke::mf_const, 105, 25},	//1002 QLocalSocket::socketDescriptor() const
    {34, 1351, 0, 0, Smoke::mf_const, 125, 26},	//1003 QLocalSocket::state() const
    {34, 1400, 44, 1, Smoke::mf_virtual, 339, 27},	//1004 QLocalSocket::waitForBytesWritten(int)
    {34, 1402, 44, 1, 0, 339, 28},	//1005 QLocalSocket::waitForConnected(int)
    {34, 1404, 44, 1, 0, 339, 29},	//1006 QLocalSocket::waitForDisconnected(int)
    {34, 1413, 44, 1, Smoke::mf_virtual, 339, 30},	//1007 QLocalSocket::waitForReadyRead(int)
    {34, 548, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 31},	//1008 QLocalSocket::connected()
    {34, 585, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 32},	//1009 QLocalSocket::disconnected()
    {34, 600, 1092, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 33},	//1010 QLocalSocket::error(QLocalSocket::LocalSocketError)
    {34, 1352, 1094, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 34},	//1011 QLocalSocket::stateChanged(QLocalSocket::LocalSocketState)
    {34, 1059, 59, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 35},	//1012 QLocalSocket::readData(char*, long long)
    {34, 1415, 62, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 36},	//1013 QLocalSocket::writeData(const char*, long long)
    {34, 1378, 1, 1, Smoke::mf_static, 215, 37},	//1014 QLocalSocket::tr(const char*)
    {34, 1382, 1, 1, Smoke::mf_static, 215, 38},	//1015 QLocalSocket::trUtf8(const char*)
    {34, 251, 0, 0, Smoke::mf_ctor, 123, 39},	//1016 QLocalSocket::QLocalSocket()
    {34, 545, 69, 1, 0, 0, 40},	//1017 QLocalSocket::connectToServer(const QString&)
    {34, 1296, 1083, 1, 0, 339, 41},	//1018 QLocalSocket::setSocketDescriptor(QIntegerForSizeof< void* >::Unsigned)
    {34, 1296, 1096, 2, 0, 339, 42},	//1019 QLocalSocket::setSocketDescriptor(QIntegerForSizeof< void* >::Unsigned, QLocalSocket::LocalSocketState)
    {34, 1400, 0, 0, 0, 339, 43},	//1020 QLocalSocket::waitForBytesWritten()
    {34, 1402, 0, 0, 0, 339, 44},	//1021 QLocalSocket::waitForConnected()
    {34, 1404, 0, 0, 0, 339, 45},	//1022 QLocalSocket::waitForDisconnected()
    {34, 1413, 0, 0, 0, 339, 46},	//1023 QLocalSocket::waitForReadyRead()
    {34, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 47},	//1024 QLocalSocket::staticMetaObject() const
    {34, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 48},	//1025 QLocalSocket::ConnectionRefusedError (enum)
    {34, 184, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 49},	//1026 QLocalSocket::PeerClosedError (enum)
    {34, 362, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 50},	//1027 QLocalSocket::ServerNotFoundError (enum)
    {34, 370, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 51},	//1028 QLocalSocket::SocketAccessError (enum)
    {34, 372, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 52},	//1029 QLocalSocket::SocketResourceError (enum)
    {34, 373, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 53},	//1030 QLocalSocket::SocketTimeoutError (enum)
    {34, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 54},	//1031 QLocalSocket::DatagramTooLargeError (enum)
    {34, 55, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 55},	//1032 QLocalSocket::ConnectionError (enum)
    {34, 426, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 56},	//1033 QLocalSocket::UnsupportedSocketOperationError (enum)
    {34, 423, 0, 0, Smoke::mf_static|Smoke::mf_enum, 124, 57},	//1034 QLocalSocket::UnknownSocketError (enum)
    {34, 408, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 58},	//1035 QLocalSocket::UnconnectedState (enum)
    {34, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 59},	//1036 QLocalSocket::ConnectingState (enum)
    {34, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 60},	//1037 QLocalSocket::ConnectedState (enum)
    {34, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 125, 61},	//1038 QLocalSocket::ClosingState (enum)
    {34, 1434, 0, 0, Smoke::mf_dtor, 0, 62 },	//1039 QLocalSocket::~QLocalSocket()
    {39, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1040 QNetworkAccessManager::metaObject() const
    {39, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1041 QNetworkAccessManager::qt_metacast(const char*)
    {39, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1042 QNetworkAccessManager::tr(const char*, const char*)
    {39, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1043 QNetworkAccessManager::trUtf8(const char*, const char*)
    {39, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1044 QNetworkAccessManager::tr(const char*, const char*, int)
    {39, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1045 QNetworkAccessManager::trUtf8(const char*, const char*, int)
    {39, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1046 QNetworkAccessManager::qt_metacall(QMetaObject::Call, int, void**)
    {39, 253, 20, 1, Smoke::mf_ctor, 130, 8},	//1047 QNetworkAccessManager::QNetworkAccessManager(QObject*)
    {39, 868, 0, 0, Smoke::mf_const, 156, 9},	//1048 QNetworkAccessManager::proxy() const
    {39, 1262, 46, 1, 0, 0, 10},	//1049 QNetworkAccessManager::setProxy(const QNetworkProxy&)
    {39, 871, 0, 0, Smoke::mf_const, 161, 11},	//1050 QNetworkAccessManager::proxyFactory() const
    {39, 1267, 1099, 1, 0, 0, 12},	//1051 QNetworkAccessManager::setProxyFactory(QNetworkProxyFactory*)
    {39, 500, 0, 0, Smoke::mf_const, 2, 13},	//1052 QNetworkAccessManager::cache() const
    {39, 1135, 1101, 1, 0, 0, 14},	//1053 QNetworkAccessManager::setCache(QAbstractNetworkCache*)
    {39, 551, 0, 0, Smoke::mf_const, 150, 15},	//1054 QNetworkAccessManager::cookieJar() const
    {39, 1150, 1103, 1, 0, 0, 16},	//1055 QNetworkAccessManager::setCookieJar(QNetworkCookieJar*)
    {39, 647, 1105, 1, 0, 165, 17},	//1056 QNetworkAccessManager::head(const QNetworkRequest&)
    {39, 627, 1105, 1, 0, 165, 18},	//1057 QNetworkAccessManager::get(const QNetworkRequest&)
    {39, 854, 1107, 2, 0, 165, 19},	//1058 QNetworkAccessManager::post(const QNetworkRequest&, QIODevice*)
    {39, 854, 1110, 2, 0, 165, 20},	//1059 QNetworkAccessManager::post(const QNetworkRequest&, const QByteArray&)
    {39, 854, 1113, 2, 0, 165, 21},	//1060 QNetworkAccessManager::post(const QNetworkRequest&, QHttpMultiPart*)
    {39, 876, 1107, 2, 0, 165, 22},	//1061 QNetworkAccessManager::put(const QNetworkRequest&, QIODevice*)
    {39, 876, 1110, 2, 0, 165, 23},	//1062 QNetworkAccessManager::put(const QNetworkRequest&, const QByteArray&)
    {39, 876, 1113, 2, 0, 165, 24},	//1063 QNetworkAccessManager::put(const QNetworkRequest&, QHttpMultiPart*)
    {39, 575, 1105, 1, 0, 165, 25},	//1064 QNetworkAccessManager::deleteResource(const QNetworkRequest&)
    {39, 1099, 1116, 3, 0, 165, 26},	//1065 QNetworkAccessManager::sendCustomRequest(const QNetworkRequest&, const QByteArray&, QIODevice*)
    {39, 1144, 1120, 1, 0, 0, 27},	//1066 QNetworkAccessManager::setConfiguration(const QNetworkConfiguration&)
    {39, 521, 0, 0, Smoke::mf_const, 138, 28},	//1067 QNetworkAccessManager::configuration() const
    {39, 442, 0, 0, Smoke::mf_const, 138, 29},	//1068 QNetworkAccessManager::activeConfiguration() const
    {39, 1214, 1122, 1, Smoke::mf_property, 0, 30},	//1069 QNetworkAccessManager::setNetworkAccessible(QNetworkAccessManager::NetworkAccessibility)
    {39, 750, 0, 0, Smoke::mf_const|Smoke::mf_property, 131, 31},	//1070 QNetworkAccessManager::networkAccessible() const
    {39, 869, 52, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 32},	//1071 QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy&, QAuthenticator*)
    {39, 482, 1124, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 33},	//1072 QNetworkAccessManager::authenticationRequired(QNetworkReply*, QAuthenticator*)
    {39, 610, 1127, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 34},	//1073 QNetworkAccessManager::finished(QNetworkReply*)
    {39, 1346, 1129, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 35},	//1074 QNetworkAccessManager::sslErrors(QNetworkReply*, const QList<QSslError>&)
    {39, 754, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 36},	//1075 QNetworkAccessManager::networkSessionConnected()
    {39, 751, 1122, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 37},	//1076 QNetworkAccessManager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility)
    {39, 554, 1132, 3, Smoke::mf_protected|Smoke::mf_virtual, 165, 38},	//1077 QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation, const QNetworkRequest&, QIODevice*)
    {39, 1378, 1, 1, Smoke::mf_static, 215, 39},	//1078 QNetworkAccessManager::tr(const char*)
    {39, 1382, 1, 1, Smoke::mf_static, 215, 40},	//1079 QNetworkAccessManager::trUtf8(const char*)
    {39, 253, 0, 0, Smoke::mf_ctor, 130, 41},	//1080 QNetworkAccessManager::QNetworkAccessManager()
    {39, 1099, 1110, 2, 0, 165, 42},	//1081 QNetworkAccessManager::sendCustomRequest(const QNetworkRequest&, const QByteArray&)
    {39, 554, 1136, 2, Smoke::mf_protected, 165, 43},	//1082 QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation, const QNetworkRequest&)
    {39, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 44},	//1083 QNetworkAccessManager::staticMetaObject() const
    {39, 98, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 45},	//1084 QNetworkAccessManager::HeadOperation (enum)
    {39, 97, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 46},	//1085 QNetworkAccessManager::GetOperation (enum)
    {39, 204, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 47},	//1086 QNetworkAccessManager::PutOperation (enum)
    {39, 186, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 48},	//1087 QNetworkAccessManager::PostOperation (enum)
    {39, 78, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 49},	//1088 QNetworkAccessManager::DeleteOperation (enum)
    {39, 71, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 50},	//1089 QNetworkAccessManager::CustomOperation (enum)
    {39, 418, 0, 0, Smoke::mf_static|Smoke::mf_enum, 132, 51},	//1090 QNetworkAccessManager::UnknownOperation (enum)
    {39, 413, 0, 0, Smoke::mf_static|Smoke::mf_enum, 131, 52},	//1091 QNetworkAccessManager::UnknownAccessibility (enum)
    {39, 173, 0, 0, Smoke::mf_static|Smoke::mf_enum, 131, 53},	//1092 QNetworkAccessManager::NotAccessible (enum)
    {39, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 131, 54},	//1093 QNetworkAccessManager::Accessible (enum)
    {39, 1435, 0, 0, Smoke::mf_dtor, 0, 55 },	//1094 QNetworkAccessManager::~QNetworkAccessManager()
    {40, 255, 0, 0, Smoke::mf_ctor, 134, 1},	//1095 QNetworkAddressEntry::QNetworkAddressEntry()
    {40, 255, 1139, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 134, 2},	//1096 QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry&)
    {40, 796, 1139, 1, 0, 133, 3},	//1097 QNetworkAddressEntry::operator=(const QNetworkAddressEntry&)
    {40, 799, 1139, 1, Smoke::mf_const, 339, 4},	//1098 QNetworkAddressEntry::operator==(const QNetworkAddressEntry&) const
    {40, 763, 1139, 1, Smoke::mf_const, 339, 5},	//1099 QNetworkAddressEntry::operator!=(const QNetworkAddressEntry&) const
    {40, 670, 0, 0, Smoke::mf_const, 75, 6},	//1100 QNetworkAddressEntry::ip() const
    {40, 1187, 67, 1, 0, 0, 7},	//1101 QNetworkAddressEntry::setIp(const QHostAddress&)
    {40, 749, 0, 0, Smoke::mf_const, 75, 8},	//1102 QNetworkAddressEntry::netmask() const
    {40, 1212, 67, 1, 0, 0, 9},	//1103 QNetworkAddressEntry::setNetmask(const QHostAddress&)
    {40, 860, 0, 0, Smoke::mf_const, 424, 10},	//1104 QNetworkAddressEntry::prefixLength() const
    {40, 1248, 44, 1, 0, 0, 11},	//1105 QNetworkAddressEntry::setPrefixLength(int)
    {40, 494, 0, 0, Smoke::mf_const, 75, 12},	//1106 QNetworkAddressEntry::broadcast() const
    {40, 1131, 67, 1, 0, 0, 13},	//1107 QNetworkAddressEntry::setBroadcast(const QHostAddress&)
    {40, 1436, 0, 0, Smoke::mf_dtor, 0, 14 },	//1108 QNetworkAddressEntry::~QNetworkAddressEntry()
    {41, 257, 0, 0, Smoke::mf_ctor, 137, 1},	//1109 QNetworkCacheMetaData::QNetworkCacheMetaData()
    {41, 257, 16, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 137, 2},	//1110 QNetworkCacheMetaData::QNetworkCacheMetaData(const QNetworkCacheMetaData&)
    {41, 796, 16, 1, 0, 136, 3},	//1111 QNetworkCacheMetaData::operator=(const QNetworkCacheMetaData&)
    {41, 799, 16, 1, Smoke::mf_const, 339, 4},	//1112 QNetworkCacheMetaData::operator==(const QNetworkCacheMetaData&) const
    {41, 763, 16, 1, Smoke::mf_const, 339, 5},	//1113 QNetworkCacheMetaData::operator!=(const QNetworkCacheMetaData&) const
    {41, 693, 0, 0, Smoke::mf_const, 339, 6},	//1114 QNetworkCacheMetaData::isValid() const
    {41, 1393, 0, 0, Smoke::mf_const, 233, 7},	//1115 QNetworkCacheMetaData::url() const
    {41, 1324, 14, 1, 0, 0, 8},	//1116 QNetworkCacheMetaData::setUrl(const QUrl&)
    {41, 1054, 0, 0, Smoke::mf_const, 116, 9},	//1117 QNetworkCacheMetaData::rawHeaders() const
    {41, 1273, 1141, 1, 0, 0, 10},	//1118 QNetworkCacheMetaData::setRawHeaders(const QList<QPair<QByteArray,QByteArray> >&)
    {41, 703, 0, 0, Smoke::mf_const, 22, 11},	//1119 QNetworkCacheMetaData::lastModified() const
    {41, 1189, 1143, 1, 0, 0, 12},	//1120 QNetworkCacheMetaData::setLastModified(const QDateTime&)
    {41, 605, 0, 0, Smoke::mf_const, 22, 13},	//1121 QNetworkCacheMetaData::expirationDate() const
    {41, 1169, 1143, 1, 0, 0, 14},	//1122 QNetworkCacheMetaData::setExpirationDate(const QDateTime&)
    {41, 1096, 0, 0, Smoke::mf_const, 339, 15},	//1123 QNetworkCacheMetaData::saveToDisk() const
    {41, 1284, 116, 1, 0, 0, 16},	//1124 QNetworkCacheMetaData::setSaveToDisk(bool)
    {41, 480, 0, 0, Smoke::mf_const, 73, 17},	//1125 QNetworkCacheMetaData::attributes() const
    {41, 1123, 1145, 1, 0, 0, 18},	//1126 QNetworkCacheMetaData::setAttributes(const QHash<QNetworkRequest::Attribute,QVariant>&)
    {41, 1437, 0, 0, Smoke::mf_dtor, 0, 19 },	//1127 QNetworkCacheMetaData::~QNetworkCacheMetaData()
    {42, 259, 0, 0, Smoke::mf_ctor, 140, 1},	//1128 QNetworkConfiguration::QNetworkConfiguration()
    {42, 259, 1120, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 140, 2},	//1129 QNetworkConfiguration::QNetworkConfiguration(const QNetworkConfiguration&)
    {42, 796, 1120, 1, 0, 139, 3},	//1130 QNetworkConfiguration::operator=(const QNetworkConfiguration&)
    {42, 799, 1120, 1, Smoke::mf_const, 339, 4},	//1131 QNetworkConfiguration::operator==(const QNetworkConfiguration&) const
    {42, 763, 1120, 1, Smoke::mf_const, 339, 5},	//1132 QNetworkConfiguration::operator!=(const QNetworkConfiguration&) const
    {42, 1351, 0, 0, Smoke::mf_const, 41, 6},	//1133 QNetworkConfiguration::state() const
    {42, 1386, 0, 0, Smoke::mf_const, 144, 7},	//1134 QNetworkConfiguration::type() const
    {42, 875, 0, 0, Smoke::mf_const, 142, 8},	//1135 QNetworkConfiguration::purpose() const
    {42, 485, 0, 0, Smoke::mf_const, 215, 9},	//1136 QNetworkConfiguration::bearerName() const
    {42, 486, 0, 0, Smoke::mf_const, 141, 10},	//1137 QNetworkConfiguration::bearerType() const
    {42, 487, 0, 0, Smoke::mf_const, 215, 11},	//1138 QNetworkConfiguration::bearerTypeName() const
    {42, 655, 0, 0, Smoke::mf_const, 215, 12},	//1139 QNetworkConfiguration::identifier() const
    {42, 686, 0, 0, Smoke::mf_const, 339, 13},	//1140 QNetworkConfiguration::isRoamingAvailable() const
    {42, 509, 0, 0, Smoke::mf_const, 112, 14},	//1141 QNetworkConfiguration::children() const
    {42, 748, 0, 0, Smoke::mf_const, 215, 15},	//1142 QNetworkConfiguration::name() const
    {42, 693, 0, 0, Smoke::mf_const, 339, 16},	//1143 QNetworkConfiguration::isValid() const
    {42, 114, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 17},	//1144 QNetworkConfiguration::InternetAccessPoint (enum)
    {42, 363, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 18},	//1145 QNetworkConfiguration::ServiceNetwork (enum)
    {42, 429, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 19},	//1146 QNetworkConfiguration::UserChoice (enum)
    {42, 115, 0, 0, Smoke::mf_static|Smoke::mf_enum, 144, 20},	//1147 QNetworkConfiguration::Invalid (enum)
    {42, 421, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 21},	//1148 QNetworkConfiguration::UnknownPurpose (enum)
    {42, 202, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 22},	//1149 QNetworkConfiguration::PublicPurpose (enum)
    {42, 190, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 23},	//1150 QNetworkConfiguration::PrivatePurpose (enum)
    {42, 364, 0, 0, Smoke::mf_static|Smoke::mf_enum, 142, 24},	//1151 QNetworkConfiguration::ServiceSpecificPurpose (enum)
    {42, 409, 0, 0, Smoke::mf_static|Smoke::mf_enum, 143, 25},	//1152 QNetworkConfiguration::Undefined (enum)
    {42, 77, 0, 0, Smoke::mf_static|Smoke::mf_enum, 143, 26},	//1153 QNetworkConfiguration::Defined (enum)
    {42, 82, 0, 0, Smoke::mf_static|Smoke::mf_enum, 143, 27},	//1154 QNetworkConfiguration::Discovered (enum)
    {42, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 143, 28},	//1155 QNetworkConfiguration::Active (enum)
    {42, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 29},	//1156 QNetworkConfiguration::BearerUnknown (enum)
    {42, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 30},	//1157 QNetworkConfiguration::BearerEthernet (enum)
    {42, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 31},	//1158 QNetworkConfiguration::BearerWLAN (enum)
    {42, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 32},	//1159 QNetworkConfiguration::Bearer2G (enum)
    {42, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 33},	//1160 QNetworkConfiguration::BearerCDMA2000 (enum)
    {42, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 34},	//1161 QNetworkConfiguration::BearerWCDMA (enum)
    {42, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 35},	//1162 QNetworkConfiguration::BearerHSPA (enum)
    {42, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 36},	//1163 QNetworkConfiguration::BearerBluetooth (enum)
    {42, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 141, 37},	//1164 QNetworkConfiguration::BearerWiMAX (enum)
    {42, 1438, 0, 0, Smoke::mf_dtor, 0, 38 },	//1165 QNetworkConfiguration::~QNetworkConfiguration()
    {43, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1166 QNetworkConfigurationManager::metaObject() const
    {43, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1167 QNetworkConfigurationManager::qt_metacast(const char*)
    {43, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1168 QNetworkConfigurationManager::tr(const char*, const char*)
    {43, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1169 QNetworkConfigurationManager::trUtf8(const char*, const char*)
    {43, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1170 QNetworkConfigurationManager::tr(const char*, const char*, int)
    {43, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1171 QNetworkConfigurationManager::trUtf8(const char*, const char*, int)
    {43, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1172 QNetworkConfigurationManager::qt_metacall(QMetaObject::Call, int, void**)
    {43, 261, 20, 1, Smoke::mf_ctor, 145, 8},	//1173 QNetworkConfigurationManager::QNetworkConfigurationManager(QObject*)
    {43, 504, 0, 0, Smoke::mf_const, 42, 9},	//1174 QNetworkConfigurationManager::capabilities() const
    {43, 574, 0, 0, Smoke::mf_const, 138, 10},	//1175 QNetworkConfigurationManager::defaultConfiguration() const
    {43, 466, 1147, 1, Smoke::mf_const, 112, 11},	//1176 QNetworkConfigurationManager::allConfigurations(QFlags<QNetworkConfiguration::StateFlag>) const
    {43, 526, 69, 1, Smoke::mf_const, 138, 12},	//1177 QNetworkConfigurationManager::configurationFromIdentifier(const QString&) const
    {43, 683, 0, 0, Smoke::mf_const, 339, 13},	//1178 QNetworkConfigurationManager::isOnline() const
    {43, 1388, 0, 0, Smoke::mf_slot, 0, 14},	//1179 QNetworkConfigurationManager::updateConfigurations()
    {43, 522, 1120, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 15},	//1180 QNetworkConfigurationManager::configurationAdded(const QNetworkConfiguration&)
    {43, 528, 1120, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 16},	//1181 QNetworkConfigurationManager::configurationRemoved(const QNetworkConfiguration&)
    {43, 524, 1120, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 17},	//1182 QNetworkConfigurationManager::configurationChanged(const QNetworkConfiguration&)
    {43, 758, 116, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 18},	//1183 QNetworkConfigurationManager::onlineStateChanged(bool)
    {43, 1387, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 19},	//1184 QNetworkConfigurationManager::updateCompleted()
    {43, 1378, 1, 1, Smoke::mf_static, 215, 20},	//1185 QNetworkConfigurationManager::tr(const char*)
    {43, 1382, 1, 1, Smoke::mf_static, 215, 21},	//1186 QNetworkConfigurationManager::trUtf8(const char*)
    {43, 261, 0, 0, Smoke::mf_ctor, 145, 22},	//1187 QNetworkConfigurationManager::QNetworkConfigurationManager()
    {43, 466, 0, 0, Smoke::mf_const, 112, 23},	//1188 QNetworkConfigurationManager::allConfigurations() const
    {43, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 24},	//1189 QNetworkConfigurationManager::staticMetaObject() const
    {43, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 25},	//1190 QNetworkConfigurationManager::CanStartAndStopInterfaces (enum)
    {43, 80, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 26},	//1191 QNetworkConfigurationManager::DirectConnectionRouting (enum)
    {43, 389, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 27},	//1192 QNetworkConfigurationManager::SystemSessionSupport (enum)
    {43, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 28},	//1193 QNetworkConfigurationManager::ApplicationLevelRoaming (enum)
    {43, 92, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 29},	//1194 QNetworkConfigurationManager::ForcedRoaming (enum)
    {43, 73, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 30},	//1195 QNetworkConfigurationManager::DataStatistics (enum)
    {43, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 146, 31},	//1196 QNetworkConfigurationManager::NetworkSessionRequired (enum)
    {43, 1439, 0, 0, Smoke::mf_dtor, 0, 32 },	//1197 QNetworkConfigurationManager::~QNetworkConfigurationManager()
    {44, 263, 350, 2, Smoke::mf_ctor, 148, 1},	//1198 QNetworkCookie::QNetworkCookie(const QByteArray&, const QByteArray&)
    {44, 263, 1149, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 148, 2},	//1199 QNetworkCookie::QNetworkCookie(const QNetworkCookie&)
    {44, 796, 1149, 1, 0, 147, 3},	//1200 QNetworkCookie::operator=(const QNetworkCookie&)
    {44, 799, 1149, 1, Smoke::mf_const, 339, 4},	//1201 QNetworkCookie::operator==(const QNetworkCookie&) const
    {44, 763, 1149, 1, Smoke::mf_const, 339, 5},	//1202 QNetworkCookie::operator!=(const QNetworkCookie&) const
    {44, 688, 0, 0, Smoke::mf_const, 339, 6},	//1203 QNetworkCookie::isSecure() const
    {44, 1288, 116, 1, 0, 0, 7},	//1204 QNetworkCookie::setSecure(bool)
    {44, 677, 0, 0, Smoke::mf_const, 339, 8},	//1205 QNetworkCookie::isHttpOnly() const
    {44, 1185, 116, 1, 0, 0, 9},	//1206 QNetworkCookie::setHttpOnly(bool)
    {44, 690, 0, 0, Smoke::mf_const, 339, 10},	//1207 QNetworkCookie::isSessionCookie() const
    {44, 605, 0, 0, Smoke::mf_const, 22, 11},	//1208 QNetworkCookie::expirationDate() const
    {44, 1169, 1143, 1, 0, 0, 12},	//1209 QNetworkCookie::setExpirationDate(const QDateTime&)
    {44, 586, 0, 0, Smoke::mf_const, 215, 13},	//1210 QNetworkCookie::domain() const
    {44, 1162, 69, 1, 0, 0, 14},	//1211 QNetworkCookie::setDomain(const QString&)
    {44, 838, 0, 0, Smoke::mf_const, 215, 15},	//1212 QNetworkCookie::path() const
    {44, 1228, 69, 1, 0, 0, 16},	//1213 QNetworkCookie::setPath(const QString&)
    {44, 748, 0, 0, Smoke::mf_const, 14, 17},	//1214 QNetworkCookie::name() const
    {44, 1209, 362, 1, 0, 0, 18},	//1215 QNetworkCookie::setName(const QByteArray&)
    {44, 1396, 0, 0, Smoke::mf_const, 14, 19},	//1216 QNetworkCookie::value() const
    {44, 1333, 362, 1, 0, 0, 20},	//1217 QNetworkCookie::setValue(const QByteArray&)
    {44, 1375, 1151, 1, Smoke::mf_const, 14, 21},	//1218 QNetworkCookie::toRawForm(QNetworkCookie::RawForm) const
    {44, 831, 362, 1, Smoke::mf_static, 113, 22},	//1219 QNetworkCookie::parseCookies(const QByteArray&)
    {44, 263, 0, 0, Smoke::mf_ctor, 148, 23},	//1220 QNetworkCookie::QNetworkCookie()
    {44, 263, 362, 1, Smoke::mf_ctor, 148, 24},	//1221 QNetworkCookie::QNetworkCookie(const QByteArray&)
    {44, 1375, 0, 0, Smoke::mf_const, 14, 25},	//1222 QNetworkCookie::toRawForm() const
    {44, 164, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 26},	//1223 QNetworkCookie::NameAndValueOnly (enum)
    {44, 95, 0, 0, Smoke::mf_static|Smoke::mf_enum, 149, 27},	//1224 QNetworkCookie::Full (enum)
    {44, 1440, 0, 0, Smoke::mf_dtor, 0, 28 },	//1225 QNetworkCookie::~QNetworkCookie()
    {45, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1226 QNetworkCookieJar::metaObject() const
    {45, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1227 QNetworkCookieJar::qt_metacast(const char*)
    {45, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1228 QNetworkCookieJar::tr(const char*, const char*)
    {45, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1229 QNetworkCookieJar::trUtf8(const char*, const char*)
    {45, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1230 QNetworkCookieJar::tr(const char*, const char*, int)
    {45, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1231 QNetworkCookieJar::trUtf8(const char*, const char*, int)
    {45, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1232 QNetworkCookieJar::qt_metacall(QMetaObject::Call, int, void**)
    {45, 266, 20, 1, Smoke::mf_ctor, 150, 8},	//1233 QNetworkCookieJar::QNetworkCookieJar(QObject*)
    {45, 552, 14, 1, Smoke::mf_const|Smoke::mf_virtual, 113, 9},	//1234 QNetworkCookieJar::cookiesForUrl(const QUrl&) const
    {45, 1152, 1153, 2, Smoke::mf_virtual, 339, 10},	//1235 QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie>&, const QUrl&)
    {45, 468, 0, 0, Smoke::mf_const|Smoke::mf_protected, 113, 11},	//1236 QNetworkCookieJar::allCookies() const
    {45, 1115, 1156, 1, Smoke::mf_protected, 0, 12},	//1237 QNetworkCookieJar::setAllCookies(const QList<QNetworkCookie>&)
    {45, 1378, 1, 1, Smoke::mf_static, 215, 13},	//1238 QNetworkCookieJar::tr(const char*)
    {45, 1382, 1, 1, Smoke::mf_static, 215, 14},	//1239 QNetworkCookieJar::trUtf8(const char*)
    {45, 266, 0, 0, Smoke::mf_ctor, 150, 15},	//1240 QNetworkCookieJar::QNetworkCookieJar()
    {45, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 16},	//1241 QNetworkCookieJar::staticMetaObject() const
    {45, 1441, 0, 0, Smoke::mf_dtor, 0, 17 },	//1242 QNetworkCookieJar::~QNetworkCookieJar()
    {46, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1243 QNetworkDiskCache::metaObject() const
    {46, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1244 QNetworkDiskCache::qt_metacast(const char*)
    {46, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1245 QNetworkDiskCache::tr(const char*, const char*)
    {46, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1246 QNetworkDiskCache::trUtf8(const char*, const char*)
    {46, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1247 QNetworkDiskCache::tr(const char*, const char*, int)
    {46, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1248 QNetworkDiskCache::trUtf8(const char*, const char*, int)
    {46, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1249 QNetworkDiskCache::qt_metacall(QMetaObject::Call, int, void**)
    {46, 268, 20, 1, Smoke::mf_ctor, 151, 8},	//1250 QNetworkDiskCache::QNetworkDiskCache(QObject*)
    {46, 501, 0, 0, Smoke::mf_const, 215, 9},	//1251 QNetworkDiskCache::cacheDirectory() const
    {46, 1137, 69, 1, 0, 0, 10},	//1252 QNetworkDiskCache::setCacheDirectory(const QString&)
    {46, 734, 0, 0, Smoke::mf_const, 426, 11},	//1253 QNetworkDiskCache::maximumCacheSize() const
    {46, 1205, 33, 1, 0, 0, 12},	//1254 QNetworkDiskCache::setMaximumCacheSize(long long)
    {46, 502, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 13},	//1255 QNetworkDiskCache::cacheSize() const
    {46, 735, 14, 1, Smoke::mf_virtual, 135, 14},	//1256 QNetworkDiskCache::metaData(const QUrl&)
    {46, 1389, 16, 1, Smoke::mf_virtual, 0, 15},	//1257 QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData&)
    {46, 564, 14, 1, Smoke::mf_virtual, 99, 16},	//1258 QNetworkDiskCache::data(const QUrl&)
    {46, 1072, 14, 1, Smoke::mf_virtual, 339, 17},	//1259 QNetworkDiskCache::remove(const QUrl&)
    {46, 861, 16, 1, Smoke::mf_virtual, 99, 18},	//1260 QNetworkDiskCache::prepare(const QNetworkCacheMetaData&)
    {46, 663, 18, 1, Smoke::mf_virtual, 0, 19},	//1261 QNetworkDiskCache::insert(QIODevice*)
    {46, 608, 69, 1, Smoke::mf_const, 135, 20},	//1262 QNetworkDiskCache::fileMetaData(const QString&) const
    {46, 511, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 0, 21},	//1263 QNetworkDiskCache::clear()
    {46, 606, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 426, 22},	//1264 QNetworkDiskCache::expire()
    {46, 1378, 1, 1, Smoke::mf_static, 215, 23},	//1265 QNetworkDiskCache::tr(const char*)
    {46, 1382, 1, 1, Smoke::mf_static, 215, 24},	//1266 QNetworkDiskCache::trUtf8(const char*)
    {46, 268, 0, 0, Smoke::mf_ctor, 151, 25},	//1267 QNetworkDiskCache::QNetworkDiskCache()
    {46, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 26},	//1268 QNetworkDiskCache::staticMetaObject() const
    {46, 1442, 0, 0, Smoke::mf_dtor, 0, 27 },	//1269 QNetworkDiskCache::~QNetworkDiskCache()
    {47, 270, 0, 0, Smoke::mf_ctor, 154, 1},	//1270 QNetworkInterface::QNetworkInterface()
    {47, 270, 1158, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 154, 2},	//1271 QNetworkInterface::QNetworkInterface(const QNetworkInterface&)
    {47, 796, 1158, 1, 0, 153, 3},	//1272 QNetworkInterface::operator=(const QNetworkInterface&)
    {47, 693, 0, 0, Smoke::mf_const, 339, 4},	//1273 QNetworkInterface::isValid() const
    {47, 662, 0, 0, Smoke::mf_const, 424, 5},	//1274 QNetworkInterface::index() const
    {47, 748, 0, 0, Smoke::mf_const, 215, 6},	//1275 QNetworkInterface::name() const
    {47, 654, 0, 0, Smoke::mf_const, 215, 7},	//1276 QNetworkInterface::humanReadableName() const
    {47, 612, 0, 0, Smoke::mf_const, 43, 8},	//1277 QNetworkInterface::flags() const
    {47, 636, 0, 0, Smoke::mf_const, 215, 9},	//1278 QNetworkInterface::hardwareAddress() const
    {47, 462, 0, 0, Smoke::mf_const, 111, 10},	//1279 QNetworkInterface::addressEntries() const
    {47, 668, 69, 1, Smoke::mf_static, 152, 11},	//1280 QNetworkInterface::interfaceFromName(const QString&)
    {47, 666, 44, 1, Smoke::mf_static, 152, 12},	//1281 QNetworkInterface::interfaceFromIndex(int)
    {47, 469, 0, 0, Smoke::mf_static, 114, 13},	//1282 QNetworkInterface::allInterfaces()
    {47, 465, 0, 0, Smoke::mf_static, 110, 14},	//1283 QNetworkInterface::allAddresses()
    {47, 125, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 15},	//1284 QNetworkInterface::IsUp (enum)
    {47, 124, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 16},	//1285 QNetworkInterface::IsRunning (enum)
    {47, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 17},	//1286 QNetworkInterface::CanBroadcast (enum)
    {47, 122, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 18},	//1287 QNetworkInterface::IsLoopBack (enum)
    {47, 123, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 19},	//1288 QNetworkInterface::IsPointToPoint (enum)
    {47, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 155, 20},	//1289 QNetworkInterface::CanMulticast (enum)
    {47, 1443, 0, 0, Smoke::mf_dtor, 0, 21 },	//1290 QNetworkInterface::~QNetworkInterface()
    {48, 272, 0, 0, Smoke::mf_ctor, 158, 1},	//1291 QNetworkProxy::QNetworkProxy()
    {48, 272, 1160, 5, Smoke::mf_ctor, 158, 2},	//1292 QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType, const QString&, unsigned short, const QString&, const QString&)
    {48, 272, 46, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 158, 3},	//1293 QNetworkProxy::QNetworkProxy(const QNetworkProxy&)
    {48, 796, 46, 1, 0, 157, 4},	//1294 QNetworkProxy::operator=(const QNetworkProxy&)
    {48, 799, 46, 1, Smoke::mf_const, 339, 5},	//1295 QNetworkProxy::operator==(const QNetworkProxy&) const
    {48, 763, 46, 1, Smoke::mf_const, 339, 6},	//1296 QNetworkProxy::operator!=(const QNetworkProxy&) const
    {48, 1322, 1166, 1, 0, 0, 7},	//1297 QNetworkProxy::setType(QNetworkProxy::ProxyType)
    {48, 1386, 0, 0, Smoke::mf_const, 160, 8},	//1298 QNetworkProxy::type() const
    {48, 1139, 1168, 1, 0, 0, 9},	//1299 QNetworkProxy::setCapabilities(QFlags<QNetworkProxy::Capability>)
    {48, 504, 0, 0, Smoke::mf_const, 44, 10},	//1300 QNetworkProxy::capabilities() const
    {48, 671, 0, 0, Smoke::mf_const, 339, 11},	//1301 QNetworkProxy::isCachingProxy() const
    {48, 692, 0, 0, Smoke::mf_const, 339, 12},	//1302 QNetworkProxy::isTransparentProxy() const
    {48, 1328, 69, 1, 0, 0, 13},	//1303 QNetworkProxy::setUser(const QString&)
    {48, 1395, 0, 0, Smoke::mf_const, 215, 14},	//1304 QNetworkProxy::user() const
    {48, 1226, 69, 1, 0, 0, 15},	//1305 QNetworkProxy::setPassword(const QString&)
    {48, 837, 0, 0, Smoke::mf_const, 215, 16},	//1306 QNetworkProxy::password() const
    {48, 1183, 69, 1, 0, 0, 17},	//1307 QNetworkProxy::setHostName(const QString&)
    {48, 653, 0, 0, Smoke::mf_const, 215, 18},	//1308 QNetworkProxy::hostName() const
    {48, 1246, 65, 1, 0, 0, 19},	//1309 QNetworkProxy::setPort(unsigned short)
    {48, 852, 0, 0, Smoke::mf_const, 438, 20},	//1310 QNetworkProxy::port() const
    {48, 1117, 46, 1, Smoke::mf_static, 0, 21},	//1311 QNetworkProxy::setApplicationProxy(const QNetworkProxy&)
    {48, 475, 0, 0, Smoke::mf_static, 156, 22},	//1312 QNetworkProxy::applicationProxy()
    {48, 272, 1166, 1, Smoke::mf_ctor, 158, 23},	//1313 QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType)
    {48, 272, 1170, 2, Smoke::mf_ctor, 158, 24},	//1314 QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType, const QString&)
    {48, 272, 1173, 3, Smoke::mf_ctor, 158, 25},	//1315 QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType, const QString&, unsigned short)
    {48, 272, 1177, 4, Smoke::mf_ctor, 158, 26},	//1316 QNetworkProxy::QNetworkProxy(QNetworkProxy::ProxyType, const QString&, unsigned short, const QString&)
    {48, 76, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 27},	//1317 QNetworkProxy::DefaultProxy (enum)
    {48, 374, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 28},	//1318 QNetworkProxy::Socks5Proxy (enum)
    {48, 169, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 29},	//1319 QNetworkProxy::NoProxy (enum)
    {48, 109, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 30},	//1320 QNetworkProxy::HttpProxy (enum)
    {48, 106, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 31},	//1321 QNetworkProxy::HttpCachingProxy (enum)
    {48, 94, 0, 0, Smoke::mf_static|Smoke::mf_enum, 160, 32},	//1322 QNetworkProxy::FtpCachingProxy (enum)
    {48, 398, 0, 0, Smoke::mf_static|Smoke::mf_enum, 159, 33},	//1323 QNetworkProxy::TunnelingCapability (enum)
    {48, 148, 0, 0, Smoke::mf_static|Smoke::mf_enum, 159, 34},	//1324 QNetworkProxy::ListeningCapability (enum)
    {48, 400, 0, 0, Smoke::mf_static|Smoke::mf_enum, 159, 35},	//1325 QNetworkProxy::UdpTunnelingCapability (enum)
    {48, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 159, 36},	//1326 QNetworkProxy::CachingCapability (enum)
    {48, 102, 0, 0, Smoke::mf_static|Smoke::mf_enum, 159, 37},	//1327 QNetworkProxy::HostNameLookupCapability (enum)
    {48, 1444, 0, 0, Smoke::mf_dtor, 0, 38 },	//1328 QNetworkProxy::~QNetworkProxy()
    {49, 279, 0, 0, Smoke::mf_ctor, 161, 1},	//1329 QNetworkProxyFactory::QNetworkProxyFactory()
    {49, 1039, 1182, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 115, 2},	//1330 QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery&) [pure virtual]
    {49, 1326, 116, 1, Smoke::mf_static, 0, 3},	//1331 QNetworkProxyFactory::setUseSystemConfiguration(bool)
    {49, 1119, 1099, 1, Smoke::mf_static, 0, 4},	//1332 QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory*)
    {49, 872, 1182, 1, Smoke::mf_static, 115, 5},	//1333 QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery&)
    {49, 1364, 1182, 1, Smoke::mf_static, 115, 6},	//1334 QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery&)
    {49, 279, 1184, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 161, 7},	//1335 QNetworkProxyFactory::QNetworkProxyFactory(const QNetworkProxyFactory&)
    {49, 1039, 0, 0, 0, 115, 8},	//1336 QNetworkProxyFactory::queryProxy()
    {49, 1364, 0, 0, Smoke::mf_static, 115, 9},	//1337 QNetworkProxyFactory::systemProxyForQuery()
    {49, 1445, 0, 0, Smoke::mf_dtor, 0, 10 },	//1338 QNetworkProxyFactory::~QNetworkProxyFactory()
    {50, 281, 0, 0, Smoke::mf_ctor, 163, 1},	//1339 QNetworkProxyQuery::QNetworkProxyQuery()
    {50, 281, 1186, 2, Smoke::mf_ctor, 163, 2},	//1340 QNetworkProxyQuery::QNetworkProxyQuery(const QUrl&, QNetworkProxyQuery::QueryType)
    {50, 281, 1189, 4, Smoke::mf_ctor, 163, 3},	//1341 QNetworkProxyQuery::QNetworkProxyQuery(const QString&, int, const QString&, QNetworkProxyQuery::QueryType)
    {50, 281, 1194, 3, Smoke::mf_ctor, 163, 4},	//1342 QNetworkProxyQuery::QNetworkProxyQuery(unsigned short, const QString&, QNetworkProxyQuery::QueryType)
    {50, 281, 1182, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 163, 5},	//1343 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkProxyQuery&)
    {50, 281, 1198, 3, Smoke::mf_ctor, 163, 6},	//1344 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QUrl&, QNetworkProxyQuery::QueryType)
    {50, 281, 1202, 5, Smoke::mf_ctor, 163, 7},	//1345 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QString&, int, const QString&, QNetworkProxyQuery::QueryType)
    {50, 281, 1208, 4, Smoke::mf_ctor, 163, 8},	//1346 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, unsigned short, const QString&, QNetworkProxyQuery::QueryType)
    {50, 796, 1182, 1, 0, 162, 9},	//1347 QNetworkProxyQuery::operator=(const QNetworkProxyQuery&)
    {50, 799, 1182, 1, Smoke::mf_const, 339, 10},	//1348 QNetworkProxyQuery::operator==(const QNetworkProxyQuery&) const
    {50, 763, 1182, 1, Smoke::mf_const, 339, 11},	//1349 QNetworkProxyQuery::operator!=(const QNetworkProxyQuery&) const
    {50, 1041, 0, 0, Smoke::mf_const, 164, 12},	//1350 QNetworkProxyQuery::queryType() const
    {50, 1269, 1213, 1, 0, 0, 13},	//1351 QNetworkProxyQuery::setQueryType(QNetworkProxyQuery::QueryType)
    {50, 844, 0, 0, Smoke::mf_const, 424, 14},	//1352 QNetworkProxyQuery::peerPort() const
    {50, 1236, 44, 1, 0, 0, 15},	//1353 QNetworkProxyQuery::setPeerPort(int)
    {50, 842, 0, 0, Smoke::mf_const, 215, 16},	//1354 QNetworkProxyQuery::peerHostName() const
    {50, 1232, 69, 1, 0, 0, 17},	//1355 QNetworkProxyQuery::setPeerHostName(const QString&)
    {50, 724, 0, 0, Smoke::mf_const, 424, 18},	//1356 QNetworkProxyQuery::localPort() const
    {50, 1199, 44, 1, 0, 0, 19},	//1357 QNetworkProxyQuery::setLocalPort(int)
    {50, 867, 0, 0, Smoke::mf_const, 215, 20},	//1358 QNetworkProxyQuery::protocolTag() const
    {50, 1260, 69, 1, 0, 0, 21},	//1359 QNetworkProxyQuery::setProtocolTag(const QString&)
    {50, 1393, 0, 0, Smoke::mf_const, 233, 22},	//1360 QNetworkProxyQuery::url() const
    {50, 1324, 14, 1, 0, 0, 23},	//1361 QNetworkProxyQuery::setUrl(const QUrl&)
    {50, 753, 0, 0, Smoke::mf_const, 138, 24},	//1362 QNetworkProxyQuery::networkConfiguration() const
    {50, 1216, 1120, 1, 0, 0, 25},	//1363 QNetworkProxyQuery::setNetworkConfiguration(const QNetworkConfiguration&)
    {50, 281, 14, 1, Smoke::mf_ctor, 163, 26},	//1364 QNetworkProxyQuery::QNetworkProxyQuery(const QUrl&)
    {50, 281, 1028, 2, Smoke::mf_ctor, 163, 27},	//1365 QNetworkProxyQuery::QNetworkProxyQuery(const QString&, int)
    {50, 281, 1031, 3, Smoke::mf_ctor, 163, 28},	//1366 QNetworkProxyQuery::QNetworkProxyQuery(const QString&, int, const QString&)
    {50, 281, 65, 1, Smoke::mf_ctor, 163, 29},	//1367 QNetworkProxyQuery::QNetworkProxyQuery(unsigned short)
    {50, 281, 1215, 2, Smoke::mf_ctor, 163, 30},	//1368 QNetworkProxyQuery::QNetworkProxyQuery(unsigned short, const QString&)
    {50, 281, 1218, 2, Smoke::mf_ctor, 163, 31},	//1369 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QUrl&)
    {50, 281, 1221, 3, Smoke::mf_ctor, 163, 32},	//1370 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QString&, int)
    {50, 281, 1225, 4, Smoke::mf_ctor, 163, 33},	//1371 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QString&, int, const QString&)
    {50, 281, 1230, 2, Smoke::mf_ctor, 163, 34},	//1372 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, unsigned short)
    {50, 281, 1233, 3, Smoke::mf_ctor, 163, 35},	//1373 QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, unsigned short, const QString&)
    {50, 391, 0, 0, Smoke::mf_static|Smoke::mf_enum, 164, 36},	//1374 QNetworkProxyQuery::TcpSocket (enum)
    {50, 399, 0, 0, Smoke::mf_static|Smoke::mf_enum, 164, 37},	//1375 QNetworkProxyQuery::UdpSocket (enum)
    {50, 390, 0, 0, Smoke::mf_static|Smoke::mf_enum, 164, 38},	//1376 QNetworkProxyQuery::TcpServer (enum)
    {50, 427, 0, 0, Smoke::mf_static|Smoke::mf_enum, 164, 39},	//1377 QNetworkProxyQuery::UrlRequest (enum)
    {50, 1446, 0, 0, Smoke::mf_dtor, 0, 40 },	//1378 QNetworkProxyQuery::~QNetworkProxyQuery()
    {51, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1379 QNetworkReply::metaObject() const
    {51, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1380 QNetworkReply::qt_metacast(const char*)
    {51, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1381 QNetworkReply::tr(const char*, const char*)
    {51, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1382 QNetworkReply::trUtf8(const char*, const char*)
    {51, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1383 QNetworkReply::tr(const char*, const char*, int)
    {51, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1384 QNetworkReply::trUtf8(const char*, const char*, int)
    {51, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1385 QNetworkReply::qt_metacall(QMetaObject::Call, int, void**)
    {51, 438, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 8},	//1386 QNetworkReply::abort() [pure virtual]
    {51, 514, 0, 0, Smoke::mf_virtual, 0, 9},	//1387 QNetworkReply::close()
    {51, 689, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 10},	//1388 QNetworkReply::isSequential() const
    {51, 1058, 0, 0, Smoke::mf_const, 426, 11},	//1389 QNetworkReply::readBufferSize() const
    {51, 1275, 33, 1, Smoke::mf_virtual, 0, 12},	//1390 QNetworkReply::setReadBufferSize(long long)
    {51, 732, 0, 0, Smoke::mf_const, 130, 13},	//1391 QNetworkReply::manager() const
    {51, 762, 0, 0, Smoke::mf_const, 132, 14},	//1392 QNetworkReply::operation() const
    {51, 1083, 0, 0, Smoke::mf_const, 167, 15},	//1393 QNetworkReply::request() const
    {51, 600, 0, 0, Smoke::mf_const, 166, 16},	//1394 QNetworkReply::error() const
    {51, 676, 0, 0, Smoke::mf_const, 339, 17},	//1395 QNetworkReply::isFinished() const
    {51, 687, 0, 0, Smoke::mf_const, 339, 18},	//1396 QNetworkReply::isRunning() const
    {51, 1393, 0, 0, Smoke::mf_const, 233, 19},	//1397 QNetworkReply::url() const
    {51, 650, 1237, 1, Smoke::mf_const, 241, 20},	//1398 QNetworkReply::header(QNetworkRequest::KnownHeaders) const
    {51, 645, 362, 1, Smoke::mf_const, 339, 21},	//1399 QNetworkReply::hasRawHeader(const QByteArray&) const
    {51, 1052, 0, 0, Smoke::mf_const, 109, 22},	//1400 QNetworkReply::rawHeaderList() const
    {51, 1050, 362, 1, Smoke::mf_const, 14, 23},	//1401 QNetworkReply::rawHeader(const QByteArray&) const
    {51, 1053, 0, 0, Smoke::mf_const, 366, 24},	//1402 QNetworkReply::rawHeaderPairs() const
    {51, 477, 1239, 1, Smoke::mf_const, 241, 25},	//1403 QNetworkReply::attribute(QNetworkRequest::Attribute) const
    {51, 1345, 0, 0, Smoke::mf_const, 202, 26},	//1404 QNetworkReply::sslConfiguration() const
    {51, 1309, 1241, 1, 0, 0, 27},	//1405 QNetworkReply::setSslConfiguration(const QSslConfiguration&)
    {51, 657, 1023, 1, 0, 0, 28},	//1406 QNetworkReply::ignoreSslErrors(const QList<QSslError>&)
    {51, 657, 0, 0, Smoke::mf_virtual|Smoke::mf_slot, 0, 29},	//1407 QNetworkReply::ignoreSslErrors()
    {51, 737, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 30},	//1408 QNetworkReply::metaDataChanged()
    {51, 610, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 31},	//1409 QNetworkReply::finished()
    {51, 600, 1243, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 32},	//1410 QNetworkReply::error(QNetworkReply::NetworkError)
    {51, 1346, 1023, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 33},	//1411 QNetworkReply::sslErrors(const QList<QSslError>&)
    {51, 1391, 107, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 34},	//1412 QNetworkReply::uploadProgress(qint64, qint64)
    {51, 589, 107, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 35},	//1413 QNetworkReply::downloadProgress(qint64, qint64)
    {51, 293, 20, 1, Smoke::mf_ctor|Smoke::mf_protected, 165, 36},	//1414 QNetworkReply::QNetworkReply(QObject*)
    {51, 1415, 62, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 37},	//1415 QNetworkReply::writeData(const char*, long long)
    {51, 1218, 1245, 1, Smoke::mf_protected, 0, 38},	//1416 QNetworkReply::setOperation(QNetworkAccessManager::Operation)
    {51, 1279, 1105, 1, Smoke::mf_protected, 0, 39},	//1417 QNetworkReply::setRequest(const QNetworkRequest&)
    {51, 1164, 1247, 2, Smoke::mf_protected, 0, 40},	//1418 QNetworkReply::setError(QNetworkReply::NetworkError, const QString&)
    {51, 1173, 116, 1, Smoke::mf_protected, 0, 41},	//1419 QNetworkReply::setFinished(bool)
    {51, 1324, 14, 1, Smoke::mf_protected, 0, 42},	//1420 QNetworkReply::setUrl(const QUrl&)
    {51, 1177, 1057, 2, Smoke::mf_protected, 0, 43},	//1421 QNetworkReply::setHeader(QNetworkRequest::KnownHeaders, const QVariant&)
    {51, 1271, 350, 2, Smoke::mf_protected, 0, 44},	//1422 QNetworkReply::setRawHeader(const QByteArray&, const QByteArray&)
    {51, 1121, 1250, 2, Smoke::mf_protected, 0, 45},	//1423 QNetworkReply::setAttribute(QNetworkRequest::Attribute, const QVariant&)
    {51, 1378, 1, 1, Smoke::mf_static, 215, 46},	//1424 QNetworkReply::tr(const char*)
    {51, 1382, 1, 1, Smoke::mf_static, 215, 47},	//1425 QNetworkReply::trUtf8(const char*)
    {51, 293, 0, 0, Smoke::mf_ctor|Smoke::mf_protected, 165, 48},	//1426 QNetworkReply::QNetworkReply()
    {51, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 49},	//1427 QNetworkReply::staticMetaObject() const
    {51, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 50},	//1428 QNetworkReply::NoError (enum)
    {51, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 51},	//1429 QNetworkReply::ConnectionRefusedError (enum)
    {51, 350, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 52},	//1430 QNetworkReply::RemoteHostClosedError (enum)
    {51, 105, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 53},	//1431 QNetworkReply::HostNotFoundError (enum)
    {51, 394, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 54},	//1432 QNetworkReply::TimeoutError (enum)
    {51, 178, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 55},	//1433 QNetworkReply::OperationCanceledError (enum)
    {51, 377, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 56},	//1434 QNetworkReply::SslHandshakeFailedError (enum)
    {51, 392, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 57},	//1435 QNetworkReply::TemporaryNetworkFailureError (enum)
    {51, 416, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 58},	//1436 QNetworkReply::UnknownNetworkError (enum)
    {51, 196, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 59},	//1437 QNetworkReply::ProxyConnectionRefusedError (enum)
    {51, 195, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 60},	//1438 QNetworkReply::ProxyConnectionClosedError (enum)
    {51, 198, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 61},	//1439 QNetworkReply::ProxyNotFoundError (enum)
    {51, 200, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 62},	//1440 QNetworkReply::ProxyTimeoutError (enum)
    {51, 194, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 63},	//1441 QNetworkReply::ProxyAuthenticationRequiredError (enum)
    {51, 420, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 64},	//1442 QNetworkReply::UnknownProxyError (enum)
    {51, 60, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 65},	//1443 QNetworkReply::ContentAccessDenied (enum)
    {51, 64, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 66},	//1444 QNetworkReply::ContentOperationNotPermittedError (enum)
    {51, 63, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 67},	//1445 QNetworkReply::ContentNotFoundError (enum)
    {51, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 68},	//1446 QNetworkReply::AuthenticationRequiredError (enum)
    {51, 65, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 69},	//1447 QNetworkReply::ContentReSendError (enum)
    {51, 414, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 70},	//1448 QNetworkReply::UnknownContentError (enum)
    {51, 193, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 71},	//1449 QNetworkReply::ProtocolUnknownError (enum)
    {51, 192, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 72},	//1450 QNetworkReply::ProtocolInvalidOperationError (enum)
    {51, 191, 0, 0, Smoke::mf_static|Smoke::mf_enum, 166, 73},	//1451 QNetworkReply::ProtocolFailure (enum)
    {51, 1447, 0, 0, Smoke::mf_dtor, 0, 74 },	//1452 QNetworkReply::~QNetworkReply()
    {52, 295, 14, 1, Smoke::mf_ctor, 169, 1},	//1453 QNetworkRequest::QNetworkRequest(const QUrl&)
    {52, 295, 1105, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 169, 2},	//1454 QNetworkRequest::QNetworkRequest(const QNetworkRequest&)
    {52, 796, 1105, 1, 0, 168, 3},	//1455 QNetworkRequest::operator=(const QNetworkRequest&)
    {52, 799, 1105, 1, Smoke::mf_const, 339, 4},	//1456 QNetworkRequest::operator==(const QNetworkRequest&) const
    {52, 763, 1105, 1, Smoke::mf_const, 339, 5},	//1457 QNetworkRequest::operator!=(const QNetworkRequest&) const
    {52, 1393, 0, 0, Smoke::mf_const, 233, 6},	//1458 QNetworkRequest::url() const
    {52, 1324, 14, 1, 0, 0, 7},	//1459 QNetworkRequest::setUrl(const QUrl&)
    {52, 650, 1237, 1, Smoke::mf_const, 241, 8},	//1460 QNetworkRequest::header(QNetworkRequest::KnownHeaders) const
    {52, 1177, 1057, 2, 0, 0, 9},	//1461 QNetworkRequest::setHeader(QNetworkRequest::KnownHeaders, const QVariant&)
    {52, 645, 362, 1, Smoke::mf_const, 339, 10},	//1462 QNetworkRequest::hasRawHeader(const QByteArray&) const
    {52, 1052, 0, 0, Smoke::mf_const, 109, 11},	//1463 QNetworkRequest::rawHeaderList() const
    {52, 1050, 362, 1, Smoke::mf_const, 14, 12},	//1464 QNetworkRequest::rawHeader(const QByteArray&) const
    {52, 1271, 350, 2, 0, 0, 13},	//1465 QNetworkRequest::setRawHeader(const QByteArray&, const QByteArray&)
    {52, 477, 1250, 2, Smoke::mf_const, 241, 14},	//1466 QNetworkRequest::attribute(QNetworkRequest::Attribute, const QVariant&) const
    {52, 1121, 1250, 2, 0, 0, 15},	//1467 QNetworkRequest::setAttribute(QNetworkRequest::Attribute, const QVariant&)
    {52, 1345, 0, 0, Smoke::mf_const, 202, 16},	//1468 QNetworkRequest::sslConfiguration() const
    {52, 1309, 1241, 1, 0, 0, 17},	//1469 QNetworkRequest::setSslConfiguration(const QSslConfiguration&)
    {52, 1222, 20, 1, 0, 0, 18},	//1470 QNetworkRequest::setOriginatingObject(QObject*)
    {52, 827, 0, 0, Smoke::mf_const, 178, 19},	//1471 QNetworkRequest::originatingObject() const
    {52, 863, 0, 0, Smoke::mf_const, 174, 20},	//1472 QNetworkRequest::priority() const
    {52, 1250, 1253, 1, 0, 0, 21},	//1473 QNetworkRequest::setPriority(QNetworkRequest::Priority)
    {52, 295, 0, 0, Smoke::mf_ctor, 169, 22},	//1474 QNetworkRequest::QNetworkRequest()
    {52, 477, 1239, 1, Smoke::mf_const, 241, 23},	//1475 QNetworkRequest::attribute(QNetworkRequest::Attribute) const
    {52, 66, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 24},	//1476 QNetworkRequest::ContentTypeHeader (enum)
    {52, 62, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 25},	//1477 QNetworkRequest::ContentLengthHeader (enum)
    {52, 153, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 26},	//1478 QNetworkRequest::LocationHeader (enum)
    {52, 127, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 27},	//1479 QNetworkRequest::LastModifiedHeader (enum)
    {52, 67, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 28},	//1480 QNetworkRequest::CookieHeader (enum)
    {52, 366, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 29},	//1481 QNetworkRequest::SetCookieHeader (enum)
    {52, 61, 0, 0, Smoke::mf_static|Smoke::mf_enum, 172, 30},	//1482 QNetworkRequest::ContentDispositionHeader (enum)
    {52, 111, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 31},	//1483 QNetworkRequest::HttpStatusCodeAttribute (enum)
    {52, 110, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 32},	//1484 QNetworkRequest::HttpReasonPhraseAttribute (enum)
    {52, 348, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 33},	//1485 QNetworkRequest::RedirectionTargetAttribute (enum)
    {52, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 34},	//1486 QNetworkRequest::ConnectionEncryptedAttribute (enum)
    {52, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 35},	//1487 QNetworkRequest::CacheLoadControlAttribute (enum)
    {52, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 36},	//1488 QNetworkRequest::CacheSaveControlAttribute (enum)
    {52, 375, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 37},	//1489 QNetworkRequest::SourceIsFromCacheAttribute (enum)
    {52, 84, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 38},	//1490 QNetworkRequest::DoNotBufferUploadDataAttribute (enum)
    {52, 107, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 39},	//1491 QNetworkRequest::HttpPipeliningAllowedAttribute (enum)
    {52, 108, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 40},	//1492 QNetworkRequest::HttpPipeliningWasUsedAttribute (enum)
    {52, 72, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 41},	//1493 QNetworkRequest::CustomVerbAttribute (enum)
    {52, 68, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 42},	//1494 QNetworkRequest::CookieLoadControlAttribute (enum)
    {52, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 43},	//1495 QNetworkRequest::AuthenticationReuseAttribute (enum)
    {52, 69, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 44},	//1496 QNetworkRequest::CookieSaveControlAttribute (enum)
    {52, 159, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 45},	//1497 QNetworkRequest::MaximumDownloadBufferSizeAttribute (enum)
    {52, 86, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 46},	//1498 QNetworkRequest::DownloadBufferAttribute (enum)
    {52, 388, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 47},	//1499 QNetworkRequest::SynchronousRequestAttribute (enum)
    {52, 428, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 48},	//1500 QNetworkRequest::User (enum)
    {52, 430, 0, 0, Smoke::mf_static|Smoke::mf_enum, 170, 49},	//1501 QNetworkRequest::UserMax (enum)
    {52, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 171, 50},	//1502 QNetworkRequest::AlwaysNetwork (enum)
    {52, 188, 0, 0, Smoke::mf_static|Smoke::mf_enum, 171, 51},	//1503 QNetworkRequest::PreferNetwork (enum)
    {52, 187, 0, 0, Smoke::mf_static|Smoke::mf_enum, 171, 52},	//1504 QNetworkRequest::PreferCache (enum)
    {52, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 171, 53},	//1505 QNetworkRequest::AlwaysCache (enum)
    {52, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 54},	//1506 QNetworkRequest::Automatic (enum)
    {52, 158, 0, 0, Smoke::mf_static|Smoke::mf_enum, 173, 55},	//1507 QNetworkRequest::Manual (enum)
    {52, 99, 0, 0, Smoke::mf_static|Smoke::mf_enum, 174, 56},	//1508 QNetworkRequest::HighPriority (enum)
    {52, 172, 0, 0, Smoke::mf_static|Smoke::mf_enum, 174, 57},	//1509 QNetworkRequest::NormalPriority (enum)
    {52, 157, 0, 0, Smoke::mf_static|Smoke::mf_enum, 174, 58},	//1510 QNetworkRequest::LowPriority (enum)
    {52, 1448, 0, 0, Smoke::mf_dtor, 0, 59 },	//1511 QNetworkRequest::~QNetworkRequest()
    {53, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1512 QNetworkSession::metaObject() const
    {53, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1513 QNetworkSession::qt_metacast(const char*)
    {53, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1514 QNetworkSession::tr(const char*, const char*)
    {53, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1515 QNetworkSession::trUtf8(const char*, const char*)
    {53, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1516 QNetworkSession::tr(const char*, const char*, int)
    {53, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1517 QNetworkSession::trUtf8(const char*, const char*, int)
    {53, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1518 QNetworkSession::qt_metacall(QMetaObject::Call, int, void**)
    {53, 297, 1255, 2, Smoke::mf_ctor, 175, 8},	//1519 QNetworkSession::QNetworkSession(const QNetworkConfiguration&, QObject*)
    {53, 684, 0, 0, Smoke::mf_const, 339, 9},	//1520 QNetworkSession::isOpen() const
    {53, 521, 0, 0, Smoke::mf_const, 138, 10},	//1521 QNetworkSession::configuration() const
    {53, 665, 0, 0, Smoke::mf_const, 152, 11},	//1522 QNetworkSession::interface() const
    {53, 1351, 0, 0, Smoke::mf_const, 177, 12},	//1523 QNetworkSession::state() const
    {53, 600, 0, 0, Smoke::mf_const, 176, 13},	//1524 QNetworkSession::error() const
    {53, 602, 0, 0, Smoke::mf_const, 215, 14},	//1525 QNetworkSession::errorString() const
    {53, 1108, 69, 1, Smoke::mf_const, 241, 15},	//1526 QNetworkSession::sessionProperty(const QString&) const
    {53, 1290, 85, 2, 0, 0, 16},	//1527 QNetworkSession::setSessionProperty(const QString&, const QVariant&)
    {53, 498, 0, 0, Smoke::mf_const, 437, 17},	//1528 QNetworkSession::bytesWritten() const
    {53, 496, 0, 0, Smoke::mf_const, 437, 18},	//1529 QNetworkSession::bytesReceived() const
    {53, 443, 0, 0, Smoke::mf_const, 437, 19},	//1530 QNetworkSession::activeTime() const
    {53, 1411, 44, 1, 0, 339, 20},	//1531 QNetworkSession::waitForOpened(int)
    {53, 760, 0, 0, Smoke::mf_slot, 0, 21},	//1532 QNetworkSession::open()
    {53, 514, 0, 0, Smoke::mf_slot, 0, 22},	//1533 QNetworkSession::close()
    {53, 1356, 0, 0, Smoke::mf_slot, 0, 23},	//1534 QNetworkSession::stop()
    {53, 740, 0, 0, Smoke::mf_slot, 0, 24},	//1535 QNetworkSession::migrate()
    {53, 656, 0, 0, Smoke::mf_slot, 0, 25},	//1536 QNetworkSession::ignore()
    {53, 441, 0, 0, Smoke::mf_slot, 0, 26},	//1537 QNetworkSession::accept()
    {53, 1071, 0, 0, Smoke::mf_slot, 0, 27},	//1538 QNetworkSession::reject()
    {53, 1352, 1258, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 28},	//1539 QNetworkSession::stateChanged(QNetworkSession::State)
    {53, 761, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 29},	//1540 QNetworkSession::opened()
    {53, 516, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 30},	//1541 QNetworkSession::closed()
    {53, 600, 1260, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 31},	//1542 QNetworkSession::error(QNetworkSession::SessionError)
    {53, 858, 1262, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 32},	//1543 QNetworkSession::preferredConfigurationChanged(const QNetworkConfiguration&, bool)
    {53, 755, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 33},	//1544 QNetworkSession::newConfigurationActivated()
    {53, 530, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 34},	//1545 QNetworkSession::connectNotify(const char*)
    {53, 583, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 35},	//1546 QNetworkSession::disconnectNotify(const char*)
    {53, 1378, 1, 1, Smoke::mf_static, 215, 36},	//1547 QNetworkSession::tr(const char*)
    {53, 1382, 1, 1, Smoke::mf_static, 215, 37},	//1548 QNetworkSession::trUtf8(const char*)
    {53, 297, 1120, 1, Smoke::mf_ctor, 175, 38},	//1549 QNetworkSession::QNetworkSession(const QNetworkConfiguration&)
    {53, 1411, 0, 0, 0, 339, 39},	//1550 QNetworkSession::waitForOpened()
    {53, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 40},	//1551 QNetworkSession::staticMetaObject() const
    {53, 115, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 41},	//1552 QNetworkSession::Invalid (enum)
    {53, 174, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 42},	//1553 QNetworkSession::NotAvailable (enum)
    {53, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 43},	//1554 QNetworkSession::Connecting (enum)
    {53, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 44},	//1555 QNetworkSession::Connected (enum)
    {53, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 45},	//1556 QNetworkSession::Closing (enum)
    {53, 81, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 46},	//1557 QNetworkSession::Disconnected (enum)
    {53, 355, 0, 0, Smoke::mf_static|Smoke::mf_enum, 177, 47},	//1558 QNetworkSession::Roaming (enum)
    {53, 422, 0, 0, Smoke::mf_static|Smoke::mf_enum, 176, 48},	//1559 QNetworkSession::UnknownSessionError (enum)
    {53, 365, 0, 0, Smoke::mf_static|Smoke::mf_enum, 176, 49},	//1560 QNetworkSession::SessionAbortedError (enum)
    {53, 356, 0, 0, Smoke::mf_static|Smoke::mf_enum, 176, 50},	//1561 QNetworkSession::RoamingError (enum)
    {53, 179, 0, 0, Smoke::mf_static|Smoke::mf_enum, 176, 51},	//1562 QNetworkSession::OperationNotSupportedError (enum)
    {53, 117, 0, 0, Smoke::mf_static|Smoke::mf_enum, 176, 52},	//1563 QNetworkSession::InvalidConfigurationError (enum)
    {53, 1449, 0, 0, Smoke::mf_dtor, 0, 53 },	//1564 QNetworkSession::~QNetworkSession()
    {54, 603, 1265, 1, Smoke::mf_virtual, 339, 0},	//1565 QObject::event(QEvent*)
    {54, 604, 1267, 2, Smoke::mf_virtual, 339, 0},	//1566 QObject::eventFilter(QObject*, QEvent*)
    {54, 1368, 1270, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1567 QObject::timerEvent(QTimerEvent*)
    {54, 508, 1272, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1568 QObject::childEvent(QChildEvent*)
    {54, 563, 1265, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1569 QObject::customEvent(QEvent*)
    {54, 530, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1570 QObject::connectNotify(const char*)
    {54, 583, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//1571 QObject::disconnectNotify(const char*)
    {63, 357, 0, 0, Smoke::mf_static|Smoke::mf_enum, 191, 1},	//1572 QSsl::Rsa (enum)
    {63, 87, 0, 0, Smoke::mf_static|Smoke::mf_enum, 191, 2},	//1573 QSsl::Dsa (enum)
    {63, 185, 0, 0, Smoke::mf_static|Smoke::mf_enum, 190, 3},	//1574 QSsl::Pem (enum)
    {63, 79, 0, 0, Smoke::mf_static|Smoke::mf_enum, 190, 4},	//1575 QSsl::Der (enum)
    {63, 379, 0, 0, Smoke::mf_static|Smoke::mf_enum, 193, 5},	//1576 QSsl::SslOptionDisableEmptyFragments (enum)
    {63, 382, 0, 0, Smoke::mf_static|Smoke::mf_enum, 193, 6},	//1577 QSsl::SslOptionDisableSessionTickets (enum)
    {63, 378, 0, 0, Smoke::mf_static|Smoke::mf_enum, 193, 7},	//1578 QSsl::SslOptionDisableCompression (enum)
    {63, 381, 0, 0, Smoke::mf_static|Smoke::mf_enum, 193, 8},	//1579 QSsl::SslOptionDisableServerNameIndication (enum)
    {63, 380, 0, 0, Smoke::mf_static|Smoke::mf_enum, 193, 9},	//1580 QSsl::SslOptionDisableLegacyRenegotiation (enum)
    {63, 385, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 10},	//1581 QSsl::SslV3 (enum)
    {63, 384, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 11},	//1582 QSsl::SslV2 (enum)
    {63, 395, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 12},	//1583 QSsl::TlsV1 (enum)
    {63, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 13},	//1584 QSsl::AnyProtocol (enum)
    {63, 396, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 14},	//1585 QSsl::TlsV1SslV3 (enum)
    {63, 358, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 15},	//1586 QSsl::SecureProtocols (enum)
    {63, 419, 0, 0, Smoke::mf_static|Smoke::mf_enum, 194, 16},	//1587 QSsl::UnknownProtocol (enum)
    {63, 88, 0, 0, Smoke::mf_static|Smoke::mf_enum, 189, 17},	//1588 QSsl::EmailEntry (enum)
    {63, 83, 0, 0, Smoke::mf_static|Smoke::mf_enum, 189, 18},	//1589 QSsl::DnsEntry (enum)
    {63, 189, 0, 0, Smoke::mf_static|Smoke::mf_enum, 192, 19},	//1590 QSsl::PrivateKey (enum)
    {63, 201, 0, 0, Smoke::mf_static|Smoke::mf_enum, 192, 20},	//1591 QSsl::PublicKey (enum)
    {64, 300, 1274, 2, Smoke::mf_ctor, 197, 1},	//1592 QSslCertificate::QSslCertificate(QIODevice*, QSsl::EncodingFormat)
    {64, 300, 1277, 2, Smoke::mf_ctor, 197, 2},	//1593 QSslCertificate::QSslCertificate(const QByteArray&, QSsl::EncodingFormat)
    {64, 300, 1280, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 197, 3},	//1594 QSslCertificate::QSslCertificate(const QSslCertificate&)
    {64, 796, 1280, 1, 0, 196, 4},	//1595 QSslCertificate::operator=(const QSslCertificate&)
    {64, 799, 1280, 1, Smoke::mf_const, 339, 5},	//1596 QSslCertificate::operator==(const QSslCertificate&) const
    {64, 763, 1280, 1, Smoke::mf_const, 339, 6},	//1597 QSslCertificate::operator!=(const QSslCertificate&) const
    {64, 682, 0, 0, Smoke::mf_const, 339, 7},	//1598 QSslCertificate::isNull() const
    {64, 693, 0, 0, Smoke::mf_const, 339, 8},	//1599 QSslCertificate::isValid() const
    {64, 511, 0, 0, 0, 0, 9},	//1600 QSslCertificate::clear()
    {64, 1399, 0, 0, Smoke::mf_const, 14, 10},	//1601 QSslCertificate::version() const
    {64, 1102, 0, 0, Smoke::mf_const, 14, 11},	//1602 QSslCertificate::serialNumber() const
    {64, 578, 1282, 1, Smoke::mf_const, 14, 12},	//1603 QSslCertificate::digest(QCryptographicHash::Algorithm) const
    {64, 695, 1284, 1, Smoke::mf_const, 215, 13},	//1604 QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo) const
    {64, 695, 362, 1, Smoke::mf_const, 215, 14},	//1605 QSslCertificate::issuerInfo(const QByteArray&) const
    {64, 1357, 1284, 1, Smoke::mf_const, 215, 15},	//1606 QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo) const
    {64, 1357, 362, 1, Smoke::mf_const, 215, 16},	//1607 QSslCertificate::subjectInfo(const QByteArray&) const
    {64, 472, 0, 0, Smoke::mf_const, 129, 17},	//1608 QSslCertificate::alternateSubjectNames() const
    {64, 591, 0, 0, Smoke::mf_const, 22, 18},	//1609 QSslCertificate::effectiveDate() const
    {64, 607, 0, 0, Smoke::mf_const, 22, 19},	//1610 QSslCertificate::expiryDate() const
    {64, 874, 0, 0, Smoke::mf_const, 209, 20},	//1611 QSslCertificate::publicKey() const
    {64, 1373, 0, 0, Smoke::mf_const, 14, 21},	//1612 QSslCertificate::toPem() const
    {64, 1369, 0, 0, Smoke::mf_const, 14, 22},	//1613 QSslCertificate::toDer() const
    {64, 622, 1286, 3, Smoke::mf_static, 118, 23},	//1614 QSslCertificate::fromPath(const QString&, QSsl::EncodingFormat, QRegExp::PatternSyntax)
    {64, 617, 1274, 2, Smoke::mf_static, 118, 24},	//1615 QSslCertificate::fromDevice(QIODevice*, QSsl::EncodingFormat)
    {64, 614, 1277, 2, Smoke::mf_static, 118, 25},	//1616 QSslCertificate::fromData(const QByteArray&, QSsl::EncodingFormat)
    {64, 635, 0, 0, Smoke::mf_const, 436, 26},	//1617 QSslCertificate::handle() const
    {64, 300, 18, 1, Smoke::mf_ctor, 197, 27},	//1618 QSslCertificate::QSslCertificate(QIODevice*)
    {64, 300, 0, 0, Smoke::mf_ctor, 197, 28},	//1619 QSslCertificate::QSslCertificate()
    {64, 300, 362, 1, Smoke::mf_ctor, 197, 29},	//1620 QSslCertificate::QSslCertificate(const QByteArray&)
    {64, 578, 0, 0, Smoke::mf_const, 14, 30},	//1621 QSslCertificate::digest() const
    {64, 622, 69, 1, Smoke::mf_static, 118, 31},	//1622 QSslCertificate::fromPath(const QString&)
    {64, 622, 1290, 2, Smoke::mf_static, 118, 32},	//1623 QSslCertificate::fromPath(const QString&, QSsl::EncodingFormat)
    {64, 617, 18, 1, Smoke::mf_static, 118, 33},	//1624 QSslCertificate::fromDevice(QIODevice*)
    {64, 614, 362, 1, Smoke::mf_static, 118, 34},	//1625 QSslCertificate::fromData(const QByteArray&)
    {64, 180, 0, 0, Smoke::mf_static|Smoke::mf_enum, 198, 35},	//1626 QSslCertificate::Organization (enum)
    {64, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 198, 36},	//1627 QSslCertificate::CommonName (enum)
    {64, 152, 0, 0, Smoke::mf_static|Smoke::mf_enum, 198, 37},	//1628 QSslCertificate::LocalityName (enum)
    {64, 181, 0, 0, Smoke::mf_static|Smoke::mf_enum, 198, 38},	//1629 QSslCertificate::OrganizationalUnitName (enum)
    {64, 70, 0, 0, Smoke::mf_static|Smoke::mf_enum, 198, 39},	//1630 QSslCertificate::CountryName (enum)
    {64, 386, 0, 0, Smoke::mf_static|Smoke::mf_enum, 198, 40},	//1631 QSslCertificate::StateOrProvinceName (enum)
    {64, 1450, 0, 0, Smoke::mf_dtor, 0, 41 },	//1632 QSslCertificate::~QSslCertificate()
    {65, 303, 0, 0, Smoke::mf_ctor, 201, 1},	//1633 QSslCipher::QSslCipher()
    {65, 303, 1293, 2, Smoke::mf_ctor, 201, 2},	//1634 QSslCipher::QSslCipher(const QString&, QSsl::SslProtocol)
    {65, 303, 1296, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 201, 3},	//1635 QSslCipher::QSslCipher(const QSslCipher&)
    {65, 796, 1296, 1, 0, 200, 4},	//1636 QSslCipher::operator=(const QSslCipher&)
    {65, 799, 1296, 1, Smoke::mf_const, 339, 5},	//1637 QSslCipher::operator==(const QSslCipher&) const
    {65, 763, 1296, 1, Smoke::mf_const, 339, 6},	//1638 QSslCipher::operator!=(const QSslCipher&) const
    {65, 682, 0, 0, Smoke::mf_const, 339, 7},	//1639 QSslCipher::isNull() const
    {65, 748, 0, 0, Smoke::mf_const, 215, 8},	//1640 QSslCipher::name() const
    {65, 1360, 0, 0, Smoke::mf_const, 424, 9},	//1641 QSslCipher::supportedBits() const
    {65, 1394, 0, 0, Smoke::mf_const, 424, 10},	//1642 QSslCipher::usedBits() const
    {65, 701, 0, 0, Smoke::mf_const, 215, 11},	//1643 QSslCipher::keyExchangeMethod() const
    {65, 481, 0, 0, Smoke::mf_const, 215, 12},	//1644 QSslCipher::authenticationMethod() const
    {65, 597, 0, 0, Smoke::mf_const, 215, 13},	//1645 QSslCipher::encryptionMethod() const
    {65, 866, 0, 0, Smoke::mf_const, 215, 14},	//1646 QSslCipher::protocolString() const
    {65, 865, 0, 0, Smoke::mf_const, 194, 15},	//1647 QSslCipher::protocol() const
    {65, 1451, 0, 0, Smoke::mf_dtor, 0, 16 },	//1648 QSslCipher::~QSslCipher()
    {66, 306, 0, 0, Smoke::mf_ctor, 204, 1},	//1649 QSslConfiguration::QSslConfiguration()
    {66, 306, 1241, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 204, 2},	//1650 QSslConfiguration::QSslConfiguration(const QSslConfiguration&)
    {66, 796, 1241, 1, 0, 203, 3},	//1651 QSslConfiguration::operator=(const QSslConfiguration&)
    {66, 799, 1241, 1, Smoke::mf_const, 339, 4},	//1652 QSslConfiguration::operator==(const QSslConfiguration&) const
    {66, 763, 1241, 1, Smoke::mf_const, 339, 5},	//1653 QSslConfiguration::operator!=(const QSslConfiguration&) const
    {66, 682, 0, 0, Smoke::mf_const, 339, 6},	//1654 QSslConfiguration::isNull() const
    {66, 865, 0, 0, Smoke::mf_const, 194, 7},	//1655 QSslConfiguration::protocol() const
    {66, 1258, 1298, 1, 0, 0, 8},	//1656 QSslConfiguration::setProtocol(QSsl::SslProtocol)
    {66, 848, 0, 0, Smoke::mf_const, 213, 9},	//1657 QSslConfiguration::peerVerifyMode() const
    {66, 1240, 1300, 1, 0, 0, 10},	//1658 QSslConfiguration::setPeerVerifyMode(QSslSocket::PeerVerifyMode)
    {66, 845, 0, 0, Smoke::mf_const, 424, 11},	//1659 QSslConfiguration::peerVerifyDepth() const
    {66, 1238, 44, 1, 0, 0, 12},	//1660 QSslConfiguration::setPeerVerifyDepth(int)
    {66, 721, 0, 0, Smoke::mf_const, 195, 13},	//1661 QSslConfiguration::localCertificate() const
    {66, 1195, 1280, 1, 0, 0, 14},	//1662 QSslConfiguration::setLocalCertificate(const QSslCertificate&)
    {66, 840, 0, 0, Smoke::mf_const, 195, 15},	//1663 QSslConfiguration::peerCertificate() const
    {66, 841, 0, 0, Smoke::mf_const, 118, 16},	//1664 QSslConfiguration::peerCertificateChain() const
    {66, 1107, 0, 0, Smoke::mf_const, 199, 17},	//1665 QSslConfiguration::sessionCipher() const
    {66, 864, 0, 0, Smoke::mf_const, 209, 18},	//1666 QSslConfiguration::privateKey() const
    {66, 1252, 1302, 1, 0, 0, 19},	//1667 QSslConfiguration::setPrivateKey(const QSslKey&)
    {66, 510, 0, 0, Smoke::mf_const, 119, 20},	//1668 QSslConfiguration::ciphers() const
    {66, 1141, 1304, 1, 0, 0, 21},	//1669 QSslConfiguration::setCiphers(const QList<QSslCipher>&)
    {66, 499, 0, 0, Smoke::mf_const, 118, 22},	//1670 QSslConfiguration::caCertificates() const
    {66, 1133, 1306, 1, 0, 0, 23},	//1671 QSslConfiguration::setCaCertificates(const QList<QSslCertificate>&)
    {66, 1311, 1308, 2, 0, 0, 24},	//1672 QSslConfiguration::setSslOption(QSsl::SslOption, bool)
    {66, 1366, 1311, 1, Smoke::mf_const, 339, 25},	//1673 QSslConfiguration::testSslOption(QSsl::SslOption) const
    {66, 574, 0, 0, Smoke::mf_static, 202, 26},	//1674 QSslConfiguration::defaultConfiguration()
    {66, 1158, 1241, 1, Smoke::mf_static, 0, 27},	//1675 QSslConfiguration::setDefaultConfiguration(const QSslConfiguration&)
    {66, 1452, 0, 0, Smoke::mf_dtor, 0, 28 },	//1676 QSslConfiguration::~QSslConfiguration()
    {67, 308, 0, 0, Smoke::mf_ctor, 207, 1},	//1677 QSslError::QSslError()
    {67, 308, 1313, 1, Smoke::mf_ctor, 207, 2},	//1678 QSslError::QSslError(QSslError::SslError)
    {67, 308, 1315, 2, Smoke::mf_ctor, 207, 3},	//1679 QSslError::QSslError(QSslError::SslError, const QSslCertificate&)
    {67, 308, 1318, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 207, 4},	//1680 QSslError::QSslError(const QSslError&)
    {67, 796, 1318, 1, 0, 206, 5},	//1681 QSslError::operator=(const QSslError&)
    {67, 799, 1318, 1, Smoke::mf_const, 339, 6},	//1682 QSslError::operator==(const QSslError&) const
    {67, 763, 1318, 1, Smoke::mf_const, 339, 7},	//1683 QSslError::operator!=(const QSslError&) const
    {67, 600, 0, 0, Smoke::mf_const, 208, 8},	//1684 QSslError::error() const
    {67, 602, 0, 0, Smoke::mf_const, 215, 9},	//1685 QSslError::errorString() const
    {67, 507, 0, 0, Smoke::mf_const, 195, 10},	//1686 QSslError::certificate() const
    {67, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 11},	//1687 QSslError::NoError (enum)
    {67, 403, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 12},	//1688 QSslError::UnableToGetIssuerCertificate (enum)
    {67, 402, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 13},	//1689 QSslError::UnableToDecryptCertificateSignature (enum)
    {67, 401, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 14},	//1690 QSslError::UnableToDecodeIssuerPublicKey (enum)
    {67, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 15},	//1691 QSslError::CertificateSignatureFailed (enum)
    {67, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 16},	//1692 QSslError::CertificateNotYetValid (enum)
    {67, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 17},	//1693 QSslError::CertificateExpired (enum)
    {67, 119, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 18},	//1694 QSslError::InvalidNotBeforeField (enum)
    {67, 118, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 19},	//1695 QSslError::InvalidNotAfterField (enum)
    {67, 359, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 20},	//1696 QSslError::SelfSignedCertificate (enum)
    {67, 360, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 21},	//1697 QSslError::SelfSignedCertificateInChain (enum)
    {67, 404, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 22},	//1698 QSslError::UnableToGetLocalIssuerCertificate (enum)
    {67, 405, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 23},	//1699 QSslError::UnableToVerifyFirstCertificate (enum)
    {67, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 24},	//1700 QSslError::CertificateRevoked (enum)
    {67, 116, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 25},	//1701 QSslError::InvalidCaCertificate (enum)
    {67, 183, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 26},	//1702 QSslError::PathLengthExceeded (enum)
    {67, 120, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 27},	//1703 QSslError::InvalidPurpose (enum)
    {67, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 28},	//1704 QSslError::CertificateUntrusted (enum)
    {67, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 29},	//1705 QSslError::CertificateRejected (enum)
    {67, 387, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 30},	//1706 QSslError::SubjectIssuerMismatch (enum)
    {67, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 31},	//1707 QSslError::AuthorityIssuerSerialNumberMismatch (enum)
    {67, 168, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 32},	//1708 QSslError::NoPeerCertificate (enum)
    {67, 103, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 33},	//1709 QSslError::HostNameMismatch (enum)
    {67, 170, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 34},	//1710 QSslError::NoSslSupport (enum)
    {67, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 35},	//1711 QSslError::CertificateBlacklisted (enum)
    {67, 425, 0, 0, Smoke::mf_static|Smoke::mf_enum, 208, 36},	//1712 QSslError::UnspecifiedError (enum)
    {67, 1453, 0, 0, Smoke::mf_dtor, 0, 37 },	//1713 QSslError::~QSslError()
    {68, 312, 0, 0, Smoke::mf_ctor, 211, 1},	//1714 QSslKey::QSslKey()
    {68, 312, 1320, 5, Smoke::mf_ctor, 211, 2},	//1715 QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray&)
    {68, 312, 1326, 5, Smoke::mf_ctor, 211, 3},	//1716 QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray&)
    {68, 312, 1302, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 211, 4},	//1717 QSslKey::QSslKey(const QSslKey&)
    {68, 796, 1302, 1, 0, 210, 5},	//1718 QSslKey::operator=(const QSslKey&)
    {68, 682, 0, 0, Smoke::mf_const, 339, 6},	//1719 QSslKey::isNull() const
    {68, 511, 0, 0, 0, 0, 7},	//1720 QSslKey::clear()
    {68, 709, 0, 0, Smoke::mf_const, 424, 8},	//1721 QSslKey::length() const
    {68, 1386, 0, 0, Smoke::mf_const, 192, 9},	//1722 QSslKey::type() const
    {68, 464, 0, 0, Smoke::mf_const, 191, 10},	//1723 QSslKey::algorithm() const
    {68, 1373, 362, 1, Smoke::mf_const, 14, 11},	//1724 QSslKey::toPem(const QByteArray&) const
    {68, 1369, 362, 1, Smoke::mf_const, 14, 12},	//1725 QSslKey::toDer(const QByteArray&) const
    {68, 635, 0, 0, Smoke::mf_const, 436, 13},	//1726 QSslKey::handle() const
    {68, 799, 1302, 1, Smoke::mf_const, 339, 14},	//1727 QSslKey::operator==(const QSslKey&) const
    {68, 763, 1302, 1, Smoke::mf_const, 339, 15},	//1728 QSslKey::operator!=(const QSslKey&) const
    {68, 312, 1332, 2, Smoke::mf_ctor, 211, 16},	//1729 QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm)
    {68, 312, 1335, 3, Smoke::mf_ctor, 211, 17},	//1730 QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat)
    {68, 312, 1339, 4, Smoke::mf_ctor, 211, 18},	//1731 QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType)
    {68, 312, 1344, 2, Smoke::mf_ctor, 211, 19},	//1732 QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm)
    {68, 312, 1347, 3, Smoke::mf_ctor, 211, 20},	//1733 QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat)
    {68, 312, 1351, 4, Smoke::mf_ctor, 211, 21},	//1734 QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType)
    {68, 1373, 0, 0, Smoke::mf_const, 14, 22},	//1735 QSslKey::toPem() const
    {68, 1369, 0, 0, Smoke::mf_const, 14, 23},	//1736 QSslKey::toDer() const
    {68, 1454, 0, 0, Smoke::mf_dtor, 0, 24 },	//1737 QSslKey::~QSslKey()
    {69, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1738 QSslSocket::metaObject() const
    {69, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1739 QSslSocket::qt_metacast(const char*)
    {69, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1740 QSslSocket::tr(const char*, const char*)
    {69, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1741 QSslSocket::trUtf8(const char*, const char*)
    {69, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1742 QSslSocket::tr(const char*, const char*, int)
    {69, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1743 QSslSocket::trUtf8(const char*, const char*, int)
    {69, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1744 QSslSocket::qt_metacall(QMetaObject::Call, int, void**)
    {69, 318, 20, 1, Smoke::mf_ctor, 212, 8},	//1745 QSslSocket::QSslSocket(QObject*)
    {69, 538, 25, 3, 0, 0, 9},	//1746 QSslSocket::connectToHostEncrypted(const QString&, unsigned short, QFlags<QIODevice::OpenModeFlag>)
    {69, 538, 1356, 4, 0, 0, 10},	//1747 QSslSocket::connectToHostEncrypted(const QString&, unsigned short, const QString&, QFlags<QIODevice::OpenModeFlag>)
    {69, 1296, 35, 3, 0, 339, 11},	//1748 QSslSocket::setSocketDescriptor(int, QAbstractSocket::SocketState, QFlags<QIODevice::OpenModeFlag>)
    {69, 1305, 39, 2, 0, 0, 12},	//1749 QSslSocket::setSocketOption(QAbstractSocket::SocketOption, const QVariant&)
    {69, 1342, 42, 1, 0, 241, 13},	//1750 QSslSocket::socketOption(QAbstractSocket::SocketOption)
    {69, 744, 0, 0, Smoke::mf_const, 214, 14},	//1751 QSslSocket::mode() const
    {69, 673, 0, 0, Smoke::mf_const, 339, 15},	//1752 QSslSocket::isEncrypted() const
    {69, 865, 0, 0, Smoke::mf_const, 194, 16},	//1753 QSslSocket::protocol() const
    {69, 1258, 1298, 1, 0, 0, 17},	//1754 QSslSocket::setProtocol(QSsl::SslProtocol)
    {69, 848, 0, 0, Smoke::mf_const, 213, 18},	//1755 QSslSocket::peerVerifyMode() const
    {69, 1240, 1300, 1, 0, 0, 19},	//1756 QSslSocket::setPeerVerifyMode(QSslSocket::PeerVerifyMode)
    {69, 845, 0, 0, Smoke::mf_const, 424, 20},	//1757 QSslSocket::peerVerifyDepth() const
    {69, 1238, 44, 1, 0, 0, 21},	//1758 QSslSocket::setPeerVerifyDepth(int)
    {69, 849, 0, 0, Smoke::mf_const, 215, 22},	//1759 QSslSocket::peerVerifyName() const
    {69, 1242, 69, 1, 0, 0, 23},	//1760 QSslSocket::setPeerVerifyName(const QString&)
    {69, 495, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 24},	//1761 QSslSocket::bytesAvailable() const
    {69, 497, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 426, 25},	//1762 QSslSocket::bytesToWrite() const
    {69, 503, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 26},	//1763 QSslSocket::canReadLine() const
    {69, 514, 0, 0, Smoke::mf_virtual, 0, 27},	//1764 QSslSocket::close()
    {69, 476, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 28},	//1765 QSslSocket::atEnd() const
    {69, 613, 0, 0, 0, 339, 29},	//1766 QSslSocket::flush()
    {69, 438, 0, 0, 0, 0, 30},	//1767 QSslSocket::abort()
    {69, 1275, 33, 1, 0, 0, 31},	//1768 QSslSocket::setReadBufferSize(long long)
    {69, 593, 0, 0, Smoke::mf_const, 426, 32},	//1769 QSslSocket::encryptedBytesAvailable() const
    {69, 594, 0, 0, Smoke::mf_const, 426, 33},	//1770 QSslSocket::encryptedBytesToWrite() const
    {69, 1345, 0, 0, Smoke::mf_const, 202, 34},	//1771 QSslSocket::sslConfiguration() const
    {69, 1309, 1241, 1, 0, 0, 35},	//1772 QSslSocket::setSslConfiguration(const QSslConfiguration&)
    {69, 1195, 1280, 1, 0, 0, 36},	//1773 QSslSocket::setLocalCertificate(const QSslCertificate&)
    {69, 1195, 1290, 2, 0, 0, 37},	//1774 QSslSocket::setLocalCertificate(const QString&, QSsl::EncodingFormat)
    {69, 721, 0, 0, Smoke::mf_const, 195, 38},	//1775 QSslSocket::localCertificate() const
    {69, 840, 0, 0, Smoke::mf_const, 195, 39},	//1776 QSslSocket::peerCertificate() const
    {69, 841, 0, 0, Smoke::mf_const, 118, 40},	//1777 QSslSocket::peerCertificateChain() const
    {69, 1107, 0, 0, Smoke::mf_const, 199, 41},	//1778 QSslSocket::sessionCipher() const
    {69, 1252, 1302, 1, 0, 0, 42},	//1779 QSslSocket::setPrivateKey(const QSslKey&)
    {69, 1252, 1361, 4, 0, 0, 43},	//1780 QSslSocket::setPrivateKey(const QString&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, const QByteArray&)
    {69, 864, 0, 0, Smoke::mf_const, 209, 44},	//1781 QSslSocket::privateKey() const
    {69, 510, 0, 0, Smoke::mf_const, 119, 45},	//1782 QSslSocket::ciphers() const
    {69, 1141, 1304, 1, 0, 0, 46},	//1783 QSslSocket::setCiphers(const QList<QSslCipher>&)
    {69, 1141, 69, 1, 0, 0, 47},	//1784 QSslSocket::setCiphers(const QString&)
    {69, 1156, 1304, 1, Smoke::mf_static, 0, 48},	//1785 QSslSocket::setDefaultCiphers(const QList<QSslCipher>&)
    {69, 573, 0, 0, Smoke::mf_static, 119, 49},	//1786 QSslSocket::defaultCiphers()
    {69, 1361, 0, 0, Smoke::mf_static, 119, 50},	//1787 QSslSocket::supportedCiphers()
    {69, 446, 1286, 3, 0, 339, 51},	//1788 QSslSocket::addCaCertificates(const QString&, QSsl::EncodingFormat, QRegExp::PatternSyntax)
    {69, 444, 1280, 1, 0, 0, 52},	//1789 QSslSocket::addCaCertificate(const QSslCertificate&)
    {69, 446, 1306, 1, 0, 0, 53},	//1790 QSslSocket::addCaCertificates(const QList<QSslCertificate>&)
    {69, 1133, 1306, 1, 0, 0, 54},	//1791 QSslSocket::setCaCertificates(const QList<QSslCertificate>&)
    {69, 499, 0, 0, Smoke::mf_const, 118, 55},	//1792 QSslSocket::caCertificates() const
    {69, 453, 1286, 3, Smoke::mf_static, 339, 56},	//1793 QSslSocket::addDefaultCaCertificates(const QString&, QSsl::EncodingFormat, QRegExp::PatternSyntax)
    {69, 451, 1280, 1, Smoke::mf_static, 0, 57},	//1794 QSslSocket::addDefaultCaCertificate(const QSslCertificate&)
    {69, 453, 1306, 1, Smoke::mf_static, 0, 58},	//1795 QSslSocket::addDefaultCaCertificates(const QList<QSslCertificate>&)
    {69, 1154, 1306, 1, Smoke::mf_static, 0, 59},	//1796 QSslSocket::setDefaultCaCertificates(const QList<QSslCertificate>&)
    {69, 572, 0, 0, Smoke::mf_static, 118, 60},	//1797 QSslSocket::defaultCaCertificates()
    {69, 1363, 0, 0, Smoke::mf_static, 118, 61},	//1798 QSslSocket::systemCaCertificates()
    {69, 1402, 44, 1, 0, 339, 62},	//1799 QSslSocket::waitForConnected(int)
    {69, 1406, 44, 1, 0, 339, 63},	//1800 QSslSocket::waitForEncrypted(int)
    {69, 1413, 44, 1, Smoke::mf_virtual, 339, 64},	//1801 QSslSocket::waitForReadyRead(int)
    {69, 1400, 44, 1, Smoke::mf_virtual, 339, 65},	//1802 QSslSocket::waitForBytesWritten(int)
    {69, 1404, 44, 1, 0, 339, 66},	//1803 QSslSocket::waitForDisconnected(int)
    {69, 1346, 0, 0, Smoke::mf_const, 120, 67},	//1804 QSslSocket::sslErrors() const
    {69, 1362, 0, 0, Smoke::mf_static, 339, 68},	//1805 QSslSocket::supportsSsl()
    {69, 657, 1023, 1, 0, 0, 69},	//1806 QSslSocket::ignoreSslErrors(const QList<QSslError>&)
    {69, 1349, 0, 0, Smoke::mf_slot, 0, 70},	//1807 QSslSocket::startClientEncryption()
    {69, 1350, 0, 0, Smoke::mf_slot, 0, 71},	//1808 QSslSocket::startServerEncryption()
    {69, 657, 0, 0, Smoke::mf_slot, 0, 72},	//1809 QSslSocket::ignoreSslErrors()
    {69, 592, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 73},	//1810 QSslSocket::encrypted()
    {69, 846, 1318, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 74},	//1811 QSslSocket::peerVerifyError(const QSslError&)
    {69, 1346, 1023, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 75},	//1812 QSslSocket::sslErrors(const QList<QSslError>&)
    {69, 745, 1366, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 76},	//1813 QSslSocket::modeChanged(QSslSocket::SslMode)
    {69, 595, 1368, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 77},	//1814 QSslSocket::encryptedBytesWritten(qint64)
    {69, 542, 55, 3, Smoke::mf_protected|Smoke::mf_slot, 0, 78},	//1815 QSslSocket::connectToHostImplementation(const QString&, quint16, QIODevice::OpenMode)
    {69, 581, 0, 0, Smoke::mf_protected|Smoke::mf_slot, 0, 79},	//1816 QSslSocket::disconnectFromHostImplementation()
    {69, 1059, 59, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 80},	//1817 QSslSocket::readData(char*, long long)
    {69, 1415, 62, 2, Smoke::mf_protected|Smoke::mf_virtual, 426, 81},	//1818 QSslSocket::writeData(const char*, long long)
    {69, 1378, 1, 1, Smoke::mf_static, 215, 82},	//1819 QSslSocket::tr(const char*)
    {69, 1382, 1, 1, Smoke::mf_static, 215, 83},	//1820 QSslSocket::trUtf8(const char*)
    {69, 318, 0, 0, Smoke::mf_ctor, 212, 84},	//1821 QSslSocket::QSslSocket()
    {69, 538, 71, 2, 0, 0, 85},	//1822 QSslSocket::connectToHostEncrypted(const QString&, unsigned short)
    {69, 538, 1370, 3, 0, 0, 86},	//1823 QSslSocket::connectToHostEncrypted(const QString&, unsigned short, const QString&)
    {69, 1296, 44, 1, 0, 339, 87},	//1824 QSslSocket::setSocketDescriptor(int)
    {69, 1296, 77, 2, 0, 339, 88},	//1825 QSslSocket::setSocketDescriptor(int, QAbstractSocket::SocketState)
    {69, 1195, 69, 1, 0, 0, 89},	//1826 QSslSocket::setLocalCertificate(const QString&)
    {69, 1252, 69, 1, 0, 0, 90},	//1827 QSslSocket::setPrivateKey(const QString&)
    {69, 1252, 1374, 2, 0, 0, 91},	//1828 QSslSocket::setPrivateKey(const QString&, QSsl::KeyAlgorithm)
    {69, 1252, 1377, 3, 0, 0, 92},	//1829 QSslSocket::setPrivateKey(const QString&, QSsl::KeyAlgorithm, QSsl::EncodingFormat)
    {69, 446, 69, 1, 0, 339, 93},	//1830 QSslSocket::addCaCertificates(const QString&)
    {69, 446, 1290, 2, 0, 339, 94},	//1831 QSslSocket::addCaCertificates(const QString&, QSsl::EncodingFormat)
    {69, 453, 69, 1, Smoke::mf_static, 339, 95},	//1832 QSslSocket::addDefaultCaCertificates(const QString&)
    {69, 453, 1290, 2, Smoke::mf_static, 339, 96},	//1833 QSslSocket::addDefaultCaCertificates(const QString&, QSsl::EncodingFormat)
    {69, 1402, 0, 0, 0, 339, 97},	//1834 QSslSocket::waitForConnected()
    {69, 1406, 0, 0, 0, 339, 98},	//1835 QSslSocket::waitForEncrypted()
    {69, 1413, 0, 0, 0, 339, 99},	//1836 QSslSocket::waitForReadyRead()
    {69, 1400, 0, 0, 0, 339, 100},	//1837 QSslSocket::waitForBytesWritten()
    {69, 1404, 0, 0, 0, 339, 101},	//1838 QSslSocket::waitForDisconnected()
    {69, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 102},	//1839 QSslSocket::staticMetaObject() const
    {69, 410, 0, 0, Smoke::mf_static|Smoke::mf_enum, 214, 103},	//1840 QSslSocket::UnencryptedMode (enum)
    {69, 376, 0, 0, Smoke::mf_static|Smoke::mf_enum, 214, 104},	//1841 QSslSocket::SslClientMode (enum)
    {69, 383, 0, 0, Smoke::mf_static|Smoke::mf_enum, 214, 105},	//1842 QSslSocket::SslServerMode (enum)
    {69, 431, 0, 0, Smoke::mf_static|Smoke::mf_enum, 213, 106},	//1843 QSslSocket::VerifyNone (enum)
    {69, 340, 0, 0, Smoke::mf_static|Smoke::mf_enum, 213, 107},	//1844 QSslSocket::QueryPeer (enum)
    {69, 432, 0, 0, Smoke::mf_static|Smoke::mf_enum, 213, 108},	//1845 QSslSocket::VerifyPeer (enum)
    {69, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 213, 109},	//1846 QSslSocket::AutoVerifyPeer (enum)
    {69, 1455, 0, 0, Smoke::mf_dtor, 0, 110 },	//1847 QSslSocket::~QSslSocket()
    {72, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1848 QTcpServer::metaObject() const
    {72, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1849 QTcpServer::qt_metacast(const char*)
    {72, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1850 QTcpServer::tr(const char*, const char*)
    {72, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1851 QTcpServer::trUtf8(const char*, const char*)
    {72, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1852 QTcpServer::tr(const char*, const char*, int)
    {72, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1853 QTcpServer::trUtf8(const char*, const char*, int)
    {72, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1854 QTcpServer::qt_metacall(QMetaObject::Call, int, void**)
    {72, 320, 20, 1, Smoke::mf_ctor, 222, 8},	//1855 QTcpServer::QTcpServer(QObject*)
    {72, 716, 74, 2, 0, 339, 9},	//1856 QTcpServer::listen(const QHostAddress&, unsigned short)
    {72, 514, 0, 0, 0, 0, 10},	//1857 QTcpServer::close()
    {72, 681, 0, 0, Smoke::mf_const, 339, 11},	//1858 QTcpServer::isListening() const
    {72, 1203, 44, 1, 0, 0, 12},	//1859 QTcpServer::setMaxPendingConnections(int)
    {72, 733, 0, 0, Smoke::mf_const, 424, 13},	//1860 QTcpServer::maxPendingConnections() const
    {72, 1106, 0, 0, Smoke::mf_const, 438, 14},	//1861 QTcpServer::serverPort() const
    {72, 1103, 0, 0, Smoke::mf_const, 75, 15},	//1862 QTcpServer::serverAddress() const
    {72, 1341, 0, 0, Smoke::mf_const, 424, 16},	//1863 QTcpServer::socketDescriptor() const
    {72, 1296, 44, 1, 0, 339, 17},	//1864 QTcpServer::setSocketDescriptor(int)
    {72, 1408, 1080, 2, 0, 339, 18},	//1865 QTcpServer::waitForNewConnection(int, bool*)
    {72, 642, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 339, 19},	//1866 QTcpServer::hasPendingConnections() const
    {72, 757, 0, 0, Smoke::mf_virtual, 223, 20},	//1867 QTcpServer::nextPendingConnection()
    {72, 1104, 0, 0, Smoke::mf_const, 5, 21},	//1868 QTcpServer::serverError() const
    {72, 602, 0, 0, Smoke::mf_const, 215, 22},	//1869 QTcpServer::errorString() const
    {72, 1262, 46, 1, 0, 0, 23},	//1870 QTcpServer::setProxy(const QNetworkProxy&)
    {72, 868, 0, 0, Smoke::mf_const, 156, 24},	//1871 QTcpServer::proxy() const
    {72, 659, 44, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 25},	//1872 QTcpServer::incomingConnection(int)
    {72, 458, 991, 1, Smoke::mf_protected, 0, 26},	//1873 QTcpServer::addPendingConnection(QTcpSocket*)
    {72, 756, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 27},	//1874 QTcpServer::newConnection()
    {72, 1378, 1, 1, Smoke::mf_static, 215, 28},	//1875 QTcpServer::tr(const char*)
    {72, 1382, 1, 1, Smoke::mf_static, 215, 29},	//1876 QTcpServer::trUtf8(const char*)
    {72, 320, 0, 0, Smoke::mf_ctor, 222, 30},	//1877 QTcpServer::QTcpServer()
    {72, 716, 0, 0, 0, 339, 31},	//1878 QTcpServer::listen()
    {72, 716, 67, 1, 0, 339, 32},	//1879 QTcpServer::listen(const QHostAddress&)
    {72, 1408, 0, 0, 0, 339, 33},	//1880 QTcpServer::waitForNewConnection()
    {72, 1408, 44, 1, 0, 339, 34},	//1881 QTcpServer::waitForNewConnection(int)
    {72, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 35},	//1882 QTcpServer::staticMetaObject() const
    {72, 1456, 0, 0, Smoke::mf_dtor, 0, 36 },	//1883 QTcpServer::~QTcpServer()
    {73, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1884 QTcpSocket::metaObject() const
    {73, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1885 QTcpSocket::qt_metacast(const char*)
    {73, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1886 QTcpSocket::tr(const char*, const char*)
    {73, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1887 QTcpSocket::trUtf8(const char*, const char*)
    {73, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1888 QTcpSocket::tr(const char*, const char*, int)
    {73, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1889 QTcpSocket::trUtf8(const char*, const char*, int)
    {73, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1890 QTcpSocket::qt_metacall(QMetaObject::Call, int, void**)
    {73, 322, 20, 1, Smoke::mf_ctor, 223, 8},	//1891 QTcpSocket::QTcpSocket(QObject*)
    {73, 1378, 1, 1, Smoke::mf_static, 215, 9},	//1892 QTcpSocket::tr(const char*)
    {73, 1382, 1, 1, Smoke::mf_static, 215, 10},	//1893 QTcpSocket::trUtf8(const char*)
    {73, 322, 0, 0, Smoke::mf_ctor, 223, 11},	//1894 QTcpSocket::QTcpSocket()
    {73, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 12},	//1895 QTcpSocket::staticMetaObject() const
    {73, 1457, 0, 0, Smoke::mf_dtor, 0, 13 },	//1896 QTcpSocket::~QTcpSocket()
    {78, 738, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 374, 1},	//1897 QUdpSocket::metaObject() const
    {78, 1032, 1, 1, Smoke::mf_virtual, 443, 2},	//1898 QUdpSocket::qt_metacast(const char*)
    {78, 1378, 3, 2, Smoke::mf_static, 215, 3},	//1899 QUdpSocket::tr(const char*, const char*)
    {78, 1382, 3, 2, Smoke::mf_static, 215, 4},	//1900 QUdpSocket::trUtf8(const char*, const char*)
    {78, 1378, 6, 3, Smoke::mf_static, 215, 5},	//1901 QUdpSocket::tr(const char*, const char*, int)
    {78, 1382, 6, 3, Smoke::mf_static, 215, 6},	//1902 QUdpSocket::trUtf8(const char*, const char*, int)
    {78, 1030, 10, 3, Smoke::mf_virtual, 424, 7},	//1903 QUdpSocket::qt_metacall(QMetaObject::Call, int, void**)
    {78, 324, 20, 1, Smoke::mf_ctor, 231, 8},	//1904 QUdpSocket::QUdpSocket(QObject*)
    {78, 488, 74, 2, 0, 339, 9},	//1905 QUdpSocket::bind(const QHostAddress&, unsigned short)
    {78, 488, 65, 1, 0, 339, 10},	//1906 QUdpSocket::bind(unsigned short)
    {78, 488, 1381, 3, 0, 339, 11},	//1907 QUdpSocket::bind(const QHostAddress&, unsigned short, QFlags<QUdpSocket::BindFlag>)
    {78, 488, 1385, 2, 0, 339, 12},	//1908 QUdpSocket::bind(unsigned short, QFlags<QUdpSocket::BindFlag>)
    {78, 698, 67, 1, 0, 339, 13},	//1909 QUdpSocket::joinMulticastGroup(const QHostAddress&)
    {78, 698, 1388, 2, 0, 339, 14},	//1910 QUdpSocket::joinMulticastGroup(const QHostAddress&, const QNetworkInterface&)
    {78, 706, 67, 1, 0, 339, 15},	//1911 QUdpSocket::leaveMulticastGroup(const QHostAddress&)
    {78, 706, 1388, 2, 0, 339, 16},	//1912 QUdpSocket::leaveMulticastGroup(const QHostAddress&, const QNetworkInterface&)
    {78, 747, 0, 0, Smoke::mf_const, 152, 17},	//1913 QUdpSocket::multicastInterface() const
    {78, 1207, 1158, 1, 0, 0, 18},	//1914 QUdpSocket::setMulticastInterface(const QNetworkInterface&)
    {78, 643, 0, 0, Smoke::mf_const, 339, 19},	//1915 QUdpSocket::hasPendingDatagrams() const
    {78, 850, 0, 0, Smoke::mf_const, 426, 20},	//1916 QUdpSocket::pendingDatagramSize() const
    {78, 1061, 1391, 4, 0, 426, 21},	//1917 QUdpSocket::readDatagram(char*, long long, QHostAddress*, unsigned short*)
    {78, 1417, 1396, 4, 0, 426, 22},	//1918 QUdpSocket::writeDatagram(const char*, long long, const QHostAddress&, unsigned short)
    {78, 1417, 1401, 3, 0, 426, 23},	//1919 QUdpSocket::writeDatagram(const QByteArray&, const QHostAddress&, unsigned short)
    {78, 1378, 1, 1, Smoke::mf_static, 215, 24},	//1920 QUdpSocket::tr(const char*)
    {78, 1382, 1, 1, Smoke::mf_static, 215, 25},	//1921 QUdpSocket::trUtf8(const char*)
    {78, 324, 0, 0, Smoke::mf_ctor, 231, 26},	//1922 QUdpSocket::QUdpSocket()
    {78, 488, 0, 0, 0, 339, 27},	//1923 QUdpSocket::bind()
    {78, 1061, 59, 2, 0, 426, 28},	//1924 QUdpSocket::readDatagram(char*, long long)
    {78, 1061, 1405, 3, 0, 426, 29},	//1925 QUdpSocket::readDatagram(char*, long long, QHostAddress*)
    {78, 1354, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 373, 30},	//1926 QUdpSocket::staticMetaObject() const
    {78, 75, 0, 0, Smoke::mf_static|Smoke::mf_enum, 232, 31},	//1927 QUdpSocket::DefaultForPlatform (enum)
    {78, 369, 0, 0, Smoke::mf_static|Smoke::mf_enum, 232, 32},	//1928 QUdpSocket::ShareAddress (enum)
    {78, 85, 0, 0, Smoke::mf_static|Smoke::mf_enum, 232, 33},	//1929 QUdpSocket::DontShareAddress (enum)
    {78, 353, 0, 0, Smoke::mf_static|Smoke::mf_enum, 232, 34},	//1930 QUdpSocket::ReuseAddressHint (enum)
    {78, 1458, 0, 0, Smoke::mf_dtor, 0, 35 },	//1931 QUdpSocket::~QUdpSocket()
    {80, 326, 0, 0, Smoke::mf_ctor, 238, 1},	//1932 QUrlInfo::QUrlInfo()
    {80, 326, 105, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 238, 2},	//1933 QUrlInfo::QUrlInfo(const QUrlInfo&)
    {80, 326, 1409, 13, Smoke::mf_ctor, 238, 3},	//1934 QUrlInfo::QUrlInfo(const QString&, int, const QString&, const QString&, long long, const QDateTime&, const QDateTime&, bool, bool, bool, bool, bool, bool)
    {80, 326, 1423, 13, Smoke::mf_ctor, 238, 4},	//1935 QUrlInfo::QUrlInfo(const QUrl&, int, const QString&, const QString&, long long, const QDateTime&, const QDateTime&, bool, bool, bool, bool, bool, bool)
    {80, 796, 105, 1, 0, 237, 5},	//1936 QUrlInfo::operator=(const QUrlInfo&)
    {80, 1209, 69, 1, Smoke::mf_virtual, 0, 6},	//1937 QUrlInfo::setName(const QString&)
    {80, 1160, 116, 1, Smoke::mf_virtual, 0, 7},	//1938 QUrlInfo::setDir(bool)
    {80, 1171, 116, 1, Smoke::mf_virtual, 0, 8},	//1939 QUrlInfo::setFile(bool)
    {80, 1318, 116, 1, Smoke::mf_virtual, 0, 9},	//1940 QUrlInfo::setSymLink(bool)
    {80, 1224, 69, 1, Smoke::mf_virtual, 0, 10},	//1941 QUrlInfo::setOwner(const QString&)
    {80, 1175, 69, 1, Smoke::mf_virtual, 0, 11},	//1942 QUrlInfo::setGroup(const QString&)
    {80, 1292, 33, 1, Smoke::mf_virtual, 0, 12},	//1943 QUrlInfo::setSize(long long)
    {80, 1338, 116, 1, Smoke::mf_virtual, 0, 13},	//1944 QUrlInfo::setWritable(bool)
    {80, 1277, 116, 1, Smoke::mf_virtual, 0, 14},	//1945 QUrlInfo::setReadable(bool)
    {80, 1244, 44, 1, Smoke::mf_virtual, 0, 15},	//1946 QUrlInfo::setPermissions(int)
    {80, 1189, 1143, 1, Smoke::mf_virtual, 0, 16},	//1947 QUrlInfo::setLastModified(const QDateTime&)
    {80, 1191, 1143, 1, 0, 0, 17},	//1948 QUrlInfo::setLastRead(const QDateTime&)
    {80, 693, 0, 0, Smoke::mf_const, 339, 18},	//1949 QUrlInfo::isValid() const
    {80, 748, 0, 0, Smoke::mf_const, 215, 19},	//1950 QUrlInfo::name() const
    {80, 851, 0, 0, Smoke::mf_const, 424, 20},	//1951 QUrlInfo::permissions() const
    {80, 828, 0, 0, Smoke::mf_const, 215, 21},	//1952 QUrlInfo::owner() const
    {80, 634, 0, 0, Smoke::mf_const, 215, 22},	//1953 QUrlInfo::group() const
    {80, 1340, 0, 0, Smoke::mf_const, 426, 23},	//1954 QUrlInfo::size() const
    {80, 703, 0, 0, Smoke::mf_const, 22, 24},	//1955 QUrlInfo::lastModified() const
    {80, 704, 0, 0, Smoke::mf_const, 22, 25},	//1956 QUrlInfo::lastRead() const
    {80, 672, 0, 0, Smoke::mf_const, 339, 26},	//1957 QUrlInfo::isDir() const
    {80, 675, 0, 0, Smoke::mf_const, 339, 27},	//1958 QUrlInfo::isFile() const
    {80, 691, 0, 0, Smoke::mf_const, 339, 28},	//1959 QUrlInfo::isSymLink() const
    {80, 694, 0, 0, Smoke::mf_const, 339, 29},	//1960 QUrlInfo::isWritable() const
    {80, 685, 0, 0, Smoke::mf_const, 339, 30},	//1961 QUrlInfo::isReadable() const
    {80, 674, 0, 0, Smoke::mf_const, 339, 31},	//1962 QUrlInfo::isExecutable() const
    {80, 632, 1437, 3, Smoke::mf_static, 339, 32},	//1963 QUrlInfo::greaterThan(const QUrlInfo&, const QUrlInfo&, int)
    {80, 710, 1437, 3, Smoke::mf_static, 339, 33},	//1964 QUrlInfo::lessThan(const QUrlInfo&, const QUrlInfo&, int)
    {80, 598, 1437, 3, Smoke::mf_static, 339, 34},	//1965 QUrlInfo::equal(const QUrlInfo&, const QUrlInfo&, int)
    {80, 799, 105, 1, Smoke::mf_const, 339, 35},	//1966 QUrlInfo::operator==(const QUrlInfo&) const
    {80, 763, 105, 1, Smoke::mf_const, 339, 36},	//1967 QUrlInfo::operator!=(const QUrlInfo&) const
    {80, 345, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 37},	//1968 QUrlInfo::ReadOwner (enum)
    {80, 436, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 38},	//1969 QUrlInfo::WriteOwner (enum)
    {80, 91, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 39},	//1970 QUrlInfo::ExeOwner (enum)
    {80, 342, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 40},	//1971 QUrlInfo::ReadGroup (enum)
    {80, 433, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 41},	//1972 QUrlInfo::WriteGroup (enum)
    {80, 89, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 42},	//1973 QUrlInfo::ExeGroup (enum)
    {80, 344, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 43},	//1974 QUrlInfo::ReadOther (enum)
    {80, 435, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 44},	//1975 QUrlInfo::WriteOther (enum)
    {80, 90, 0, 0, Smoke::mf_static|Smoke::mf_enum, 239, 45},	//1976 QUrlInfo::ExeOther (enum)
    {80, 1459, 0, 0, Smoke::mf_dtor, 0, 46 },	//1977 QUrlInfo::~QUrlInfo()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    1453,  // QNetworkRequest::QNetworkRequest(const QUrl&)
    1454,  // QNetworkRequest::QNetworkRequest(const QNetworkRequest&)
    0,
    1199,  // QNetworkCookie::QNetworkCookie(const QNetworkCookie&)
    1221,  // QNetworkCookie::QNetworkCookie(const QByteArray&)
    0,
    1594,  // QSslCertificate::QSslCertificate(const QSslCertificate&)
    1618,  // QSslCertificate::QSslCertificate(QIODevice*)
    1620,  // QSslCertificate::QSslCertificate(const QByteArray&)
    0,
    1592,  // QSslCertificate::QSslCertificate(QIODevice*, QSsl::EncodingFormat)
    1593,  // QSslCertificate::QSslCertificate(const QByteArray&, QSsl::EncodingFormat)
    0,
    1746,  // QSslSocket::connectToHostEncrypted(const QString&, unsigned short, QFlags<QIODevice::OpenModeFlag>)
    1823,  // QSslSocket::connectToHostEncrypted(const QString&, unsigned short, const QString&)
    0,
    905,  // QHttpResponseHeader::QHttpResponseHeader(const QString&)
    915,  // QHttpResponseHeader::QHttpResponseHeader(int)
    0,
    259,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    268,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    271,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    281,  // QGlobalSpace::operator!=(QChar, QChar)
    304,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    313,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    327,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    359,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    375,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    389,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    403,  // QGlobalSpace::operator!=(QBool, QBool)
    412,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    443,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    479,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    609,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    0,
    436,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    462,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    538,  // QGlobalSpace::operator!=(QBool, bool)
    561,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    634,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    0,
    260,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    404,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    463,  // QGlobalSpace::operator!=(bool, QBool)
    474,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    582,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    0,
    243,  // QGlobalSpace::operator*(const QSizeF&, double)
    320,  // QGlobalSpace::operator*(const QPointF&, double)
    381,  // QGlobalSpace::operator*(const QPoint&, float)
    424,  // QGlobalSpace::operator*(const QSize&, double)
    549,  // QGlobalSpace::operator*(const QPoint&, double)
    621,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    376,  // QGlobalSpace::operator*(double, const QSize&)
    493,  // QGlobalSpace::operator*(double, const QPointF&)
    494,  // QGlobalSpace::operator*(int, const QPoint&)
    558,  // QGlobalSpace::operator*(float, const QPoint&)
    559,  // QGlobalSpace::operator*(double, const QPoint&)
    615,  // QGlobalSpace::operator*(double, const QSizeF&)
    0,
    263,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    489,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    519,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    557,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    644,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    0,
    254,  // QGlobalSpace::operator+(QChar, const QString&)
    490,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    514,  // QGlobalSpace::operator+(const QByteArray&, char)
    0,
    262,  // QGlobalSpace::operator+(const QString&, QChar)
    305,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    529,  // QGlobalSpace::operator+(char, const QByteArray&)
    0,
    382,  // QGlobalSpace::operator-(const QPointF&)
    396,  // QGlobalSpace::operator-(const QPoint&)
    0,
    284,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    426,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    575,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    591,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    0,
    391,  // QGlobalSpace::operator/(const QSizeF&, double)
    407,  // QGlobalSpace::operator/(const QPointF&, double)
    432,  // QGlobalSpace::operator/(const QPoint&, double)
    578,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    401,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    531,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    588,  // QGlobalSpace::operator<(QChar, QChar)
    0,
    244,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    252,  // QGlobalSpace::operator<<(QDebug, const QHostAddress&)
    261,  // QGlobalSpace::operator<<(QDataStream&, const QHostAddress&)
    267,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    270,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    285,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    293,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    296,  // QGlobalSpace::operator<<(QDebug, const QSslCertificate&)
    303,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    321,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    336,  // QGlobalSpace::operator<<(QDebug, const QSslError&)
    341,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    342,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    344,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    357,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    373,  // QGlobalSpace::operator<<(QDebug, const QSslKey&)
    374,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    387,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    393,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    397,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    399,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    411,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    421,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    427,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    434,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    435,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    437,  // QGlobalSpace::operator<<(QDataStream&, const QNetworkCacheMetaData&)
    446,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    461,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    477,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    487,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    496,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    498,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    506,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    510,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    520,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    522,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    527,  // QGlobalSpace::operator<<(QDebug, const QNetworkCookie&)
    528,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    542,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    551,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    560,  // QGlobalSpace::operator<<(QDebug, const QNetworkInterface&)
    563,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    564,  // QGlobalSpace::operator<<(QDebug, const QSslCipher&)
    570,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    600,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    601,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    604,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    617,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    642,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    0,
    250,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    257,  // QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketError)
    287,  // QGlobalSpace::operator<<(QDebug, const QSslError::SslError&)
    291,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    334,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    343,  // QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketState)
    345,  // QGlobalSpace::operator<<(QDebug, QAbstractSocket::SocketError)
    369,  // QGlobalSpace::operator<<(QDebug, QSslCertificate::SubjectInfo)
    471,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    550,  // QGlobalSpace::operator<<(QDebug, QLocalSocket::LocalSocketState)
    628,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    0,
    256,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    319,  // QGlobalSpace::operator<=(QChar, QChar)
    329,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    0,
    249,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    251,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    265,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    274,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    322,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    326,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    350,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    447,  // QGlobalSpace::operator==(QBool, QBool)
    467,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    483,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    507,  // QGlobalSpace::operator==(QChar, QChar)
    524,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    539,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    565,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    619,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    622,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    0,
    413,  // QGlobalSpace::operator==(QString::Null, const QString&)
    457,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    546,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    629,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    633,  // QGlobalSpace::operator==(QBool, bool)
    0,
    308,  // QGlobalSpace::operator==(QHostAddress::SpecialAddress, const QHostAddress&)
    354,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    364,  // QGlobalSpace::operator==(const QString&, QString::Null)
    441,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    452,  // QGlobalSpace::operator==(bool, QBool)
    485,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    0,
    346,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    390,  // QGlobalSpace::operator>(QChar, QChar)
    505,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    317,  // QGlobalSpace::operator>=(QChar, QChar)
    347,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    616,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    0,
    235,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    237,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    247,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    266,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    277,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    283,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    328,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    335,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    372,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    402,  // QGlobalSpace::operator>>(QDataStream&, QHostAddress&)
    419,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    423,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    429,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    448,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    450,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    454,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    472,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    497,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    503,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    554,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    568,  // QGlobalSpace::operator>>(QDataStream&, QNetworkCacheMetaData&)
    597,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    637,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    0,
    444,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    598,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    0,
    233,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    236,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    239,  // QGlobalSpace::operator|(Qt::WindowType, int)
    248,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    269,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    279,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    286,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    294,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    297,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    301,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    306,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag)
    307,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>)
    310,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    318,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    323,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    324,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, int)
    331,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, QFlags<QUdpSocket::BindFlag>)
    337,  // QGlobalSpace::operator|(Qt::DropAction, int)
    339,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    349,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    355,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    356,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    358,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    361,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    362,  // QGlobalSpace::operator|(QSsl::SslOption, int)
    363,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    365,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    367,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    370,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    371,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    377,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    380,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    383,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    385,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    392,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    400,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    409,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    417,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    418,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    428,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    430,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    439,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    442,  // QGlobalSpace::operator|(Qt::WindowState, int)
    451,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    453,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    460,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    465,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    468,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    469,  // QGlobalSpace::operator|(QNetworkProxy::Capability, QNetworkProxy::Capability)
    470,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>)
    473,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    476,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    482,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    484,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    488,  // QGlobalSpace::operator|(QFile::Permission, int)
    501,  // QGlobalSpace::operator|(QUdpSocket::BindFlag, QUdpSocket::BindFlag)
    504,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    512,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    513,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    515,  // QGlobalSpace::operator|(QNetworkProxy::Capability, int)
    516,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    518,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    521,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    523,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    526,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    530,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    535,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    543,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    548,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    556,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    566,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    569,  // QGlobalSpace::operator|(QSsl::SslOption, QSsl::SslOption)
    572,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    573,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    576,  // QGlobalSpace::operator|(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>)
    577,  // QGlobalSpace::operator|(QNetworkInterface::InterfaceFlag, int)
    580,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    581,  // QGlobalSpace::operator|(QDir::Filter, int)
    586,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    589,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    590,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    595,  // QGlobalSpace::operator|(Qt::Orientation, int)
    596,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    603,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability)
    605,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    606,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    608,  // QGlobalSpace::operator|(QSsl::SslOption, QFlags<QSsl::SslOption>)
    610,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    612,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    613,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    614,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    623,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    624,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    625,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    627,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    630,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    631,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    639,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    640,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    641,  // QGlobalSpace::operator|(QNetworkConfigurationManager::Capability, int)
    645,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    646,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    0,
    368,  // QGlobalSpace::qFuzzyCompare(double, double)
    420,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    455,  // QGlobalSpace::qFuzzyIsNull(double)
    599,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    309,  // QGlobalSpace::qHash(const QBitArray&)
    388,  // QGlobalSpace::qHash(const QHostAddress&)
    459,  // QGlobalSpace::qHash(QChar)
    502,  // QGlobalSpace::qHash(const QStringRef&)
    555,  // QGlobalSpace::qHash(const QUrl&)
    602,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    618,  // QGlobalSpace::qHash(const QByteArray&)
    620,  // QGlobalSpace::qHash(const QModelIndex&)
    0,
    241,  // QGlobalSpace::qHash(unsigned int)
    242,  // QGlobalSpace::qHash(char)
    272,  // QGlobalSpace::qHash(unsigned char)
    292,  // QGlobalSpace::qHash(short)
    300,  // QGlobalSpace::qHash(long)
    353,  // QGlobalSpace::qHash(unsigned short)
    379,  // QGlobalSpace::qHash(long long)
    405,  // QGlobalSpace::qHash(unsigned long long)
    438,  // QGlobalSpace::qHash(int)
    481,  // QGlobalSpace::qHash(signed char)
    536,  // QGlobalSpace::qHash(const QString&)
    585,  // QGlobalSpace::qHash(unsigned long)
    0,
    348,  // QGlobalSpace::qIntCast(float)
    408,  // QGlobalSpace::qIntCast(double)
    0,
    295,  // QGlobalSpace::qIsFinite(double)
    643,  // QGlobalSpace::qIsFinite(float)
    0,
    384,  // QGlobalSpace::qIsInf(float)
    574,  // QGlobalSpace::qIsInf(double)
    0,
    541,  // QGlobalSpace::qIsNaN(float)
    547,  // QGlobalSpace::qIsNaN(double)
    0,
    278,  // QGlobalSpace::qIsNull(float)
    593,  // QGlobalSpace::qIsNull(double)
    0,
    1058,  // QNetworkAccessManager::post(const QNetworkRequest&, QIODevice*)
    1059,  // QNetworkAccessManager::post(const QNetworkRequest&, const QByteArray&)
    1060,  // QNetworkAccessManager::post(const QNetworkRequest&, QHttpMultiPart*)
    0,
    1061,  // QNetworkAccessManager::put(const QNetworkRequest&, QIODevice*)
    1062,  // QNetworkAccessManager::put(const QNetworkRequest&, const QByteArray&)
    1063,  // QNetworkAccessManager::put(const QNetworkRequest&, QHttpMultiPart*)
    0,
    198,  // QFtp::put(const QByteArray&, const QString&)
    199,  // QFtp::put(QIODevice*, const QString&)
    0,
    162,  // QFtp::put(const QByteArray&, const QString&, QFtp::TransferType)
    163,  // QFtp::put(QIODevice*, const QString&, QFtp::TransferType)
    0,
    790,  // QHttp::QHttp(const QString&, unsigned short)
    791,  // QHttp::QHttp(const QString&, QHttp::ConnectionMode)
    0,
    799,  // QHttp::post(const QString&, QIODevice*)
    800,  // QHttp::post(const QString&, const QByteArray&)
    0,
    753,  // QHttp::post(const QString&, QIODevice*, QIODevice*)
    754,  // QHttp::post(const QString&, const QByteArray&, QIODevice*)
    0,
    802,  // QHttp::request(const QHttpRequestHeader&, QIODevice*)
    803,  // QHttp::request(const QHttpRequestHeader&, const QByteArray&)
    0,
    756,  // QHttp::request(const QHttpRequestHeader&, QIODevice*, QIODevice*)
    757,  // QHttp::request(const QHttpRequestHeader&, const QByteArray&, QIODevice*)
    0,
    746,  // QHttp::setHost(const QString&, unsigned short)
    794,  // QHttp::setHost(const QString&, QHttp::ConnectionMode)
    0,
    1729,  // QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm)
    1732,  // QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm)
    0,
    1730,  // QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat)
    1733,  // QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat)
    0,
    1731,  // QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType)
    1734,  // QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType)
    0,
    1715,  // QSslKey::QSslKey(const QByteArray&, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray&)
    1716,  // QSslKey::QSslKey(QIODevice*, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray&)
    0,
    943,  // QIPv6Address::operator[](int)
    944,  // QIPv6Address::operator[](int) const
    0,
    1343,  // QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkProxyQuery&)
    1364,  // QNetworkProxyQuery::QNetworkProxyQuery(const QUrl&)
    0,
    1340,  // QNetworkProxyQuery::QNetworkProxyQuery(const QUrl&, QNetworkProxyQuery::QueryType)
    1372,  // QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, unsigned short)
    0,
    1370,  // QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QString&, int)
    1373,  // QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, unsigned short, const QString&)
    0,
    1346,  // QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, unsigned short, const QString&, QNetworkProxyQuery::QueryType)
    1371,  // QNetworkProxyQuery::QNetworkProxyQuery(const QNetworkConfiguration&, const QString&, int, const QString&)
    0,
    1365,  // QNetworkProxyQuery::QNetworkProxyQuery(const QString&, int)
    1368,  // QNetworkProxyQuery::QNetworkProxyQuery(unsigned short, const QString&)
    0,
    1342,  // QNetworkProxyQuery::QNetworkProxyQuery(unsigned short, const QString&, QNetworkProxyQuery::QueryType)
    1366,  // QNetworkProxyQuery::QNetworkProxyQuery(const QString&, int, const QString&)
    0,
    679,  // QHostAddress::QHostAddress(const QIPv6Address&)
    680,  // QHostAddress::QHostAddress(const sockaddr*)
    682,  // QHostAddress::QHostAddress(const QHostAddress&)
    0,
    677,  // QHostAddress::QHostAddress(unsigned int)
    678,  // QHostAddress::QHostAddress(unsigned char*)
    681,  // QHostAddress::QHostAddress(const QString&)
    683,  // QHostAddress::QHostAddress(QHostAddress::SpecialAddress)
    0,
    688,  // QHostAddress::setAddress(const QIPv6Address&)
    689,  // QHostAddress::setAddress(const sockaddr*)
    0,
    686,  // QHostAddress::setAddress(unsigned int)
    687,  // QHostAddress::setAddress(unsigned char*)
    690,  // QHostAddress::setAddress(const QString&)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {1, 205, 19},	// QAbstractNetworkCache::QAbstractNetworkCache
    {1, 206, 16},	// QAbstractNetworkCache::QAbstractNetworkCache#
    {1, 502, 12},	// QAbstractNetworkCache::cacheSize
    {1, 511, 15},	// QAbstractNetworkCache::clear
    {1, 565, 10},	// QAbstractNetworkCache::data#
    {1, 664, 14},	// QAbstractNetworkCache::insert#
    {1, 736, 8},	// QAbstractNetworkCache::metaData#
    {1, 738, 1},	// QAbstractNetworkCache::metaObject
    {1, 862, 13},	// QAbstractNetworkCache::prepare#
    {1, 1031, 7},	// QAbstractNetworkCache::qt_metacall$$?
    {1, 1033, 2},	// QAbstractNetworkCache::qt_metacast$
    {1, 1073, 11},	// QAbstractNetworkCache::remove#
    {1, 1354, 20},	// QAbstractNetworkCache::staticMetaObject
    {1, 1379, 17},	// QAbstractNetworkCache::tr$
    {1, 1380, 3},	// QAbstractNetworkCache::tr$$
    {1, 1381, 5},	// QAbstractNetworkCache::tr$$$
    {1, 1383, 18},	// QAbstractNetworkCache::trUtf8$
    {1, 1384, 4},	// QAbstractNetworkCache::trUtf8$$
    {1, 1385, 6},	// QAbstractNetworkCache::trUtf8$$$
    {1, 1390, 9},	// QAbstractNetworkCache::updateMetaData#
    {1, 1420, 21},	// QAbstractNetworkCache::~QAbstractNetworkCache
    {2, 4, 106},	// QAbstractSocket::AddressInUseError
    {2, 29, 122},	// QAbstractSocket::BoundState
    {2, 47, 124},	// QAbstractSocket::ClosingState
    {2, 51, 121},	// QAbstractSocket::ConnectedState
    {2, 53, 120},	// QAbstractSocket::ConnectingState
    {2, 59, 98},	// QAbstractSocket::ConnectionRefusedError
    {2, 74, 104},	// QAbstractSocket::DatagramTooLargeError
    {2, 101, 119},	// QAbstractSocket::HostLookupState
    {2, 105, 100},	// QAbstractSocket::HostNotFoundError
    {2, 112, 95},	// QAbstractSocket::IPv4Protocol
    {2, 113, 96},	// QAbstractSocket::IPv6Protocol
    {2, 126, 126},	// QAbstractSocket::KeepAliveOption
    {2, 149, 123},	// QAbstractSocket::ListeningState
    {2, 156, 125},	// QAbstractSocket::LowDelayOption
    {2, 162, 128},	// QAbstractSocket::MulticastLoopbackOption
    {2, 163, 127},	// QAbstractSocket::MulticastTtlOption
    {2, 165, 105},	// QAbstractSocket::NetworkError
    {2, 194, 110},	// QAbstractSocket::ProxyAuthenticationRequiredError
    {2, 195, 113},	// QAbstractSocket::ProxyConnectionClosedError
    {2, 196, 112},	// QAbstractSocket::ProxyConnectionRefusedError
    {2, 197, 114},	// QAbstractSocket::ProxyConnectionTimeoutError
    {2, 198, 115},	// QAbstractSocket::ProxyNotFoundError
    {2, 199, 116},	// QAbstractSocket::ProxyProtocolError
    {2, 208, 29},	// QAbstractSocket::QAbstractSocket$#
    {2, 350, 99},	// QAbstractSocket::RemoteHostClosedError
    {2, 370, 101},	// QAbstractSocket::SocketAccessError
    {2, 371, 107},	// QAbstractSocket::SocketAddressNotAvailableError
    {2, 372, 102},	// QAbstractSocket::SocketResourceError
    {2, 373, 103},	// QAbstractSocket::SocketTimeoutError
    {2, 377, 111},	// QAbstractSocket::SslHandshakeFailedError
    {2, 391, 92},	// QAbstractSocket::TcpSocket
    {2, 399, 93},	// QAbstractSocket::UdpSocket
    {2, 408, 118},	// QAbstractSocket::UnconnectedState
    {2, 412, 109},	// QAbstractSocket::UnfinishedSocketOperationError
    {2, 417, 97},	// QAbstractSocket::UnknownNetworkLayerProtocol
    {2, 423, 117},	// QAbstractSocket::UnknownSocketError
    {2, 424, 94},	// QAbstractSocket::UnknownSocketType
    {2, 426, 108},	// QAbstractSocket::UnsupportedSocketOperationError
    {2, 438, 44},	// QAbstractSocket::abort
    {2, 476, 54},	// QAbstractSocket::atEnd
    {2, 495, 34},	// QAbstractSocket::bytesAvailable
    {2, 497, 35},	// QAbstractSocket::bytesToWrite
    {2, 503, 36},	// QAbstractSocket::canReadLine
    {2, 514, 52},	// QAbstractSocket::close
    {2, 533, 83},	// QAbstractSocket::connectToHost#$
    {2, 534, 31},	// QAbstractSocket::connectToHost#$$
    {2, 536, 82},	// QAbstractSocket::connectToHost$$
    {2, 537, 30},	// QAbstractSocket::connectToHost$$$
    {2, 543, 90},	// QAbstractSocket::connectToHostImplementation$$
    {2, 544, 68},	// QAbstractSocket::connectToHostImplementation$$$
    {2, 548, 63},	// QAbstractSocket::connected
    {2, 580, 32},	// QAbstractSocket::disconnectFromHost
    {2, 581, 69},	// QAbstractSocket::disconnectFromHostImplementation
    {2, 585, 64},	// QAbstractSocket::disconnected
    {2, 600, 51},	// QAbstractSocket::error
    {2, 601, 66},	// QAbstractSocket::error$
    {2, 613, 55},	// QAbstractSocket::flush
    {2, 652, 62},	// QAbstractSocket::hostFound
    {2, 689, 53},	// QAbstractSocket::isSequential
    {2, 693, 33},	// QAbstractSocket::isValid
    {2, 720, 38},	// QAbstractSocket::localAddress
    {2, 724, 37},	// QAbstractSocket::localPort
    {2, 738, 22},	// QAbstractSocket::metaObject
    {2, 839, 40},	// QAbstractSocket::peerAddress
    {2, 843, 41},	// QAbstractSocket::peerName
    {2, 844, 39},	// QAbstractSocket::peerPort
    {2, 868, 61},	// QAbstractSocket::proxy
    {2, 870, 67},	// QAbstractSocket::proxyAuthenticationRequired##
    {2, 1031, 28},	// QAbstractSocket::qt_metacall$$?
    {2, 1033, 23},	// QAbstractSocket::qt_metacast$
    {2, 1058, 42},	// QAbstractSocket::readBufferSize
    {2, 1060, 70},	// QAbstractSocket::readData$$
    {2, 1066, 71},	// QAbstractSocket::readLineData$$
    {2, 1194, 76},	// QAbstractSocket::setLocalAddress#
    {2, 1200, 75},	// QAbstractSocket::setLocalPort$
    {2, 1231, 78},	// QAbstractSocket::setPeerAddress#
    {2, 1235, 79},	// QAbstractSocket::setPeerName$
    {2, 1237, 77},	// QAbstractSocket::setPeerPort$
    {2, 1263, 60},	// QAbstractSocket::setProxy#
    {2, 1276, 43},	// QAbstractSocket::setReadBufferSize$
    {2, 1297, 84},	// QAbstractSocket::setSocketDescriptor$
    {2, 1298, 85},	// QAbstractSocket::setSocketDescriptor$$
    {2, 1299, 46},	// QAbstractSocket::setSocketDescriptor$$$
    {2, 1304, 74},	// QAbstractSocket::setSocketError$
    {2, 1306, 47},	// QAbstractSocket::setSocketOption$#
    {2, 1308, 73},	// QAbstractSocket::setSocketState$
    {2, 1341, 45},	// QAbstractSocket::socketDescriptor
    {2, 1343, 48},	// QAbstractSocket::socketOption$
    {2, 1344, 49},	// QAbstractSocket::socketType
    {2, 1351, 50},	// QAbstractSocket::state
    {2, 1353, 65},	// QAbstractSocket::stateChanged$
    {2, 1354, 91},	// QAbstractSocket::staticMetaObject
    {2, 1379, 80},	// QAbstractSocket::tr$
    {2, 1380, 24},	// QAbstractSocket::tr$$
    {2, 1381, 26},	// QAbstractSocket::tr$$$
    {2, 1383, 81},	// QAbstractSocket::trUtf8$
    {2, 1384, 25},	// QAbstractSocket::trUtf8$$
    {2, 1385, 27},	// QAbstractSocket::trUtf8$$$
    {2, 1400, 88},	// QAbstractSocket::waitForBytesWritten
    {2, 1401, 58},	// QAbstractSocket::waitForBytesWritten$
    {2, 1402, 86},	// QAbstractSocket::waitForConnected
    {2, 1403, 56},	// QAbstractSocket::waitForConnected$
    {2, 1404, 89},	// QAbstractSocket::waitForDisconnected
    {2, 1405, 59},	// QAbstractSocket::waitForDisconnected$
    {2, 1413, 87},	// QAbstractSocket::waitForReadyRead
    {2, 1414, 57},	// QAbstractSocket::waitForReadyRead$
    {2, 1416, 72},	// QAbstractSocket::writeData$$
    {2, 1421, 129},	// QAbstractSocket::~QAbstractSocket
    {3, 209, 130},	// QAuthenticator::QAuthenticator
    {3, 210, 131},	// QAuthenticator::QAuthenticator#
    {3, 577, 144},	// QAuthenticator::detach
    {3, 682, 143},	// QAuthenticator::isNull
    {3, 764, 134},	// QAuthenticator::operator!=#
    {3, 797, 132},	// QAuthenticator::operator=#
    {3, 800, 133},	// QAuthenticator::operator==#
    {3, 825, 140},	// QAuthenticator::option$
    {3, 826, 141},	// QAuthenticator::options
    {3, 837, 137},	// QAuthenticator::password
    {3, 1069, 139},	// QAuthenticator::realm
    {3, 1221, 142},	// QAuthenticator::setOption$#
    {3, 1227, 138},	// QAuthenticator::setPassword$
    {3, 1329, 136},	// QAuthenticator::setUser$
    {3, 1395, 135},	// QAuthenticator::user
    {3, 1422, 145},	// QAuthenticator::~QAuthenticator
    {16, 3, 227},	// QFtp::Active
    {16, 13, 230},	// QFtp::Ascii
    {16, 28, 229},	// QFtp::Binary
    {16, 37, 219},	// QFtp::Cd
    {16, 45, 217},	// QFtp::Close
    {16, 46, 206},	// QFtp::Closing
    {16, 49, 215},	// QFtp::ConnectToHost
    {16, 50, 204},	// QFtp::Connected
    {16, 52, 203},	// QFtp::Connecting
    {16, 58, 210},	// QFtp::ConnectionRefused
    {16, 96, 220},	// QFtp::Get
    {16, 100, 202},	// QFtp::HostLookup
    {16, 104, 209},	// QFtp::HostNotFound
    {16, 147, 218},	// QFtp::List
    {16, 154, 205},	// QFtp::LoggedIn
    {16, 155, 216},	// QFtp::Login
    {16, 161, 223},	// QFtp::Mkdir
    {16, 167, 207},	// QFtp::NoError
    {16, 171, 212},	// QFtp::None
    {16, 175, 211},	// QFtp::NotConnected
    {16, 182, 228},	// QFtp::Passive
    {16, 203, 221},	// QFtp::Put
    {16, 211, 191},	// QFtp::QFtp
    {16, 212, 153},	// QFtp::QFtp#
    {16, 341, 226},	// QFtp::RawCommand
    {16, 351, 222},	// QFtp::Remove
    {16, 352, 225},	// QFtp::Rename
    {16, 354, 224},	// QFtp::Rmdir
    {16, 367, 214},	// QFtp::SetProxy
    {16, 368, 213},	// QFtp::SetTransferMode
    {16, 407, 201},	// QFtp::Unconnected
    {16, 415, 208},	// QFtp::UnknownError
    {16, 438, 180},	// QFtp::abort
    {16, 495, 169},	// QFtp::bytesAvailable
    {16, 506, 160},	// QFtp::cd$
    {16, 512, 176},	// QFtp::clearPendingCommands
    {16, 514, 157},	// QFtp::close
    {16, 518, 187},	// QFtp::commandFinished$$
    {16, 520, 186},	// QFtp::commandStarted$
    {16, 535, 192},	// QFtp::connectToHost$
    {16, 536, 155},	// QFtp::connectToHost$$
    {16, 557, 174},	// QFtp::currentCommand
    {16, 559, 173},	// QFtp::currentDevice
    {16, 560, 172},	// QFtp::currentId
    {16, 571, 184},	// QFtp::dataTransferProgress$$
    {16, 588, 188},	// QFtp::done$
    {16, 600, 178},	// QFtp::error
    {16, 602, 179},	// QFtp::errorString
    {16, 629, 196},	// QFtp::get$
    {16, 630, 197},	// QFtp::get$#
    {16, 631, 161},	// QFtp::get$#$
    {16, 641, 175},	// QFtp::hasPendingCommands
    {16, 712, 195},	// QFtp::list
    {16, 713, 159},	// QFtp::list$
    {16, 715, 182},	// QFtp::listInfo#
    {16, 725, 193},	// QFtp::login
    {16, 726, 194},	// QFtp::login$
    {16, 727, 156},	// QFtp::login$$
    {16, 738, 146},	// QFtp::metaObject
    {16, 743, 165},	// QFtp::mkdir$
    {16, 878, -379},	// QFtp::put#$
    {16, 879, -382},	// QFtp::put#$$
    {16, 1031, 152},	// QFtp::qt_metacall$$?
    {16, 1033, 147},	// QFtp::qt_metacast$
    {16, 1047, 168},	// QFtp::rawCommand$
    {16, 1049, 185},	// QFtp::rawCommandReply$$
    {16, 1056, 170},	// QFtp::read$$
    {16, 1057, 171},	// QFtp::readAll
    {16, 1067, 183},	// QFtp::readyRead
    {16, 1074, 164},	// QFtp::remove$
    {16, 1082, 167},	// QFtp::rename$$
    {16, 1095, 166},	// QFtp::rmdir$
    {16, 1264, 154},	// QFtp::setProxy$$
    {16, 1321, 158},	// QFtp::setTransferMode$
    {16, 1351, 177},	// QFtp::state
    {16, 1353, 181},	// QFtp::stateChanged$
    {16, 1354, 200},	// QFtp::staticMetaObject
    {16, 1379, 189},	// QFtp::tr$
    {16, 1380, 148},	// QFtp::tr$$
    {16, 1381, 150},	// QFtp::tr$$$
    {16, 1383, 190},	// QFtp::trUtf8$
    {16, 1384, 149},	// QFtp::trUtf8$$
    {16, 1385, 151},	// QFtp::trUtf8$$$
    {16, 1423, 231},	// QFtp::~QFtp
    {17, 128, 659},	// QGlobalSpace::LicensedActiveQt
    {17, 129, 665},	// QGlobalSpace::LicensedCore
    {17, 130, 657},	// QGlobalSpace::LicensedDBus
    {17, 131, 662},	// QGlobalSpace::LicensedDeclarative
    {17, 132, 652},	// QGlobalSpace::LicensedGui
    {17, 133, 671},	// QGlobalSpace::LicensedHelp
    {17, 134, 672},	// QGlobalSpace::LicensedMultimedia
    {17, 135, 675},	// QGlobalSpace::LicensedNetwork
    {17, 136, 664},	// QGlobalSpace::LicensedOpenGL
    {17, 137, 656},	// QGlobalSpace::LicensedOpenVG
    {17, 138, 673},	// QGlobalSpace::LicensedQt3Support
    {17, 139, 654},	// QGlobalSpace::LicensedQt3SupportLight
    {17, 140, 655},	// QGlobalSpace::LicensedScript
    {17, 141, 660},	// QGlobalSpace::LicensedScriptTools
    {17, 142, 663},	// QGlobalSpace::LicensedSql
    {17, 143, 661},	// QGlobalSpace::LicensedSvg
    {17, 144, 658},	// QGlobalSpace::LicensedTest
    {17, 145, 653},	// QGlobalSpace::LicensedXml
    {17, 146, 674},	// QGlobalSpace::LicensedXmlPatterns
    {17, 330, 647},	// QGlobalSpace::Q_COMPLEX_TYPE
    {17, 331, 651},	// QGlobalSpace::Q_DUMMY_TYPE
    {17, 332, 650},	// QGlobalSpace::Q_MOVABLE_TYPE
    {17, 333, 648},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {17, 334, 649},	// QGlobalSpace::Q_STATIC_TYPE
    {17, 335, 668},	// QGlobalSpace::QtCriticalMsg
    {17, 336, 666},	// QGlobalSpace::QtDebugMsg
    {17, 337, 669},	// QGlobalSpace::QtFatalMsg
    {17, 338, 670},	// QGlobalSpace::QtSystemMsg
    {17, 339, 667},	// QGlobalSpace::QtWarningMsg
    {17, 765, -20},	// QGlobalSpace::operator!=##
    {17, 766, -36},	// QGlobalSpace::operator!=#$
    {17, 768, -42},	// QGlobalSpace::operator!=$#
    {17, 770, 395},	// QGlobalSpace::operator&##
    {17, 772, -48},	// QGlobalSpace::operator*#$
    {17, 773, -55},	// QGlobalSpace::operator*$#
    {17, 775, -62},	// QGlobalSpace::operator+##
    {17, 776, -68},	// QGlobalSpace::operator+#$
    {17, 777, -72},	// QGlobalSpace::operator+$#
    {17, 778, 537},	// QGlobalSpace::operator+$$
    {17, 780, -76},	// QGlobalSpace::operator-#
    {17, 781, -79},	// QGlobalSpace::operator-##
    {17, 783, -84},	// QGlobalSpace::operator/#$
    {17, 785, -89},	// QGlobalSpace::operator<##
    {17, 786, 246},	// QGlobalSpace::operator<#$
    {17, 787, 314},	// QGlobalSpace::operator<$#
    {17, 789, -93},	// QGlobalSpace::operator<<##
    {17, 790, -144},	// QGlobalSpace::operator<<#$
    {17, 791, 540},	// QGlobalSpace::operator<<#?
    {17, 793, -156},	// QGlobalSpace::operator<=##
    {17, 794, 414},	// QGlobalSpace::operator<=#$
    {17, 795, 386},	// QGlobalSpace::operator<=$#
    {17, 801, -160},	// QGlobalSpace::operator==##
    {17, 802, -177},	// QGlobalSpace::operator==#$
    {17, 804, -183},	// QGlobalSpace::operator==$#
    {17, 806, -190},	// QGlobalSpace::operator>##
    {17, 807, 607},	// QGlobalSpace::operator>#$
    {17, 808, 351},	// QGlobalSpace::operator>$#
    {17, 810, -194},	// QGlobalSpace::operator>=##
    {17, 811, 398},	// QGlobalSpace::operator>=#$
    {17, 812, 579},	// QGlobalSpace::operator>=$#
    {17, 814, -198},	// QGlobalSpace::operator>>##
    {17, 815, -222},	// QGlobalSpace::operator>>#$
    {17, 816, 486},	// QGlobalSpace::operator>>#?
    {17, 820, 635},	// QGlobalSpace::operator^##
    {17, 822, 312},	// QGlobalSpace::operator|##
    {17, 823, -225},	// QGlobalSpace::operator|$$
    {17, 881, 234},	// QGlobalSpace::qAcos$
    {17, 883, 491},	// QGlobalSpace::qAddPostRoutine$
    {17, 884, 238},	// QGlobalSpace::qAppName
    {17, 886, 636},	// QGlobalSpace::qAsin$
    {17, 888, 315},	// QGlobalSpace::qAtan$
    {17, 890, 290},	// QGlobalSpace::qAtan2$$
    {17, 891, 638},	// QGlobalSpace::qBadAlloc
    {17, 893, 480},	// QGlobalSpace::qCeil$
    {17, 895, 422},	// QGlobalSpace::qChecksum$$
    {17, 897, 333},	// QGlobalSpace::qCompress#
    {17, 898, 332},	// QGlobalSpace::qCompress#$
    {17, 899, 533},	// QGlobalSpace::qCompress$$
    {17, 900, 532},	// QGlobalSpace::qCompress$$$
    {17, 902, 508},	// QGlobalSpace::qCos$
    {17, 903, 431},	// QGlobalSpace::qCritical
    {17, 904, 378},	// QGlobalSpace::qDebug
    {17, 906, 449},	// QGlobalSpace::qExp$
    {17, 908, 352},	// QGlobalSpace::qFabs$
    {17, 910, 415},	// QGlobalSpace::qFastCos$
    {17, 912, 253},	// QGlobalSpace::qFastSin$
    {17, 914, 406},	// QGlobalSpace::qFlagLocation$
    {17, 916, 534},	// QGlobalSpace::qFloor$
    {17, 918, 545},	// QGlobalSpace::qFree$
    {17, 920, 626},	// QGlobalSpace::qFreeAligned$
    {17, 922, -328},	// QGlobalSpace::qFuzzyCompare$$
    {17, 924, -331},	// QGlobalSpace::qFuzzyIsNull$
    {17, 926, -334},	// QGlobalSpace::qHash#
    {17, 927, -343},	// QGlobalSpace::qHash$
    {17, 928, 499},	// QGlobalSpace::qInf
    {17, 930, 425},	// QGlobalSpace::qInstallMsgHandler$
    {17, 932, -356},	// QGlobalSpace::qIntCast$
    {17, 934, -359},	// QGlobalSpace::qIsFinite$
    {17, 936, -362},	// QGlobalSpace::qIsInf$
    {17, 938, -365},	// QGlobalSpace::qIsNaN$
    {17, 940, -368},	// QGlobalSpace::qIsNull$
    {17, 942, 632},	// QGlobalSpace::qLn$
    {17, 944, 592},	// QGlobalSpace::qMalloc$
    {17, 946, 509},	// QGlobalSpace::qMallocAligned$$
    {17, 948, 544},	// QGlobalSpace::qMemCopy$$$
    {17, 950, 478},	// QGlobalSpace::qMemSet$$$
    {17, 952, 433},	// QGlobalSpace::qPow$$
    {17, 953, 280},	// QGlobalSpace::qQNaN
    {17, 955, 360},	// QGlobalSpace::qRealloc$$
    {17, 957, 338},	// QGlobalSpace::qReallocAligned$$$$
    {17, 959, 492},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {17, 961, 416},	// QGlobalSpace::qRemovePostRoutine$
    {17, 963, 232},	// QGlobalSpace::qRound$
    {17, 965, 584},	// QGlobalSpace::qRound64$
    {17, 966, 587},	// QGlobalSpace::qSNaN
    {17, 968, 611},	// QGlobalSpace::qSetFieldWidth$
    {17, 970, 282},	// QGlobalSpace::qSetPadChar#
    {17, 972, 552},	// QGlobalSpace::qSetRealNumberPrecision$
    {17, 973, 495},	// QGlobalSpace::qSharedBuild
    {17, 975, 562},	// QGlobalSpace::qSin$
    {17, 977, 340},	// QGlobalSpace::qSqrt$
    {17, 979, 525},	// QGlobalSpace::qStringComparisonHelper#$
    {17, 981, 583},	// QGlobalSpace::qTan$
    {17, 983, 410},	// QGlobalSpace::qUncompress#
    {17, 984, 330},	// QGlobalSpace::qUncompress$$
    {17, 985, 517},	// QGlobalSpace::qVersion
    {17, 986, 366},	// QGlobalSpace::qWarning
    {17, 988, 458},	// QGlobalSpace::qbswap_helper$$$
    {17, 990, 245},	// QGlobalSpace::qgetenv$
    {17, 992, 594},	// QGlobalSpace::qputenv$#
    {17, 993, 553},	// QGlobalSpace::qrand
    {17, 995, 466},	// QGlobalSpace::qsrand$
    {17, 997, 394},	// QGlobalSpace::qstrcmp##
    {17, 998, 298},	// QGlobalSpace::qstrcmp#$
    {17, 999, 316},	// QGlobalSpace::qstrcmp$#
    {17, 1000, 302},	// QGlobalSpace::qstrcmp$$
    {17, 1002, 311},	// QGlobalSpace::qstrcpy$$
    {17, 1004, 299},	// QGlobalSpace::qstrdup$
    {17, 1006, 475},	// QGlobalSpace::qstricmp$$
    {17, 1008, 571},	// QGlobalSpace::qstrlen$
    {17, 1010, 255},	// QGlobalSpace::qstrncmp$$$
    {17, 1012, 240},	// QGlobalSpace::qstrncpy$$$
    {17, 1014, 500},	// QGlobalSpace::qstrnicmp$$$
    {17, 1016, 264},	// QGlobalSpace::qstrnlen$$
    {17, 1018, 289},	// QGlobalSpace::qtTrId$
    {17, 1019, 288},	// QGlobalSpace::qtTrId$$
    {17, 1021, 567},	// QGlobalSpace::qt_assert$$$
    {17, 1023, 511},	// QGlobalSpace::qt_assert_x$$$$
    {17, 1025, 325},	// QGlobalSpace::qt_check_pointer$$
    {17, 1026, 276},	// QGlobalSpace::qt_error_string
    {17, 1027, 275},	// QGlobalSpace::qt_error_string$
    {17, 1029, 464},	// QGlobalSpace::qt_message_output$$
    {17, 1034, 440},	// QGlobalSpace::qt_noop
    {17, 1036, 445},	// QGlobalSpace::qt_qFindChild_helper#$#
    {17, 1038, 273},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {17, 1043, 456},	// QGlobalSpace::qvariant_cast_helper#$$
    {17, 1045, 258},	// QGlobalSpace::qvsnprintf$$$?
    {19, 8, 710},	// QHostAddress::Any
    {19, 9, 711},	// QHostAddress::AnyIPv6
    {19, 30, 707},	// QHostAddress::Broadcast
    {19, 150, 708},	// QHostAddress::LocalHost
    {19, 151, 709},	// QHostAddress::LocalHostIPv6
    {19, 177, 706},	// QHostAddress::Null
    {19, 213, 676},	// QHostAddress::QHostAddress
    {19, 214, -436},	// QHostAddress::QHostAddress#
    {19, 215, -440},	// QHostAddress::QHostAddress$
    {19, 511, 702},	// QHostAddress::clear
    {19, 679, 703},	// QHostAddress::isInSubnet#$
    {19, 680, 704},	// QHostAddress::isInSubnet?
    {19, 682, 701},	// QHostAddress::isNull
    {19, 764, 699},	// QHostAddress::operator!=#
    {19, 767, 700},	// QHostAddress::operator!=$
    {19, 797, 684},	// QHostAddress::operator=#
    {19, 798, 685},	// QHostAddress::operator=$
    {19, 800, 697},	// QHostAddress::operator==#
    {19, 803, 698},	// QHostAddress::operator==$
    {19, 836, 705},	// QHostAddress::parseSubnet$
    {19, 865, 691},	// QHostAddress::protocol
    {19, 1097, 695},	// QHostAddress::scopeId
    {19, 1111, -445},	// QHostAddress::setAddress#
    {19, 1112, -448},	// QHostAddress::setAddress$
    {19, 1287, 696},	// QHostAddress::setScopeId$
    {19, 1371, 692},	// QHostAddress::toIPv4Address
    {19, 1372, 693},	// QHostAddress::toIPv6Address
    {19, 1377, 694},	// QHostAddress::toString
    {19, 1424, 712},	// QHostAddress::~QHostAddress
    {20, 104, 733},	// QHostInfo::HostNotFound
    {20, 167, 732},	// QHostInfo::NoError
    {20, 216, 731},	// QHostInfo::QHostInfo
    {20, 217, 714},	// QHostInfo::QHostInfo#
    {20, 218, 713},	// QHostInfo::QHostInfo$
    {20, 415, 734},	// QHostInfo::UnknownError
    {20, 440, 727},	// QHostInfo::abortHostLookup$
    {20, 463, 718},	// QHostInfo::addresses
    {20, 600, 720},	// QHostInfo::error
    {20, 602, 722},	// QHostInfo::errorString
    {20, 621, 728},	// QHostInfo::fromName$
    {20, 653, 716},	// QHostInfo::hostName
    {20, 722, 730},	// QHostInfo::localDomainName
    {20, 723, 729},	// QHostInfo::localHostName
    {20, 729, 726},	// QHostInfo::lookupHost$#$
    {20, 730, 725},	// QHostInfo::lookupId
    {20, 797, 715},	// QHostInfo::operator=#
    {20, 1114, 719},	// QHostInfo::setAddresses?
    {20, 1165, 721},	// QHostInfo::setError$
    {20, 1168, 723},	// QHostInfo::setErrorString$
    {20, 1184, 717},	// QHostInfo::setHostName$
    {20, 1202, 724},	// QHostInfo::setLookupId$
    {20, 1425, 735},	// QHostInfo::~QHostInfo
    {21, 1, 821},	// QHttp::Aborted
    {21, 14, 822},	// QHttp::AuthenticationRequiredError
    {21, 46, 813},	// QHttp::Closing
    {21, 50, 812},	// QHttp::Connected
    {21, 52, 809},	// QHttp::Connecting
    {21, 56, 805},	// QHttp::ConnectionModeHttp
    {21, 57, 806},	// QHttp::ConnectionModeHttps
    {21, 58, 817},	// QHttp::ConnectionRefused
    {21, 100, 808},	// QHttp::HostLookup
    {21, 104, 816},	// QHttp::HostNotFound
    {21, 121, 819},	// QHttp::InvalidResponseHeader
    {21, 167, 814},	// QHttp::NoError
    {21, 194, 823},	// QHttp::ProxyAuthenticationRequiredError
    {21, 219, 788},	// QHttp::QHttp
    {21, 220, 743},	// QHttp::QHttp#
    {21, 221, 789},	// QHttp::QHttp$
    {21, 222, -385},	// QHttp::QHttp$$
    {21, 223, 744},	// QHttp::QHttp$$#
    {21, 224, 792},	// QHttp::QHttp$$$
    {21, 225, 745},	// QHttp::QHttp$$$#
    {21, 347, 811},	// QHttp::Reading
    {21, 361, 810},	// QHttp::Sending
    {21, 407, 807},	// QHttp::Unconnected
    {21, 411, 818},	// QHttp::UnexpectedClose
    {21, 415, 815},	// QHttp::UnknownError
    {21, 437, 820},	// QHttp::WrongContentLength
    {21, 438, 773},	// QHttp::abort
    {21, 484, 784},	// QHttp::authenticationRequired$$#
    {21, 495, 760},	// QHttp::bytesAvailable
    {21, 513, 769},	// QHttp::clearPendingRequests
    {21, 514, 759},	// QHttp::close
    {21, 515, 758},	// QHttp::closeConnection
    {21, 558, 765},	// QHttp::currentDestinationDevice
    {21, 560, 763},	// QHttp::currentId
    {21, 561, 766},	// QHttp::currentRequest
    {21, 562, 764},	// QHttp::currentSourceDevice
    {21, 567, 779},	// QHttp::dataReadProgress$$
    {21, 569, 778},	// QHttp::dataSendProgress$$
    {21, 588, 782},	// QHttp::done$
    {21, 600, 771},	// QHttp::error
    {21, 602, 772},	// QHttp::errorString
    {21, 629, 798},	// QHttp::get$
    {21, 630, 752},	// QHttp::get$#
    {21, 644, 768},	// QHttp::hasPendingRequests
    {21, 649, 755},	// QHttp::head$
    {21, 657, 774},	// QHttp::ignoreSslErrors
    {21, 705, 767},	// QHttp::lastResponse
    {21, 738, 736},	// QHttp::metaObject
    {21, 856, -388},	// QHttp::post$#
    {21, 857, -391},	// QHttp::post$##
    {21, 870, 783},	// QHttp::proxyAuthenticationRequired##
    {21, 1031, 742},	// QHttp::qt_metacall$$?
    {21, 1033, 737},	// QHttp::qt_metacast$
    {21, 1056, 761},	// QHttp::read$$
    {21, 1057, 762},	// QHttp::readAll
    {21, 1068, 777},	// QHttp::readyRead#
    {21, 1084, 801},	// QHttp::request#
    {21, 1085, -394},	// QHttp::request##
    {21, 1086, -397},	// QHttp::request###
    {21, 1088, 781},	// QHttp::requestFinished$$
    {21, 1090, 780},	// QHttp::requestStarted$
    {21, 1093, 776},	// QHttp::responseHeaderReceived#
    {21, 1180, 793},	// QHttp::setHost$
    {21, 1181, -400},	// QHttp::setHost$$
    {21, 1182, 747},	// QHttp::setHost$$$
    {21, 1263, 751},	// QHttp::setProxy#
    {21, 1264, 796},	// QHttp::setProxy$$
    {21, 1265, 797},	// QHttp::setProxy$$$
    {21, 1266, 750},	// QHttp::setProxy$$$$
    {21, 1295, 748},	// QHttp::setSocket#
    {21, 1329, 795},	// QHttp::setUser$
    {21, 1330, 749},	// QHttp::setUser$$
    {21, 1348, 785},	// QHttp::sslErrors?
    {21, 1351, 770},	// QHttp::state
    {21, 1353, 775},	// QHttp::stateChanged$
    {21, 1354, 804},	// QHttp::staticMetaObject
    {21, 1379, 786},	// QHttp::tr$
    {21, 1380, 738},	// QHttp::tr$$
    {21, 1381, 740},	// QHttp::tr$$$
    {21, 1383, 787},	// QHttp::trUtf8$
    {21, 1384, 739},	// QHttp::trUtf8$$
    {21, 1385, 741},	// QHttp::trUtf8$$$
    {21, 1426, 824},	// QHttp::~QHttp
    {22, 226, 825},	// QHttpHeader::QHttpHeader
    {22, 227, 826},	// QHttpHeader::QHttpHeader#
    {22, 228, 827},	// QHttpHeader::QHttpHeader$
    {22, 461, 831},	// QHttpHeader::addValue$$
    {22, 471, 836},	// QHttpHeader::allValues$
    {22, 549, 840},	// QHttpHeader::contentLength
    {22, 550, 843},	// QHttpHeader::contentType
    {22, 637, 839},	// QHttpHeader::hasContentLength
    {22, 638, 842},	// QHttpHeader::hasContentType
    {22, 640, 833},	// QHttpHeader::hasKey$
    {22, 693, 846},	// QHttpHeader::isValid
    {22, 702, 834},	// QHttpHeader::keys
    {22, 731, 847},	// QHttpHeader::majorVersion
    {22, 741, 848},	// QHttpHeader::minorVersion
    {22, 797, 828},	// QHttpHeader::operator=#
    {22, 830, 850},	// QHttpHeader::parse$
    {22, 834, 849},	// QHttpHeader::parseLine$$
    {22, 1076, 838},	// QHttpHeader::removeAllValues$
    {22, 1080, 837},	// QHttpHeader::removeValue$
    {22, 1147, 841},	// QHttpHeader::setContentLength$
    {22, 1149, 844},	// QHttpHeader::setContentType$
    {22, 1332, 851},	// QHttpHeader::setValid$
    {22, 1335, 829},	// QHttpHeader::setValue$$
    {22, 1337, 830},	// QHttpHeader::setValues?
    {22, 1377, 845},	// QHttpHeader::toString
    {22, 1397, 835},	// QHttpHeader::value$
    {22, 1398, 832},	// QHttpHeader::values
    {22, 1427, 852},	// QHttpHeader::~QHttpHeader
    {23, 5, 874},	// QHttpMultiPart::AlternativeType
    {23, 93, 873},	// QHttpMultiPart::FormDataType
    {23, 160, 871},	// QHttpMultiPart::MixedType
    {23, 229, 868},	// QHttpMultiPart::QHttpMultiPart
    {23, 230, 860},	// QHttpMultiPart::QHttpMultiPart#
    {23, 231, 869},	// QHttpMultiPart::QHttpMultiPart$
    {23, 232, 861},	// QHttpMultiPart::QHttpMultiPart$#
    {23, 349, 872},	// QHttpMultiPart::RelatedType
    {23, 474, 862},	// QHttpMultiPart::append#
    {23, 493, 864},	// QHttpMultiPart::boundary
    {23, 738, 853},	// QHttpMultiPart::metaObject
    {23, 1031, 859},	// QHttpMultiPart::qt_metacall$$?
    {23, 1033, 854},	// QHttpMultiPart::qt_metacast$
    {23, 1130, 865},	// QHttpMultiPart::setBoundary#
    {23, 1149, 863},	// QHttpMultiPart::setContentType$
    {23, 1354, 870},	// QHttpMultiPart::staticMetaObject
    {23, 1379, 866},	// QHttpMultiPart::tr$
    {23, 1380, 855},	// QHttpMultiPart::tr$$
    {23, 1381, 857},	// QHttpMultiPart::tr$$$
    {23, 1383, 867},	// QHttpMultiPart::trUtf8$
    {23, 1384, 856},	// QHttpMultiPart::trUtf8$$
    {23, 1385, 858},	// QHttpMultiPart::trUtf8$$$
    {23, 1428, 875},	// QHttpMultiPart::~QHttpMultiPart
    {24, 233, 876},	// QHttpPart::QHttpPart
    {24, 234, 877},	// QHttpPart::QHttpPart#
    {24, 764, 880},	// QHttpPart::operator!=#
    {24, 797, 878},	// QHttpPart::operator=#
    {24, 800, 879},	// QHttpPart::operator==#
    {24, 1126, 883},	// QHttpPart::setBody#
    {24, 1128, 884},	// QHttpPart::setBodyDevice#
    {24, 1178, 881},	// QHttpPart::setHeader$#
    {24, 1272, 882},	// QHttpPart::setRawHeader##
    {24, 1429, 885},	// QHttpPart::~QHttpPart
    {25, 235, 886},	// QHttpRequestHeader::QHttpRequestHeader
    {25, 236, 888},	// QHttpRequestHeader::QHttpRequestHeader#
    {25, 237, 889},	// QHttpRequestHeader::QHttpRequestHeader$
    {25, 238, 898},	// QHttpRequestHeader::QHttpRequestHeader$$
    {25, 239, 899},	// QHttpRequestHeader::QHttpRequestHeader$$$
    {25, 240, 887},	// QHttpRequestHeader::QHttpRequestHeader$$$$
    {25, 731, 894},	// QHttpRequestHeader::majorVersion
    {25, 739, 892},	// QHttpRequestHeader::method
    {25, 741, 895},	// QHttpRequestHeader::minorVersion
    {25, 797, 890},	// QHttpRequestHeader::operator=#
    {25, 834, 897},	// QHttpRequestHeader::parseLine$$
    {25, 838, 893},	// QHttpRequestHeader::path
    {25, 1281, 900},	// QHttpRequestHeader::setRequest$$
    {25, 1282, 901},	// QHttpRequestHeader::setRequest$$$
    {25, 1283, 891},	// QHttpRequestHeader::setRequest$$$$
    {25, 1377, 896},	// QHttpRequestHeader::toString
    {25, 1430, 902},	// QHttpRequestHeader::~QHttpRequestHeader
    {26, 241, 903},	// QHttpResponseHeader::QHttpResponseHeader
    {26, 242, 904},	// QHttpResponseHeader::QHttpResponseHeader#
    {26, 243, -17},	// QHttpResponseHeader::QHttpResponseHeader$
    {26, 244, 916},	// QHttpResponseHeader::QHttpResponseHeader$$
    {26, 245, 917},	// QHttpResponseHeader::QHttpResponseHeader$$$
    {26, 246, 906},	// QHttpResponseHeader::QHttpResponseHeader$$$$
    {26, 731, 911},	// QHttpResponseHeader::majorVersion
    {26, 741, 912},	// QHttpResponseHeader::minorVersion
    {26, 797, 907},	// QHttpResponseHeader::operator=#
    {26, 834, 914},	// QHttpResponseHeader::parseLine$$
    {26, 1070, 910},	// QHttpResponseHeader::reasonPhrase
    {26, 1314, 918},	// QHttpResponseHeader::setStatusLine$
    {26, 1315, 919},	// QHttpResponseHeader::setStatusLine$$
    {26, 1316, 920},	// QHttpResponseHeader::setStatusLine$$$
    {26, 1317, 908},	// QHttpResponseHeader::setStatusLine$$$$
    {26, 1355, 909},	// QHttpResponseHeader::statusCode
    {26, 1377, 913},	// QHttpResponseHeader::toString
    {26, 1431, 921},	// QHttpResponseHeader::~QHttpResponseHeader
    {28, 247, 945},	// QIPv6Address::QIPv6Address
    {28, 248, 946},	// QIPv6Address::QIPv6Address#
    {28, 818, -415},	// QIPv6Address::operator[]$
    {28, 1432, 947},	// QIPv6Address::~QIPv6Address
    {33, 249, 973},	// QLocalServer::QLocalServer
    {33, 250, 956},	// QLocalServer::QLocalServer#
    {33, 514, 957},	// QLocalServer::close
    {33, 602, 958},	// QLocalServer::errorString
    {33, 626, 965},	// QLocalServer::fullServerName
    {33, 642, 959},	// QLocalServer::hasPendingConnections
    {33, 661, 970},	// QLocalServer::incomingConnection?
    {33, 681, 960},	// QLocalServer::isListening
    {33, 719, 961},	// QLocalServer::listen$
    {33, 733, 962},	// QLocalServer::maxPendingConnections
    {33, 738, 948},	// QLocalServer::metaObject
    {33, 756, 955},	// QLocalServer::newConnection
    {33, 757, 963},	// QLocalServer::nextPendingConnection
    {33, 1031, 954},	// QLocalServer::qt_metacall$$?
    {33, 1033, 949},	// QLocalServer::qt_metacast$
    {33, 1078, 966},	// QLocalServer::removeServer$
    {33, 1104, 967},	// QLocalServer::serverError
    {33, 1105, 964},	// QLocalServer::serverName
    {33, 1204, 968},	// QLocalServer::setMaxPendingConnections$
    {33, 1354, 976},	// QLocalServer::staticMetaObject
    {33, 1379, 971},	// QLocalServer::tr$
    {33, 1380, 950},	// QLocalServer::tr$$
    {33, 1381, 952},	// QLocalServer::tr$$$
    {33, 1383, 972},	// QLocalServer::trUtf8$
    {33, 1384, 951},	// QLocalServer::trUtf8$$
    {33, 1385, 953},	// QLocalServer::trUtf8$$$
    {33, 1408, 974},	// QLocalServer::waitForNewConnection
    {33, 1409, 975},	// QLocalServer::waitForNewConnection$
    {33, 1410, 969},	// QLocalServer::waitForNewConnection$$
    {33, 1433, 977},	// QLocalServer::~QLocalServer
    {34, 47, 1038},	// QLocalSocket::ClosingState
    {34, 51, 1037},	// QLocalSocket::ConnectedState
    {34, 53, 1036},	// QLocalSocket::ConnectingState
    {34, 55, 1032},	// QLocalSocket::ConnectionError
    {34, 59, 1025},	// QLocalSocket::ConnectionRefusedError
    {34, 74, 1031},	// QLocalSocket::DatagramTooLargeError
    {34, 184, 1026},	// QLocalSocket::PeerClosedError
    {34, 251, 1016},	// QLocalSocket::QLocalSocket
    {34, 252, 985},	// QLocalSocket::QLocalSocket#
    {34, 362, 1027},	// QLocalSocket::ServerNotFoundError
    {34, 370, 1028},	// QLocalSocket::SocketAccessError
    {34, 372, 1029},	// QLocalSocket::SocketResourceError
    {34, 373, 1030},	// QLocalSocket::SocketTimeoutError
    {34, 408, 1035},	// QLocalSocket::UnconnectedState
    {34, 423, 1034},	// QLocalSocket::UnknownSocketError
    {34, 426, 1033},	// QLocalSocket::UnsupportedSocketOperationError
    {34, 438, 990},	// QLocalSocket::abort
    {34, 495, 992},	// QLocalSocket::bytesAvailable
    {34, 497, 993},	// QLocalSocket::bytesToWrite
    {34, 503, 994},	// QLocalSocket::canReadLine
    {34, 514, 995},	// QLocalSocket::close
    {34, 546, 1017},	// QLocalSocket::connectToServer$
    {34, 547, 986},	// QLocalSocket::connectToServer$$
    {34, 548, 1008},	// QLocalSocket::connected
    {34, 582, 987},	// QLocalSocket::disconnectFromServer
    {34, 585, 1009},	// QLocalSocket::disconnected
    {34, 600, 996},	// QLocalSocket::error
    {34, 601, 1010},	// QLocalSocket::error$
    {34, 613, 997},	// QLocalSocket::flush
    {34, 626, 989},	// QLocalSocket::fullServerName
    {34, 689, 991},	// QLocalSocket::isSequential
    {34, 693, 998},	// QLocalSocket::isValid
    {34, 738, 978},	// QLocalSocket::metaObject
    {34, 1031, 984},	// QLocalSocket::qt_metacall$$?
    {34, 1033, 979},	// QLocalSocket::qt_metacast$
    {34, 1058, 999},	// QLocalSocket::readBufferSize
    {34, 1060, 1012},	// QLocalSocket::readData$$
    {34, 1105, 988},	// QLocalSocket::serverName
    {34, 1276, 1000},	// QLocalSocket::setReadBufferSize$
    {34, 1300, 1018},	// QLocalSocket::setSocketDescriptor?
    {34, 1301, 1019},	// QLocalSocket::setSocketDescriptor?$
    {34, 1302, 1001},	// QLocalSocket::setSocketDescriptor?$$
    {34, 1341, 1002},	// QLocalSocket::socketDescriptor
    {34, 1351, 1003},	// QLocalSocket::state
    {34, 1353, 1011},	// QLocalSocket::stateChanged$
    {34, 1354, 1024},	// QLocalSocket::staticMetaObject
    {34, 1379, 1014},	// QLocalSocket::tr$
    {34, 1380, 980},	// QLocalSocket::tr$$
    {34, 1381, 982},	// QLocalSocket::tr$$$
    {34, 1383, 1015},	// QLocalSocket::trUtf8$
    {34, 1384, 981},	// QLocalSocket::trUtf8$$
    {34, 1385, 983},	// QLocalSocket::trUtf8$$$
    {34, 1400, 1020},	// QLocalSocket::waitForBytesWritten
    {34, 1401, 1004},	// QLocalSocket::waitForBytesWritten$
    {34, 1402, 1021},	// QLocalSocket::waitForConnected
    {34, 1403, 1005},	// QLocalSocket::waitForConnected$
    {34, 1404, 1022},	// QLocalSocket::waitForDisconnected
    {34, 1405, 1006},	// QLocalSocket::waitForDisconnected$
    {34, 1413, 1023},	// QLocalSocket::waitForReadyRead
    {34, 1414, 1007},	// QLocalSocket::waitForReadyRead$
    {34, 1416, 1013},	// QLocalSocket::writeData$$
    {34, 1434, 1039},	// QLocalSocket::~QLocalSocket
    {39, 2, 1093},	// QNetworkAccessManager::Accessible
    {39, 71, 1089},	// QNetworkAccessManager::CustomOperation
    {39, 78, 1088},	// QNetworkAccessManager::DeleteOperation
    {39, 97, 1085},	// QNetworkAccessManager::GetOperation
    {39, 98, 1084},	// QNetworkAccessManager::HeadOperation
    {39, 173, 1092},	// QNetworkAccessManager::NotAccessible
    {39, 186, 1087},	// QNetworkAccessManager::PostOperation
    {39, 204, 1086},	// QNetworkAccessManager::PutOperation
    {39, 253, 1080},	// QNetworkAccessManager::QNetworkAccessManager
    {39, 254, 1047},	// QNetworkAccessManager::QNetworkAccessManager#
    {39, 413, 1091},	// QNetworkAccessManager::UnknownAccessibility
    {39, 418, 1090},	// QNetworkAccessManager::UnknownOperation
    {39, 442, 1068},	// QNetworkAccessManager::activeConfiguration
    {39, 483, 1072},	// QNetworkAccessManager::authenticationRequired##
    {39, 500, 1052},	// QNetworkAccessManager::cache
    {39, 521, 1067},	// QNetworkAccessManager::configuration
    {39, 551, 1054},	// QNetworkAccessManager::cookieJar
    {39, 555, 1082},	// QNetworkAccessManager::createRequest$#
    {39, 556, 1077},	// QNetworkAccessManager::createRequest$##
    {39, 576, 1064},	// QNetworkAccessManager::deleteResource#
    {39, 611, 1073},	// QNetworkAccessManager::finished#
    {39, 628, 1057},	// QNetworkAccessManager::get#
    {39, 648, 1056},	// QNetworkAccessManager::head#
    {39, 738, 1040},	// QNetworkAccessManager::metaObject
    {39, 750, 1070},	// QNetworkAccessManager::networkAccessible
    {39, 752, 1076},	// QNetworkAccessManager::networkAccessibleChanged$
    {39, 754, 1075},	// QNetworkAccessManager::networkSessionConnected
    {39, 855, -371},	// QNetworkAccessManager::post##
    {39, 868, 1048},	// QNetworkAccessManager::proxy
    {39, 870, 1071},	// QNetworkAccessManager::proxyAuthenticationRequired##
    {39, 871, 1050},	// QNetworkAccessManager::proxyFactory
    {39, 877, -375},	// QNetworkAccessManager::put##
    {39, 1031, 1046},	// QNetworkAccessManager::qt_metacall$$?
    {39, 1033, 1041},	// QNetworkAccessManager::qt_metacast$
    {39, 1100, 1081},	// QNetworkAccessManager::sendCustomRequest##
    {39, 1101, 1065},	// QNetworkAccessManager::sendCustomRequest###
    {39, 1136, 1053},	// QNetworkAccessManager::setCache#
    {39, 1145, 1066},	// QNetworkAccessManager::setConfiguration#
    {39, 1151, 1055},	// QNetworkAccessManager::setCookieJar#
    {39, 1215, 1069},	// QNetworkAccessManager::setNetworkAccessible$
    {39, 1263, 1049},	// QNetworkAccessManager::setProxy#
    {39, 1268, 1051},	// QNetworkAccessManager::setProxyFactory#
    {39, 1347, 1074},	// QNetworkAccessManager::sslErrors#?
    {39, 1354, 1083},	// QNetworkAccessManager::staticMetaObject
    {39, 1379, 1078},	// QNetworkAccessManager::tr$
    {39, 1380, 1042},	// QNetworkAccessManager::tr$$
    {39, 1381, 1044},	// QNetworkAccessManager::tr$$$
    {39, 1383, 1079},	// QNetworkAccessManager::trUtf8$
    {39, 1384, 1043},	// QNetworkAccessManager::trUtf8$$
    {39, 1385, 1045},	// QNetworkAccessManager::trUtf8$$$
    {39, 1435, 1094},	// QNetworkAccessManager::~QNetworkAccessManager
    {40, 255, 1095},	// QNetworkAddressEntry::QNetworkAddressEntry
    {40, 256, 1096},	// QNetworkAddressEntry::QNetworkAddressEntry#
    {40, 494, 1106},	// QNetworkAddressEntry::broadcast
    {40, 670, 1100},	// QNetworkAddressEntry::ip
    {40, 749, 1102},	// QNetworkAddressEntry::netmask
    {40, 764, 1099},	// QNetworkAddressEntry::operator!=#
    {40, 797, 1097},	// QNetworkAddressEntry::operator=#
    {40, 800, 1098},	// QNetworkAddressEntry::operator==#
    {40, 860, 1104},	// QNetworkAddressEntry::prefixLength
    {40, 1132, 1107},	// QNetworkAddressEntry::setBroadcast#
    {40, 1188, 1101},	// QNetworkAddressEntry::setIp#
    {40, 1213, 1103},	// QNetworkAddressEntry::setNetmask#
    {40, 1249, 1105},	// QNetworkAddressEntry::setPrefixLength$
    {40, 1436, 1108},	// QNetworkAddressEntry::~QNetworkAddressEntry
    {41, 257, 1109},	// QNetworkCacheMetaData::QNetworkCacheMetaData
    {41, 258, 1110},	// QNetworkCacheMetaData::QNetworkCacheMetaData#
    {41, 480, 1125},	// QNetworkCacheMetaData::attributes
    {41, 605, 1121},	// QNetworkCacheMetaData::expirationDate
    {41, 693, 1114},	// QNetworkCacheMetaData::isValid
    {41, 703, 1119},	// QNetworkCacheMetaData::lastModified
    {41, 764, 1113},	// QNetworkCacheMetaData::operator!=#
    {41, 797, 1111},	// QNetworkCacheMetaData::operator=#
    {41, 800, 1112},	// QNetworkCacheMetaData::operator==#
    {41, 1054, 1117},	// QNetworkCacheMetaData::rawHeaders
    {41, 1096, 1123},	// QNetworkCacheMetaData::saveToDisk
    {41, 1124, 1126},	// QNetworkCacheMetaData::setAttributes?
    {41, 1170, 1122},	// QNetworkCacheMetaData::setExpirationDate#
    {41, 1190, 1120},	// QNetworkCacheMetaData::setLastModified#
    {41, 1274, 1118},	// QNetworkCacheMetaData::setRawHeaders?
    {41, 1285, 1124},	// QNetworkCacheMetaData::setSaveToDisk$
    {41, 1325, 1116},	// QNetworkCacheMetaData::setUrl#
    {41, 1393, 1115},	// QNetworkCacheMetaData::url
    {41, 1437, 1127},	// QNetworkCacheMetaData::~QNetworkCacheMetaData
    {42, 3, 1155},	// QNetworkConfiguration::Active
    {42, 19, 1159},	// QNetworkConfiguration::Bearer2G
    {42, 20, 1163},	// QNetworkConfiguration::BearerBluetooth
    {42, 21, 1160},	// QNetworkConfiguration::BearerCDMA2000
    {42, 22, 1157},	// QNetworkConfiguration::BearerEthernet
    {42, 23, 1162},	// QNetworkConfiguration::BearerHSPA
    {42, 24, 1156},	// QNetworkConfiguration::BearerUnknown
    {42, 25, 1161},	// QNetworkConfiguration::BearerWCDMA
    {42, 26, 1158},	// QNetworkConfiguration::BearerWLAN
    {42, 27, 1164},	// QNetworkConfiguration::BearerWiMAX
    {42, 77, 1153},	// QNetworkConfiguration::Defined
    {42, 82, 1154},	// QNetworkConfiguration::Discovered
    {42, 114, 1144},	// QNetworkConfiguration::InternetAccessPoint
    {42, 115, 1147},	// QNetworkConfiguration::Invalid
    {42, 190, 1150},	// QNetworkConfiguration::PrivatePurpose
    {42, 202, 1149},	// QNetworkConfiguration::PublicPurpose
    {42, 259, 1128},	// QNetworkConfiguration::QNetworkConfiguration
    {42, 260, 1129},	// QNetworkConfiguration::QNetworkConfiguration#
    {42, 363, 1145},	// QNetworkConfiguration::ServiceNetwork
    {42, 364, 1151},	// QNetworkConfiguration::ServiceSpecificPurpose
    {42, 409, 1152},	// QNetworkConfiguration::Undefined
    {42, 421, 1148},	// QNetworkConfiguration::UnknownPurpose
    {42, 429, 1146},	// QNetworkConfiguration::UserChoice
    {42, 485, 1136},	// QNetworkConfiguration::bearerName
    {42, 486, 1137},	// QNetworkConfiguration::bearerType
    {42, 487, 1138},	// QNetworkConfiguration::bearerTypeName
    {42, 509, 1141},	// QNetworkConfiguration::children
    {42, 655, 1139},	// QNetworkConfiguration::identifier
    {42, 686, 1140},	// QNetworkConfiguration::isRoamingAvailable
    {42, 693, 1143},	// QNetworkConfiguration::isValid
    {42, 748, 1142},	// QNetworkConfiguration::name
    {42, 764, 1132},	// QNetworkConfiguration::operator!=#
    {42, 797, 1130},	// QNetworkConfiguration::operator=#
    {42, 800, 1131},	// QNetworkConfiguration::operator==#
    {42, 875, 1135},	// QNetworkConfiguration::purpose
    {42, 1351, 1133},	// QNetworkConfiguration::state
    {42, 1386, 1134},	// QNetworkConfiguration::type
    {42, 1438, 1165},	// QNetworkConfiguration::~QNetworkConfiguration
    {43, 12, 1193},	// QNetworkConfigurationManager::ApplicationLevelRoaming
    {43, 36, 1190},	// QNetworkConfigurationManager::CanStartAndStopInterfaces
    {43, 73, 1195},	// QNetworkConfigurationManager::DataStatistics
    {43, 80, 1191},	// QNetworkConfigurationManager::DirectConnectionRouting
    {43, 92, 1194},	// QNetworkConfigurationManager::ForcedRoaming
    {43, 166, 1196},	// QNetworkConfigurationManager::NetworkSessionRequired
    {43, 261, 1187},	// QNetworkConfigurationManager::QNetworkConfigurationManager
    {43, 262, 1173},	// QNetworkConfigurationManager::QNetworkConfigurationManager#
    {43, 389, 1192},	// QNetworkConfigurationManager::SystemSessionSupport
    {43, 466, 1188},	// QNetworkConfigurationManager::allConfigurations
    {43, 467, 1176},	// QNetworkConfigurationManager::allConfigurations$
    {43, 504, 1174},	// QNetworkConfigurationManager::capabilities
    {43, 523, 1180},	// QNetworkConfigurationManager::configurationAdded#
    {43, 525, 1182},	// QNetworkConfigurationManager::configurationChanged#
    {43, 527, 1177},	// QNetworkConfigurationManager::configurationFromIdentifier$
    {43, 529, 1181},	// QNetworkConfigurationManager::configurationRemoved#
    {43, 574, 1175},	// QNetworkConfigurationManager::defaultConfiguration
    {43, 683, 1178},	// QNetworkConfigurationManager::isOnline
    {43, 738, 1166},	// QNetworkConfigurationManager::metaObject
    {43, 759, 1183},	// QNetworkConfigurationManager::onlineStateChanged$
    {43, 1031, 1172},	// QNetworkConfigurationManager::qt_metacall$$?
    {43, 1033, 1167},	// QNetworkConfigurationManager::qt_metacast$
    {43, 1354, 1189},	// QNetworkConfigurationManager::staticMetaObject
    {43, 1379, 1185},	// QNetworkConfigurationManager::tr$
    {43, 1380, 1168},	// QNetworkConfigurationManager::tr$$
    {43, 1381, 1170},	// QNetworkConfigurationManager::tr$$$
    {43, 1383, 1186},	// QNetworkConfigurationManager::trUtf8$
    {43, 1384, 1169},	// QNetworkConfigurationManager::trUtf8$$
    {43, 1385, 1171},	// QNetworkConfigurationManager::trUtf8$$$
    {43, 1387, 1184},	// QNetworkConfigurationManager::updateCompleted
    {43, 1388, 1179},	// QNetworkConfigurationManager::updateConfigurations
    {43, 1439, 1197},	// QNetworkConfigurationManager::~QNetworkConfigurationManager
    {44, 95, 1224},	// QNetworkCookie::Full
    {44, 164, 1223},	// QNetworkCookie::NameAndValueOnly
    {44, 263, 1220},	// QNetworkCookie::QNetworkCookie
    {44, 264, -4},	// QNetworkCookie::QNetworkCookie#
    {44, 265, 1198},	// QNetworkCookie::QNetworkCookie##
    {44, 586, 1210},	// QNetworkCookie::domain
    {44, 605, 1208},	// QNetworkCookie::expirationDate
    {44, 677, 1205},	// QNetworkCookie::isHttpOnly
    {44, 688, 1203},	// QNetworkCookie::isSecure
    {44, 690, 1207},	// QNetworkCookie::isSessionCookie
    {44, 748, 1214},	// QNetworkCookie::name
    {44, 764, 1202},	// QNetworkCookie::operator!=#
    {44, 797, 1200},	// QNetworkCookie::operator=#
    {44, 800, 1201},	// QNetworkCookie::operator==#
    {44, 832, 1219},	// QNetworkCookie::parseCookies#
    {44, 838, 1212},	// QNetworkCookie::path
    {44, 1163, 1211},	// QNetworkCookie::setDomain$
    {44, 1170, 1209},	// QNetworkCookie::setExpirationDate#
    {44, 1186, 1206},	// QNetworkCookie::setHttpOnly$
    {44, 1210, 1215},	// QNetworkCookie::setName#
    {44, 1229, 1213},	// QNetworkCookie::setPath$
    {44, 1289, 1204},	// QNetworkCookie::setSecure$
    {44, 1334, 1217},	// QNetworkCookie::setValue#
    {44, 1375, 1222},	// QNetworkCookie::toRawForm
    {44, 1376, 1218},	// QNetworkCookie::toRawForm$
    {44, 1396, 1216},	// QNetworkCookie::value
    {44, 1440, 1225},	// QNetworkCookie::~QNetworkCookie
    {45, 266, 1240},	// QNetworkCookieJar::QNetworkCookieJar
    {45, 267, 1233},	// QNetworkCookieJar::QNetworkCookieJar#
    {45, 468, 1236},	// QNetworkCookieJar::allCookies
    {45, 553, 1234},	// QNetworkCookieJar::cookiesForUrl#
    {45, 738, 1226},	// QNetworkCookieJar::metaObject
    {45, 1031, 1232},	// QNetworkCookieJar::qt_metacall$$?
    {45, 1033, 1227},	// QNetworkCookieJar::qt_metacast$
    {45, 1116, 1237},	// QNetworkCookieJar::setAllCookies?
    {45, 1153, 1235},	// QNetworkCookieJar::setCookiesFromUrl?#
    {45, 1354, 1241},	// QNetworkCookieJar::staticMetaObject
    {45, 1379, 1238},	// QNetworkCookieJar::tr$
    {45, 1380, 1228},	// QNetworkCookieJar::tr$$
    {45, 1381, 1230},	// QNetworkCookieJar::tr$$$
    {45, 1383, 1239},	// QNetworkCookieJar::trUtf8$
    {45, 1384, 1229},	// QNetworkCookieJar::trUtf8$$
    {45, 1385, 1231},	// QNetworkCookieJar::trUtf8$$$
    {45, 1441, 1242},	// QNetworkCookieJar::~QNetworkCookieJar
    {46, 268, 1267},	// QNetworkDiskCache::QNetworkDiskCache
    {46, 269, 1250},	// QNetworkDiskCache::QNetworkDiskCache#
    {46, 501, 1251},	// QNetworkDiskCache::cacheDirectory
    {46, 502, 1255},	// QNetworkDiskCache::cacheSize
    {46, 511, 1263},	// QNetworkDiskCache::clear
    {46, 565, 1258},	// QNetworkDiskCache::data#
    {46, 606, 1264},	// QNetworkDiskCache::expire
    {46, 609, 1262},	// QNetworkDiskCache::fileMetaData$
    {46, 664, 1261},	// QNetworkDiskCache::insert#
    {46, 734, 1253},	// QNetworkDiskCache::maximumCacheSize
    {46, 736, 1256},	// QNetworkDiskCache::metaData#
    {46, 738, 1243},	// QNetworkDiskCache::metaObject
    {46, 862, 1260},	// QNetworkDiskCache::prepare#
    {46, 1031, 1249},	// QNetworkDiskCache::qt_metacall$$?
    {46, 1033, 1244},	// QNetworkDiskCache::qt_metacast$
    {46, 1073, 1259},	// QNetworkDiskCache::remove#
    {46, 1138, 1252},	// QNetworkDiskCache::setCacheDirectory$
    {46, 1206, 1254},	// QNetworkDiskCache::setMaximumCacheSize$
    {46, 1354, 1268},	// QNetworkDiskCache::staticMetaObject
    {46, 1379, 1265},	// QNetworkDiskCache::tr$
    {46, 1380, 1245},	// QNetworkDiskCache::tr$$
    {46, 1381, 1247},	// QNetworkDiskCache::tr$$$
    {46, 1383, 1266},	// QNetworkDiskCache::trUtf8$
    {46, 1384, 1246},	// QNetworkDiskCache::trUtf8$$
    {46, 1385, 1248},	// QNetworkDiskCache::trUtf8$$$
    {46, 1390, 1257},	// QNetworkDiskCache::updateMetaData#
    {46, 1442, 1269},	// QNetworkDiskCache::~QNetworkDiskCache
    {47, 34, 1286},	// QNetworkInterface::CanBroadcast
    {47, 35, 1289},	// QNetworkInterface::CanMulticast
    {47, 122, 1287},	// QNetworkInterface::IsLoopBack
    {47, 123, 1288},	// QNetworkInterface::IsPointToPoint
    {47, 124, 1285},	// QNetworkInterface::IsRunning
    {47, 125, 1284},	// QNetworkInterface::IsUp
    {47, 270, 1270},	// QNetworkInterface::QNetworkInterface
    {47, 271, 1271},	// QNetworkInterface::QNetworkInterface#
    {47, 462, 1279},	// QNetworkInterface::addressEntries
    {47, 465, 1283},	// QNetworkInterface::allAddresses
    {47, 469, 1282},	// QNetworkInterface::allInterfaces
    {47, 612, 1277},	// QNetworkInterface::flags
    {47, 636, 1278},	// QNetworkInterface::hardwareAddress
    {47, 654, 1276},	// QNetworkInterface::humanReadableName
    {47, 662, 1274},	// QNetworkInterface::index
    {47, 667, 1281},	// QNetworkInterface::interfaceFromIndex$
    {47, 669, 1280},	// QNetworkInterface::interfaceFromName$
    {47, 693, 1273},	// QNetworkInterface::isValid
    {47, 748, 1275},	// QNetworkInterface::name
    {47, 797, 1272},	// QNetworkInterface::operator=#
    {47, 1443, 1290},	// QNetworkInterface::~QNetworkInterface
    {48, 33, 1326},	// QNetworkProxy::CachingCapability
    {48, 76, 1317},	// QNetworkProxy::DefaultProxy
    {48, 94, 1322},	// QNetworkProxy::FtpCachingProxy
    {48, 102, 1327},	// QNetworkProxy::HostNameLookupCapability
    {48, 106, 1321},	// QNetworkProxy::HttpCachingProxy
    {48, 109, 1320},	// QNetworkProxy::HttpProxy
    {48, 148, 1324},	// QNetworkProxy::ListeningCapability
    {48, 169, 1319},	// QNetworkProxy::NoProxy
    {48, 272, 1291},	// QNetworkProxy::QNetworkProxy
    {48, 273, 1293},	// QNetworkProxy::QNetworkProxy#
    {48, 274, 1313},	// QNetworkProxy::QNetworkProxy$
    {48, 275, 1314},	// QNetworkProxy::QNetworkProxy$$
    {48, 276, 1315},	// QNetworkProxy::QNetworkProxy$$$
    {48, 277, 1316},	// QNetworkProxy::QNetworkProxy$$$$
    {48, 278, 1292},	// QNetworkProxy::QNetworkProxy$$$$$
    {48, 374, 1318},	// QNetworkProxy::Socks5Proxy
    {48, 398, 1323},	// QNetworkProxy::TunnelingCapability
    {48, 400, 1325},	// QNetworkProxy::UdpTunnelingCapability
    {48, 475, 1312},	// QNetworkProxy::applicationProxy
    {48, 504, 1300},	// QNetworkProxy::capabilities
    {48, 653, 1308},	// QNetworkProxy::hostName
    {48, 671, 1301},	// QNetworkProxy::isCachingProxy
    {48, 692, 1302},	// QNetworkProxy::isTransparentProxy
    {48, 764, 1296},	// QNetworkProxy::operator!=#
    {48, 797, 1294},	// QNetworkProxy::operator=#
    {48, 800, 1295},	// QNetworkProxy::operator==#
    {48, 837, 1306},	// QNetworkProxy::password
    {48, 852, 1310},	// QNetworkProxy::port
    {48, 1118, 1311},	// QNetworkProxy::setApplicationProxy#
    {48, 1140, 1299},	// QNetworkProxy::setCapabilities$
    {48, 1184, 1307},	// QNetworkProxy::setHostName$
    {48, 1227, 1305},	// QNetworkProxy::setPassword$
    {48, 1247, 1309},	// QNetworkProxy::setPort$
    {48, 1323, 1297},	// QNetworkProxy::setType$
    {48, 1329, 1303},	// QNetworkProxy::setUser$
    {48, 1386, 1298},	// QNetworkProxy::type
    {48, 1395, 1304},	// QNetworkProxy::user
    {48, 1444, 1328},	// QNetworkProxy::~QNetworkProxy
    {49, 279, 1329},	// QNetworkProxyFactory::QNetworkProxyFactory
    {49, 280, 1335},	// QNetworkProxyFactory::QNetworkProxyFactory#
    {49, 873, 1333},	// QNetworkProxyFactory::proxyForQuery#
    {49, 1039, 1336},	// QNetworkProxyFactory::queryProxy
    {49, 1040, 1330},	// QNetworkProxyFactory::queryProxy#
    {49, 1120, 1332},	// QNetworkProxyFactory::setApplicationProxyFactory#
    {49, 1327, 1331},	// QNetworkProxyFactory::setUseSystemConfiguration$
    {49, 1364, 1337},	// QNetworkProxyFactory::systemProxyForQuery
    {49, 1365, 1334},	// QNetworkProxyFactory::systemProxyForQuery#
    {49, 1445, 1338},	// QNetworkProxyFactory::~QNetworkProxyFactory
    {50, 281, 1339},	// QNetworkProxyQuery::QNetworkProxyQuery
    {50, 282, -418},	// QNetworkProxyQuery::QNetworkProxyQuery#
    {50, 283, 1369},	// QNetworkProxyQuery::QNetworkProxyQuery##
    {50, 284, 1344},	// QNetworkProxyQuery::QNetworkProxyQuery##$
    {50, 285, -421},	// QNetworkProxyQuery::QNetworkProxyQuery#$
    {50, 286, -424},	// QNetworkProxyQuery::QNetworkProxyQuery#$$
    {50, 287, -427},	// QNetworkProxyQuery::QNetworkProxyQuery#$$$
    {50, 288, 1345},	// QNetworkProxyQuery::QNetworkProxyQuery#$$$$
    {50, 289, 1367},	// QNetworkProxyQuery::QNetworkProxyQuery$
    {50, 290, -430},	// QNetworkProxyQuery::QNetworkProxyQuery$$
    {50, 291, -433},	// QNetworkProxyQuery::QNetworkProxyQuery$$$
    {50, 292, 1341},	// QNetworkProxyQuery::QNetworkProxyQuery$$$$
    {50, 390, 1376},	// QNetworkProxyQuery::TcpServer
    {50, 391, 1374},	// QNetworkProxyQuery::TcpSocket
    {50, 399, 1375},	// QNetworkProxyQuery::UdpSocket
    {50, 427, 1377},	// QNetworkProxyQuery::UrlRequest
    {50, 724, 1356},	// QNetworkProxyQuery::localPort
    {50, 753, 1362},	// QNetworkProxyQuery::networkConfiguration
    {50, 764, 1349},	// QNetworkProxyQuery::operator!=#
    {50, 797, 1347},	// QNetworkProxyQuery::operator=#
    {50, 800, 1348},	// QNetworkProxyQuery::operator==#
    {50, 842, 1354},	// QNetworkProxyQuery::peerHostName
    {50, 844, 1352},	// QNetworkProxyQuery::peerPort
    {50, 867, 1358},	// QNetworkProxyQuery::protocolTag
    {50, 1041, 1350},	// QNetworkProxyQuery::queryType
    {50, 1200, 1357},	// QNetworkProxyQuery::setLocalPort$
    {50, 1217, 1363},	// QNetworkProxyQuery::setNetworkConfiguration#
    {50, 1233, 1355},	// QNetworkProxyQuery::setPeerHostName$
    {50, 1237, 1353},	// QNetworkProxyQuery::setPeerPort$
    {50, 1261, 1359},	// QNetworkProxyQuery::setProtocolTag$
    {50, 1270, 1351},	// QNetworkProxyQuery::setQueryType$
    {50, 1325, 1361},	// QNetworkProxyQuery::setUrl#
    {50, 1393, 1360},	// QNetworkProxyQuery::url
    {50, 1446, 1378},	// QNetworkProxyQuery::~QNetworkProxyQuery
    {51, 14, 1446},	// QNetworkReply::AuthenticationRequiredError
    {51, 59, 1429},	// QNetworkReply::ConnectionRefusedError
    {51, 60, 1443},	// QNetworkReply::ContentAccessDenied
    {51, 63, 1445},	// QNetworkReply::ContentNotFoundError
    {51, 64, 1444},	// QNetworkReply::ContentOperationNotPermittedError
    {51, 65, 1447},	// QNetworkReply::ContentReSendError
    {51, 105, 1431},	// QNetworkReply::HostNotFoundError
    {51, 167, 1428},	// QNetworkReply::NoError
    {51, 178, 1433},	// QNetworkReply::OperationCanceledError
    {51, 191, 1451},	// QNetworkReply::ProtocolFailure
    {51, 192, 1450},	// QNetworkReply::ProtocolInvalidOperationError
    {51, 193, 1449},	// QNetworkReply::ProtocolUnknownError
    {51, 194, 1441},	// QNetworkReply::ProxyAuthenticationRequiredError
    {51, 195, 1438},	// QNetworkReply::ProxyConnectionClosedError
    {51, 196, 1437},	// QNetworkReply::ProxyConnectionRefusedError
    {51, 198, 1439},	// QNetworkReply::ProxyNotFoundError
    {51, 200, 1440},	// QNetworkReply::ProxyTimeoutError
    {51, 293, 1426},	// QNetworkReply::QNetworkReply
    {51, 294, 1414},	// QNetworkReply::QNetworkReply#
    {51, 350, 1430},	// QNetworkReply::RemoteHostClosedError
    {51, 377, 1434},	// QNetworkReply::SslHandshakeFailedError
    {51, 392, 1435},	// QNetworkReply::TemporaryNetworkFailureError
    {51, 394, 1432},	// QNetworkReply::TimeoutError
    {51, 414, 1448},	// QNetworkReply::UnknownContentError
    {51, 416, 1436},	// QNetworkReply::UnknownNetworkError
    {51, 420, 1442},	// QNetworkReply::UnknownProxyError
    {51, 438, 1386},	// QNetworkReply::abort
    {51, 478, 1403},	// QNetworkReply::attribute$
    {51, 514, 1387},	// QNetworkReply::close
    {51, 590, 1413},	// QNetworkReply::downloadProgress$$
    {51, 600, 1394},	// QNetworkReply::error
    {51, 601, 1410},	// QNetworkReply::error$
    {51, 610, 1409},	// QNetworkReply::finished
    {51, 646, 1399},	// QNetworkReply::hasRawHeader#
    {51, 651, 1398},	// QNetworkReply::header$
    {51, 657, 1407},	// QNetworkReply::ignoreSslErrors
    {51, 658, 1406},	// QNetworkReply::ignoreSslErrors?
    {51, 676, 1395},	// QNetworkReply::isFinished
    {51, 687, 1396},	// QNetworkReply::isRunning
    {51, 689, 1388},	// QNetworkReply::isSequential
    {51, 732, 1391},	// QNetworkReply::manager
    {51, 737, 1408},	// QNetworkReply::metaDataChanged
    {51, 738, 1379},	// QNetworkReply::metaObject
    {51, 762, 1392},	// QNetworkReply::operation
    {51, 1031, 1385},	// QNetworkReply::qt_metacall$$?
    {51, 1033, 1380},	// QNetworkReply::qt_metacast$
    {51, 1051, 1401},	// QNetworkReply::rawHeader#
    {51, 1052, 1400},	// QNetworkReply::rawHeaderList
    {51, 1053, 1402},	// QNetworkReply::rawHeaderPairs
    {51, 1058, 1389},	// QNetworkReply::readBufferSize
    {51, 1083, 1393},	// QNetworkReply::request
    {51, 1122, 1423},	// QNetworkReply::setAttribute$#
    {51, 1166, 1418},	// QNetworkReply::setError$$
    {51, 1174, 1419},	// QNetworkReply::setFinished$
    {51, 1178, 1421},	// QNetworkReply::setHeader$#
    {51, 1219, 1416},	// QNetworkReply::setOperation$
    {51, 1272, 1422},	// QNetworkReply::setRawHeader##
    {51, 1276, 1390},	// QNetworkReply::setReadBufferSize$
    {51, 1280, 1417},	// QNetworkReply::setRequest#
    {51, 1310, 1405},	// QNetworkReply::setSslConfiguration#
    {51, 1325, 1420},	// QNetworkReply::setUrl#
    {51, 1345, 1404},	// QNetworkReply::sslConfiguration
    {51, 1348, 1411},	// QNetworkReply::sslErrors?
    {51, 1354, 1427},	// QNetworkReply::staticMetaObject
    {51, 1379, 1424},	// QNetworkReply::tr$
    {51, 1380, 1381},	// QNetworkReply::tr$$
    {51, 1381, 1383},	// QNetworkReply::tr$$$
    {51, 1383, 1425},	// QNetworkReply::trUtf8$
    {51, 1384, 1382},	// QNetworkReply::trUtf8$$
    {51, 1385, 1384},	// QNetworkReply::trUtf8$$$
    {51, 1392, 1412},	// QNetworkReply::uploadProgress$$
    {51, 1393, 1397},	// QNetworkReply::url
    {51, 1416, 1415},	// QNetworkReply::writeData$$
    {51, 1447, 1452},	// QNetworkReply::~QNetworkReply
    {52, 6, 1505},	// QNetworkRequest::AlwaysCache
    {52, 7, 1502},	// QNetworkRequest::AlwaysNetwork
    {52, 15, 1495},	// QNetworkRequest::AuthenticationReuseAttribute
    {52, 18, 1506},	// QNetworkRequest::Automatic
    {52, 31, 1487},	// QNetworkRequest::CacheLoadControlAttribute
    {52, 32, 1488},	// QNetworkRequest::CacheSaveControlAttribute
    {52, 54, 1486},	// QNetworkRequest::ConnectionEncryptedAttribute
    {52, 61, 1482},	// QNetworkRequest::ContentDispositionHeader
    {52, 62, 1477},	// QNetworkRequest::ContentLengthHeader
    {52, 66, 1476},	// QNetworkRequest::ContentTypeHeader
    {52, 67, 1480},	// QNetworkRequest::CookieHeader
    {52, 68, 1494},	// QNetworkRequest::CookieLoadControlAttribute
    {52, 69, 1496},	// QNetworkRequest::CookieSaveControlAttribute
    {52, 72, 1493},	// QNetworkRequest::CustomVerbAttribute
    {52, 84, 1490},	// QNetworkRequest::DoNotBufferUploadDataAttribute
    {52, 86, 1498},	// QNetworkRequest::DownloadBufferAttribute
    {52, 99, 1508},	// QNetworkRequest::HighPriority
    {52, 107, 1491},	// QNetworkRequest::HttpPipeliningAllowedAttribute
    {52, 108, 1492},	// QNetworkRequest::HttpPipeliningWasUsedAttribute
    {52, 110, 1484},	// QNetworkRequest::HttpReasonPhraseAttribute
    {52, 111, 1483},	// QNetworkRequest::HttpStatusCodeAttribute
    {52, 127, 1479},	// QNetworkRequest::LastModifiedHeader
    {52, 153, 1478},	// QNetworkRequest::LocationHeader
    {52, 157, 1510},	// QNetworkRequest::LowPriority
    {52, 158, 1507},	// QNetworkRequest::Manual
    {52, 159, 1497},	// QNetworkRequest::MaximumDownloadBufferSizeAttribute
    {52, 172, 1509},	// QNetworkRequest::NormalPriority
    {52, 187, 1504},	// QNetworkRequest::PreferCache
    {52, 188, 1503},	// QNetworkRequest::PreferNetwork
    {52, 295, 1474},	// QNetworkRequest::QNetworkRequest
    {52, 296, -1},	// QNetworkRequest::QNetworkRequest#
    {52, 348, 1485},	// QNetworkRequest::RedirectionTargetAttribute
    {52, 366, 1481},	// QNetworkRequest::SetCookieHeader
    {52, 375, 1489},	// QNetworkRequest::SourceIsFromCacheAttribute
    {52, 388, 1499},	// QNetworkRequest::SynchronousRequestAttribute
    {52, 428, 1500},	// QNetworkRequest::User
    {52, 430, 1501},	// QNetworkRequest::UserMax
    {52, 478, 1475},	// QNetworkRequest::attribute$
    {52, 479, 1466},	// QNetworkRequest::attribute$#
    {52, 646, 1462},	// QNetworkRequest::hasRawHeader#
    {52, 651, 1460},	// QNetworkRequest::header$
    {52, 764, 1457},	// QNetworkRequest::operator!=#
    {52, 797, 1455},	// QNetworkRequest::operator=#
    {52, 800, 1456},	// QNetworkRequest::operator==#
    {52, 827, 1471},	// QNetworkRequest::originatingObject
    {52, 863, 1472},	// QNetworkRequest::priority
    {52, 1051, 1464},	// QNetworkRequest::rawHeader#
    {52, 1052, 1463},	// QNetworkRequest::rawHeaderList
    {52, 1122, 1467},	// QNetworkRequest::setAttribute$#
    {52, 1178, 1461},	// QNetworkRequest::setHeader$#
    {52, 1223, 1470},	// QNetworkRequest::setOriginatingObject#
    {52, 1251, 1473},	// QNetworkRequest::setPriority$
    {52, 1272, 1465},	// QNetworkRequest::setRawHeader##
    {52, 1310, 1469},	// QNetworkRequest::setSslConfiguration#
    {52, 1325, 1459},	// QNetworkRequest::setUrl#
    {52, 1345, 1468},	// QNetworkRequest::sslConfiguration
    {52, 1393, 1458},	// QNetworkRequest::url
    {52, 1448, 1511},	// QNetworkRequest::~QNetworkRequest
    {53, 46, 1556},	// QNetworkSession::Closing
    {53, 50, 1555},	// QNetworkSession::Connected
    {53, 52, 1554},	// QNetworkSession::Connecting
    {53, 81, 1557},	// QNetworkSession::Disconnected
    {53, 115, 1552},	// QNetworkSession::Invalid
    {53, 117, 1563},	// QNetworkSession::InvalidConfigurationError
    {53, 174, 1553},	// QNetworkSession::NotAvailable
    {53, 179, 1562},	// QNetworkSession::OperationNotSupportedError
    {53, 298, 1549},	// QNetworkSession::QNetworkSession#
    {53, 299, 1519},	// QNetworkSession::QNetworkSession##
    {53, 355, 1558},	// QNetworkSession::Roaming
    {53, 356, 1561},	// QNetworkSession::RoamingError
    {53, 365, 1560},	// QNetworkSession::SessionAbortedError
    {53, 422, 1559},	// QNetworkSession::UnknownSessionError
    {53, 441, 1537},	// QNetworkSession::accept
    {53, 443, 1530},	// QNetworkSession::activeTime
    {53, 496, 1529},	// QNetworkSession::bytesReceived
    {53, 498, 1528},	// QNetworkSession::bytesWritten
    {53, 514, 1533},	// QNetworkSession::close
    {53, 516, 1541},	// QNetworkSession::closed
    {53, 521, 1521},	// QNetworkSession::configuration
    {53, 531, 1545},	// QNetworkSession::connectNotify$
    {53, 584, 1546},	// QNetworkSession::disconnectNotify$
    {53, 600, 1524},	// QNetworkSession::error
    {53, 601, 1542},	// QNetworkSession::error$
    {53, 602, 1525},	// QNetworkSession::errorString
    {53, 656, 1536},	// QNetworkSession::ignore
    {53, 665, 1522},	// QNetworkSession::interface
    {53, 684, 1520},	// QNetworkSession::isOpen
    {53, 738, 1512},	// QNetworkSession::metaObject
    {53, 740, 1535},	// QNetworkSession::migrate
    {53, 755, 1544},	// QNetworkSession::newConfigurationActivated
    {53, 760, 1532},	// QNetworkSession::open
    {53, 761, 1540},	// QNetworkSession::opened
    {53, 859, 1543},	// QNetworkSession::preferredConfigurationChanged#$
    {53, 1031, 1518},	// QNetworkSession::qt_metacall$$?
    {53, 1033, 1513},	// QNetworkSession::qt_metacast$
    {53, 1071, 1538},	// QNetworkSession::reject
    {53, 1109, 1526},	// QNetworkSession::sessionProperty$
    {53, 1291, 1527},	// QNetworkSession::setSessionProperty$#
    {53, 1351, 1523},	// QNetworkSession::state
    {53, 1353, 1539},	// QNetworkSession::stateChanged$
    {53, 1354, 1551},	// QNetworkSession::staticMetaObject
    {53, 1356, 1534},	// QNetworkSession::stop
    {53, 1379, 1547},	// QNetworkSession::tr$
    {53, 1380, 1514},	// QNetworkSession::tr$$
    {53, 1381, 1516},	// QNetworkSession::tr$$$
    {53, 1383, 1548},	// QNetworkSession::trUtf8$
    {53, 1384, 1515},	// QNetworkSession::trUtf8$$
    {53, 1385, 1517},	// QNetworkSession::trUtf8$$$
    {53, 1411, 1550},	// QNetworkSession::waitForOpened
    {53, 1412, 1531},	// QNetworkSession::waitForOpened$
    {53, 1449, 1564},	// QNetworkSession::~QNetworkSession
    {63, 10, 1584},	// QSsl::AnyProtocol
    {63, 79, 1575},	// QSsl::Der
    {63, 83, 1589},	// QSsl::DnsEntry
    {63, 87, 1573},	// QSsl::Dsa
    {63, 88, 1588},	// QSsl::EmailEntry
    {63, 185, 1574},	// QSsl::Pem
    {63, 189, 1590},	// QSsl::PrivateKey
    {63, 201, 1591},	// QSsl::PublicKey
    {63, 357, 1572},	// QSsl::Rsa
    {63, 358, 1586},	// QSsl::SecureProtocols
    {63, 378, 1578},	// QSsl::SslOptionDisableCompression
    {63, 379, 1576},	// QSsl::SslOptionDisableEmptyFragments
    {63, 380, 1580},	// QSsl::SslOptionDisableLegacyRenegotiation
    {63, 381, 1579},	// QSsl::SslOptionDisableServerNameIndication
    {63, 382, 1577},	// QSsl::SslOptionDisableSessionTickets
    {63, 384, 1582},	// QSsl::SslV2
    {63, 385, 1581},	// QSsl::SslV3
    {63, 395, 1583},	// QSsl::TlsV1
    {63, 396, 1585},	// QSsl::TlsV1SslV3
    {63, 419, 1587},	// QSsl::UnknownProtocol
    {64, 48, 1627},	// QSslCertificate::CommonName
    {64, 70, 1630},	// QSslCertificate::CountryName
    {64, 152, 1628},	// QSslCertificate::LocalityName
    {64, 180, 1626},	// QSslCertificate::Organization
    {64, 181, 1629},	// QSslCertificate::OrganizationalUnitName
    {64, 300, 1619},	// QSslCertificate::QSslCertificate
    {64, 301, -7},	// QSslCertificate::QSslCertificate#
    {64, 302, -11},	// QSslCertificate::QSslCertificate#$
    {64, 386, 1631},	// QSslCertificate::StateOrProvinceName
    {64, 472, 1608},	// QSslCertificate::alternateSubjectNames
    {64, 511, 1600},	// QSslCertificate::clear
    {64, 578, 1621},	// QSslCertificate::digest
    {64, 579, 1603},	// QSslCertificate::digest$
    {64, 591, 1609},	// QSslCertificate::effectiveDate
    {64, 607, 1610},	// QSslCertificate::expiryDate
    {64, 615, 1625},	// QSslCertificate::fromData#
    {64, 616, 1616},	// QSslCertificate::fromData#$
    {64, 618, 1624},	// QSslCertificate::fromDevice#
    {64, 619, 1615},	// QSslCertificate::fromDevice#$
    {64, 623, 1622},	// QSslCertificate::fromPath$
    {64, 624, 1623},	// QSslCertificate::fromPath$$
    {64, 625, 1614},	// QSslCertificate::fromPath$$$
    {64, 635, 1617},	// QSslCertificate::handle
    {64, 682, 1598},	// QSslCertificate::isNull
    {64, 693, 1599},	// QSslCertificate::isValid
    {64, 696, 1605},	// QSslCertificate::issuerInfo#
    {64, 697, 1604},	// QSslCertificate::issuerInfo$
    {64, 764, 1597},	// QSslCertificate::operator!=#
    {64, 797, 1595},	// QSslCertificate::operator=#
    {64, 800, 1596},	// QSslCertificate::operator==#
    {64, 874, 1611},	// QSslCertificate::publicKey
    {64, 1102, 1602},	// QSslCertificate::serialNumber
    {64, 1358, 1607},	// QSslCertificate::subjectInfo#
    {64, 1359, 1606},	// QSslCertificate::subjectInfo$
    {64, 1369, 1613},	// QSslCertificate::toDer
    {64, 1373, 1612},	// QSslCertificate::toPem
    {64, 1399, 1601},	// QSslCertificate::version
    {64, 1450, 1632},	// QSslCertificate::~QSslCertificate
    {65, 303, 1633},	// QSslCipher::QSslCipher
    {65, 304, 1635},	// QSslCipher::QSslCipher#
    {65, 305, 1634},	// QSslCipher::QSslCipher$$
    {65, 481, 1644},	// QSslCipher::authenticationMethod
    {65, 597, 1645},	// QSslCipher::encryptionMethod
    {65, 682, 1639},	// QSslCipher::isNull
    {65, 701, 1643},	// QSslCipher::keyExchangeMethod
    {65, 748, 1640},	// QSslCipher::name
    {65, 764, 1638},	// QSslCipher::operator!=#
    {65, 797, 1636},	// QSslCipher::operator=#
    {65, 800, 1637},	// QSslCipher::operator==#
    {65, 865, 1647},	// QSslCipher::protocol
    {65, 866, 1646},	// QSslCipher::protocolString
    {65, 1360, 1641},	// QSslCipher::supportedBits
    {65, 1394, 1642},	// QSslCipher::usedBits
    {65, 1451, 1648},	// QSslCipher::~QSslCipher
    {66, 306, 1649},	// QSslConfiguration::QSslConfiguration
    {66, 307, 1650},	// QSslConfiguration::QSslConfiguration#
    {66, 499, 1670},	// QSslConfiguration::caCertificates
    {66, 510, 1668},	// QSslConfiguration::ciphers
    {66, 574, 1674},	// QSslConfiguration::defaultConfiguration
    {66, 682, 1654},	// QSslConfiguration::isNull
    {66, 721, 1661},	// QSslConfiguration::localCertificate
    {66, 764, 1653},	// QSslConfiguration::operator!=#
    {66, 797, 1651},	// QSslConfiguration::operator=#
    {66, 800, 1652},	// QSslConfiguration::operator==#
    {66, 840, 1663},	// QSslConfiguration::peerCertificate
    {66, 841, 1664},	// QSslConfiguration::peerCertificateChain
    {66, 845, 1659},	// QSslConfiguration::peerVerifyDepth
    {66, 848, 1657},	// QSslConfiguration::peerVerifyMode
    {66, 864, 1666},	// QSslConfiguration::privateKey
    {66, 865, 1655},	// QSslConfiguration::protocol
    {66, 1107, 1665},	// QSslConfiguration::sessionCipher
    {66, 1134, 1671},	// QSslConfiguration::setCaCertificates?
    {66, 1143, 1669},	// QSslConfiguration::setCiphers?
    {66, 1159, 1675},	// QSslConfiguration::setDefaultConfiguration#
    {66, 1196, 1662},	// QSslConfiguration::setLocalCertificate#
    {66, 1239, 1660},	// QSslConfiguration::setPeerVerifyDepth$
    {66, 1241, 1658},	// QSslConfiguration::setPeerVerifyMode$
    {66, 1253, 1667},	// QSslConfiguration::setPrivateKey#
    {66, 1259, 1656},	// QSslConfiguration::setProtocol$
    {66, 1312, 1672},	// QSslConfiguration::setSslOption$$
    {66, 1367, 1673},	// QSslConfiguration::testSslOption$
    {66, 1452, 1676},	// QSslConfiguration::~QSslConfiguration
    {67, 16, 1707},	// QSslError::AuthorityIssuerSerialNumberMismatch
    {67, 38, 1711},	// QSslError::CertificateBlacklisted
    {67, 39, 1693},	// QSslError::CertificateExpired
    {67, 40, 1692},	// QSslError::CertificateNotYetValid
    {67, 41, 1705},	// QSslError::CertificateRejected
    {67, 42, 1700},	// QSslError::CertificateRevoked
    {67, 43, 1691},	// QSslError::CertificateSignatureFailed
    {67, 44, 1704},	// QSslError::CertificateUntrusted
    {67, 103, 1709},	// QSslError::HostNameMismatch
    {67, 116, 1701},	// QSslError::InvalidCaCertificate
    {67, 118, 1695},	// QSslError::InvalidNotAfterField
    {67, 119, 1694},	// QSslError::InvalidNotBeforeField
    {67, 120, 1703},	// QSslError::InvalidPurpose
    {67, 167, 1687},	// QSslError::NoError
    {67, 168, 1708},	// QSslError::NoPeerCertificate
    {67, 170, 1710},	// QSslError::NoSslSupport
    {67, 183, 1702},	// QSslError::PathLengthExceeded
    {67, 308, 1677},	// QSslError::QSslError
    {67, 309, 1680},	// QSslError::QSslError#
    {67, 310, 1678},	// QSslError::QSslError$
    {67, 311, 1679},	// QSslError::QSslError$#
    {67, 359, 1696},	// QSslError::SelfSignedCertificate
    {67, 360, 1697},	// QSslError::SelfSignedCertificateInChain
    {67, 387, 1706},	// QSslError::SubjectIssuerMismatch
    {67, 401, 1690},	// QSslError::UnableToDecodeIssuerPublicKey
    {67, 402, 1689},	// QSslError::UnableToDecryptCertificateSignature
    {67, 403, 1688},	// QSslError::UnableToGetIssuerCertificate
    {67, 404, 1698},	// QSslError::UnableToGetLocalIssuerCertificate
    {67, 405, 1699},	// QSslError::UnableToVerifyFirstCertificate
    {67, 425, 1712},	// QSslError::UnspecifiedError
    {67, 507, 1686},	// QSslError::certificate
    {67, 600, 1684},	// QSslError::error
    {67, 602, 1685},	// QSslError::errorString
    {67, 764, 1683},	// QSslError::operator!=#
    {67, 797, 1681},	// QSslError::operator=#
    {67, 800, 1682},	// QSslError::operator==#
    {67, 1453, 1713},	// QSslError::~QSslError
    {68, 312, 1714},	// QSslKey::QSslKey
    {68, 313, 1717},	// QSslKey::QSslKey#
    {68, 314, -403},	// QSslKey::QSslKey#$
    {68, 315, -406},	// QSslKey::QSslKey#$$
    {68, 316, -409},	// QSslKey::QSslKey#$$$
    {68, 317, -412},	// QSslKey::QSslKey#$$$#
    {68, 464, 1723},	// QSslKey::algorithm
    {68, 511, 1720},	// QSslKey::clear
    {68, 635, 1726},	// QSslKey::handle
    {68, 682, 1719},	// QSslKey::isNull
    {68, 709, 1721},	// QSslKey::length
    {68, 764, 1728},	// QSslKey::operator!=#
    {68, 797, 1718},	// QSslKey::operator=#
    {68, 800, 1727},	// QSslKey::operator==#
    {68, 1369, 1736},	// QSslKey::toDer
    {68, 1370, 1725},	// QSslKey::toDer#
    {68, 1373, 1735},	// QSslKey::toPem
    {68, 1374, 1724},	// QSslKey::toPem#
    {68, 1386, 1722},	// QSslKey::type
    {68, 1454, 1737},	// QSslKey::~QSslKey
    {69, 17, 1846},	// QSslSocket::AutoVerifyPeer
    {69, 318, 1821},	// QSslSocket::QSslSocket
    {69, 319, 1745},	// QSslSocket::QSslSocket#
    {69, 340, 1844},	// QSslSocket::QueryPeer
    {69, 376, 1841},	// QSslSocket::SslClientMode
    {69, 383, 1842},	// QSslSocket::SslServerMode
    {69, 410, 1840},	// QSslSocket::UnencryptedMode
    {69, 431, 1843},	// QSslSocket::VerifyNone
    {69, 432, 1845},	// QSslSocket::VerifyPeer
    {69, 438, 1767},	// QSslSocket::abort
    {69, 445, 1789},	// QSslSocket::addCaCertificate#
    {69, 447, 1830},	// QSslSocket::addCaCertificates$
    {69, 448, 1831},	// QSslSocket::addCaCertificates$$
    {69, 449, 1788},	// QSslSocket::addCaCertificates$$$
    {69, 450, 1790},	// QSslSocket::addCaCertificates?
    {69, 452, 1794},	// QSslSocket::addDefaultCaCertificate#
    {69, 454, 1832},	// QSslSocket::addDefaultCaCertificates$
    {69, 455, 1833},	// QSslSocket::addDefaultCaCertificates$$
    {69, 456, 1793},	// QSslSocket::addDefaultCaCertificates$$$
    {69, 457, 1795},	// QSslSocket::addDefaultCaCertificates?
    {69, 476, 1765},	// QSslSocket::atEnd
    {69, 495, 1761},	// QSslSocket::bytesAvailable
    {69, 497, 1762},	// QSslSocket::bytesToWrite
    {69, 499, 1792},	// QSslSocket::caCertificates
    {69, 503, 1763},	// QSslSocket::canReadLine
    {69, 510, 1782},	// QSslSocket::ciphers
    {69, 514, 1764},	// QSslSocket::close
    {69, 539, 1822},	// QSslSocket::connectToHostEncrypted$$
    {69, 540, -14},	// QSslSocket::connectToHostEncrypted$$$
    {69, 541, 1747},	// QSslSocket::connectToHostEncrypted$$$$
    {69, 544, 1815},	// QSslSocket::connectToHostImplementation$$$
    {69, 572, 1797},	// QSslSocket::defaultCaCertificates
    {69, 573, 1786},	// QSslSocket::defaultCiphers
    {69, 581, 1816},	// QSslSocket::disconnectFromHostImplementation
    {69, 592, 1810},	// QSslSocket::encrypted
    {69, 593, 1769},	// QSslSocket::encryptedBytesAvailable
    {69, 594, 1770},	// QSslSocket::encryptedBytesToWrite
    {69, 596, 1814},	// QSslSocket::encryptedBytesWritten$
    {69, 613, 1766},	// QSslSocket::flush
    {69, 657, 1809},	// QSslSocket::ignoreSslErrors
    {69, 658, 1806},	// QSslSocket::ignoreSslErrors?
    {69, 673, 1752},	// QSslSocket::isEncrypted
    {69, 721, 1775},	// QSslSocket::localCertificate
    {69, 738, 1738},	// QSslSocket::metaObject
    {69, 744, 1751},	// QSslSocket::mode
    {69, 746, 1813},	// QSslSocket::modeChanged$
    {69, 840, 1776},	// QSslSocket::peerCertificate
    {69, 841, 1777},	// QSslSocket::peerCertificateChain
    {69, 845, 1757},	// QSslSocket::peerVerifyDepth
    {69, 847, 1811},	// QSslSocket::peerVerifyError#
    {69, 848, 1755},	// QSslSocket::peerVerifyMode
    {69, 849, 1759},	// QSslSocket::peerVerifyName
    {69, 864, 1781},	// QSslSocket::privateKey
    {69, 865, 1753},	// QSslSocket::protocol
    {69, 1031, 1744},	// QSslSocket::qt_metacall$$?
    {69, 1033, 1739},	// QSslSocket::qt_metacast$
    {69, 1060, 1817},	// QSslSocket::readData$$
    {69, 1107, 1778},	// QSslSocket::sessionCipher
    {69, 1134, 1791},	// QSslSocket::setCaCertificates?
    {69, 1142, 1784},	// QSslSocket::setCiphers$
    {69, 1143, 1783},	// QSslSocket::setCiphers?
    {69, 1155, 1796},	// QSslSocket::setDefaultCaCertificates?
    {69, 1157, 1785},	// QSslSocket::setDefaultCiphers?
    {69, 1196, 1773},	// QSslSocket::setLocalCertificate#
    {69, 1197, 1826},	// QSslSocket::setLocalCertificate$
    {69, 1198, 1774},	// QSslSocket::setLocalCertificate$$
    {69, 1239, 1758},	// QSslSocket::setPeerVerifyDepth$
    {69, 1241, 1756},	// QSslSocket::setPeerVerifyMode$
    {69, 1243, 1760},	// QSslSocket::setPeerVerifyName$
    {69, 1253, 1779},	// QSslSocket::setPrivateKey#
    {69, 1254, 1827},	// QSslSocket::setPrivateKey$
    {69, 1255, 1828},	// QSslSocket::setPrivateKey$$
    {69, 1256, 1829},	// QSslSocket::setPrivateKey$$$
    {69, 1257, 1780},	// QSslSocket::setPrivateKey$$$#
    {69, 1259, 1754},	// QSslSocket::setProtocol$
    {69, 1276, 1768},	// QSslSocket::setReadBufferSize$
    {69, 1297, 1824},	// QSslSocket::setSocketDescriptor$
    {69, 1298, 1825},	// QSslSocket::setSocketDescriptor$$
    {69, 1299, 1748},	// QSslSocket::setSocketDescriptor$$$
    {69, 1306, 1749},	// QSslSocket::setSocketOption$#
    {69, 1310, 1772},	// QSslSocket::setSslConfiguration#
    {69, 1343, 1750},	// QSslSocket::socketOption$
    {69, 1345, 1771},	// QSslSocket::sslConfiguration
    {69, 1346, 1804},	// QSslSocket::sslErrors
    {69, 1348, 1812},	// QSslSocket::sslErrors?
    {69, 1349, 1807},	// QSslSocket::startClientEncryption
    {69, 1350, 1808},	// QSslSocket::startServerEncryption
    {69, 1354, 1839},	// QSslSocket::staticMetaObject
    {69, 1361, 1787},	// QSslSocket::supportedCiphers
    {69, 1362, 1805},	// QSslSocket::supportsSsl
    {69, 1363, 1798},	// QSslSocket::systemCaCertificates
    {69, 1379, 1819},	// QSslSocket::tr$
    {69, 1380, 1740},	// QSslSocket::tr$$
    {69, 1381, 1742},	// QSslSocket::tr$$$
    {69, 1383, 1820},	// QSslSocket::trUtf8$
    {69, 1384, 1741},	// QSslSocket::trUtf8$$
    {69, 1385, 1743},	// QSslSocket::trUtf8$$$
    {69, 1400, 1837},	// QSslSocket::waitForBytesWritten
    {69, 1401, 1802},	// QSslSocket::waitForBytesWritten$
    {69, 1402, 1834},	// QSslSocket::waitForConnected
    {69, 1403, 1799},	// QSslSocket::waitForConnected$
    {69, 1404, 1838},	// QSslSocket::waitForDisconnected
    {69, 1405, 1803},	// QSslSocket::waitForDisconnected$
    {69, 1406, 1835},	// QSslSocket::waitForEncrypted
    {69, 1407, 1800},	// QSslSocket::waitForEncrypted$
    {69, 1413, 1836},	// QSslSocket::waitForReadyRead
    {69, 1414, 1801},	// QSslSocket::waitForReadyRead$
    {69, 1416, 1818},	// QSslSocket::writeData$$
    {69, 1455, 1847},	// QSslSocket::~QSslSocket
    {72, 320, 1877},	// QTcpServer::QTcpServer
    {72, 321, 1855},	// QTcpServer::QTcpServer#
    {72, 459, 1873},	// QTcpServer::addPendingConnection#
    {72, 514, 1857},	// QTcpServer::close
    {72, 602, 1869},	// QTcpServer::errorString
    {72, 642, 1866},	// QTcpServer::hasPendingConnections
    {72, 660, 1872},	// QTcpServer::incomingConnection$
    {72, 681, 1858},	// QTcpServer::isListening
    {72, 716, 1878},	// QTcpServer::listen
    {72, 717, 1879},	// QTcpServer::listen#
    {72, 718, 1856},	// QTcpServer::listen#$
    {72, 733, 1860},	// QTcpServer::maxPendingConnections
    {72, 738, 1848},	// QTcpServer::metaObject
    {72, 756, 1874},	// QTcpServer::newConnection
    {72, 757, 1867},	// QTcpServer::nextPendingConnection
    {72, 868, 1871},	// QTcpServer::proxy
    {72, 1031, 1854},	// QTcpServer::qt_metacall$$?
    {72, 1033, 1849},	// QTcpServer::qt_metacast$
    {72, 1103, 1862},	// QTcpServer::serverAddress
    {72, 1104, 1868},	// QTcpServer::serverError
    {72, 1106, 1861},	// QTcpServer::serverPort
    {72, 1204, 1859},	// QTcpServer::setMaxPendingConnections$
    {72, 1263, 1870},	// QTcpServer::setProxy#
    {72, 1297, 1864},	// QTcpServer::setSocketDescriptor$
    {72, 1341, 1863},	// QTcpServer::socketDescriptor
    {72, 1354, 1882},	// QTcpServer::staticMetaObject
    {72, 1379, 1875},	// QTcpServer::tr$
    {72, 1380, 1850},	// QTcpServer::tr$$
    {72, 1381, 1852},	// QTcpServer::tr$$$
    {72, 1383, 1876},	// QTcpServer::trUtf8$
    {72, 1384, 1851},	// QTcpServer::trUtf8$$
    {72, 1385, 1853},	// QTcpServer::trUtf8$$$
    {72, 1408, 1880},	// QTcpServer::waitForNewConnection
    {72, 1409, 1881},	// QTcpServer::waitForNewConnection$
    {72, 1410, 1865},	// QTcpServer::waitForNewConnection$$
    {72, 1456, 1883},	// QTcpServer::~QTcpServer
    {73, 322, 1894},	// QTcpSocket::QTcpSocket
    {73, 323, 1891},	// QTcpSocket::QTcpSocket#
    {73, 738, 1884},	// QTcpSocket::metaObject
    {73, 1031, 1890},	// QTcpSocket::qt_metacall$$?
    {73, 1033, 1885},	// QTcpSocket::qt_metacast$
    {73, 1354, 1895},	// QTcpSocket::staticMetaObject
    {73, 1379, 1892},	// QTcpSocket::tr$
    {73, 1380, 1886},	// QTcpSocket::tr$$
    {73, 1381, 1888},	// QTcpSocket::tr$$$
    {73, 1383, 1893},	// QTcpSocket::trUtf8$
    {73, 1384, 1887},	// QTcpSocket::trUtf8$$
    {73, 1385, 1889},	// QTcpSocket::trUtf8$$$
    {73, 1457, 1896},	// QTcpSocket::~QTcpSocket
    {78, 75, 1927},	// QUdpSocket::DefaultForPlatform
    {78, 85, 1929},	// QUdpSocket::DontShareAddress
    {78, 324, 1922},	// QUdpSocket::QUdpSocket
    {78, 325, 1904},	// QUdpSocket::QUdpSocket#
    {78, 353, 1930},	// QUdpSocket::ReuseAddressHint
    {78, 369, 1928},	// QUdpSocket::ShareAddress
    {78, 488, 1923},	// QUdpSocket::bind
    {78, 489, 1905},	// QUdpSocket::bind#$
    {78, 490, 1907},	// QUdpSocket::bind#$$
    {78, 491, 1906},	// QUdpSocket::bind$
    {78, 492, 1908},	// QUdpSocket::bind$$
    {78, 643, 1915},	// QUdpSocket::hasPendingDatagrams
    {78, 699, 1909},	// QUdpSocket::joinMulticastGroup#
    {78, 700, 1910},	// QUdpSocket::joinMulticastGroup##
    {78, 707, 1911},	// QUdpSocket::leaveMulticastGroup#
    {78, 708, 1912},	// QUdpSocket::leaveMulticastGroup##
    {78, 738, 1897},	// QUdpSocket::metaObject
    {78, 747, 1913},	// QUdpSocket::multicastInterface
    {78, 850, 1916},	// QUdpSocket::pendingDatagramSize
    {78, 1031, 1903},	// QUdpSocket::qt_metacall$$?
    {78, 1033, 1898},	// QUdpSocket::qt_metacast$
    {78, 1062, 1924},	// QUdpSocket::readDatagram$$
    {78, 1063, 1925},	// QUdpSocket::readDatagram$$#
    {78, 1064, 1917},	// QUdpSocket::readDatagram$$#$
    {78, 1208, 1914},	// QUdpSocket::setMulticastInterface#
    {78, 1354, 1926},	// QUdpSocket::staticMetaObject
    {78, 1379, 1920},	// QUdpSocket::tr$
    {78, 1380, 1899},	// QUdpSocket::tr$$
    {78, 1381, 1901},	// QUdpSocket::tr$$$
    {78, 1383, 1921},	// QUdpSocket::trUtf8$
    {78, 1384, 1900},	// QUdpSocket::trUtf8$$
    {78, 1385, 1902},	// QUdpSocket::trUtf8$$$
    {78, 1418, 1919},	// QUdpSocket::writeDatagram##$
    {78, 1419, 1918},	// QUdpSocket::writeDatagram$$#$
    {78, 1458, 1931},	// QUdpSocket::~QUdpSocket
    {80, 89, 1973},	// QUrlInfo::ExeGroup
    {80, 90, 1976},	// QUrlInfo::ExeOther
    {80, 91, 1970},	// QUrlInfo::ExeOwner
    {80, 326, 1932},	// QUrlInfo::QUrlInfo
    {80, 327, 1933},	// QUrlInfo::QUrlInfo#
    {80, 328, 1935},	// QUrlInfo::QUrlInfo#$$$$##$$$$$$
    {80, 329, 1934},	// QUrlInfo::QUrlInfo$$$$$##$$$$$$
    {80, 342, 1971},	// QUrlInfo::ReadGroup
    {80, 344, 1974},	// QUrlInfo::ReadOther
    {80, 345, 1968},	// QUrlInfo::ReadOwner
    {80, 433, 1972},	// QUrlInfo::WriteGroup
    {80, 435, 1975},	// QUrlInfo::WriteOther
    {80, 436, 1969},	// QUrlInfo::WriteOwner
    {80, 599, 1965},	// QUrlInfo::equal##$
    {80, 633, 1963},	// QUrlInfo::greaterThan##$
    {80, 634, 1953},	// QUrlInfo::group
    {80, 672, 1957},	// QUrlInfo::isDir
    {80, 674, 1962},	// QUrlInfo::isExecutable
    {80, 675, 1958},	// QUrlInfo::isFile
    {80, 685, 1961},	// QUrlInfo::isReadable
    {80, 691, 1959},	// QUrlInfo::isSymLink
    {80, 693, 1949},	// QUrlInfo::isValid
    {80, 694, 1960},	// QUrlInfo::isWritable
    {80, 703, 1955},	// QUrlInfo::lastModified
    {80, 704, 1956},	// QUrlInfo::lastRead
    {80, 711, 1964},	// QUrlInfo::lessThan##$
    {80, 748, 1950},	// QUrlInfo::name
    {80, 764, 1967},	// QUrlInfo::operator!=#
    {80, 797, 1936},	// QUrlInfo::operator=#
    {80, 800, 1966},	// QUrlInfo::operator==#
    {80, 828, 1952},	// QUrlInfo::owner
    {80, 851, 1951},	// QUrlInfo::permissions
    {80, 1161, 1938},	// QUrlInfo::setDir$
    {80, 1172, 1939},	// QUrlInfo::setFile$
    {80, 1176, 1942},	// QUrlInfo::setGroup$
    {80, 1190, 1947},	// QUrlInfo::setLastModified#
    {80, 1192, 1948},	// QUrlInfo::setLastRead#
    {80, 1211, 1937},	// QUrlInfo::setName$
    {80, 1225, 1941},	// QUrlInfo::setOwner$
    {80, 1245, 1946},	// QUrlInfo::setPermissions$
    {80, 1278, 1945},	// QUrlInfo::setReadable$
    {80, 1293, 1943},	// QUrlInfo::setSize$
    {80, 1319, 1940},	// QUrlInfo::setSymLink$
    {80, 1339, 1944},	// QUrlInfo::setWritable$
    {80, 1340, 1954},	// QUrlInfo::size
    {80, 1459, 1977},	// QUrlInfo::~QUrlInfo
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();

static bool initialized = false;
Smoke *qtnetwork_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtnetwork_Smoke() {
    init_qtcore_Smoke();
    if (initialized) return;
    qtnetwork_Smoke = new Smoke(
        "qtnetwork",
        __smokeqtnetwork::classes, 84,
        __smokeqtnetwork::methods, 1978,
        __smokeqtnetwork::methodMaps, 1625,
        __smokeqtnetwork::methodNames, 1459,
        __smokeqtnetwork::types, 445,
        __smokeqtnetwork::inheritanceList,
        __smokeqtnetwork::argumentList,
        __smokeqtnetwork::ambiguousMethodList,
        __smokeqtnetwork::cast );
    initialized = true;
}

void delete_qtnetwork_Smoke() { delete qtnetwork_Smoke; }

}
