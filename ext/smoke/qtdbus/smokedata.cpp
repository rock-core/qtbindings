#include <qtdbus_includes.h>

#include <smoke.h>
#include <qtdbus_smoke.h>

namespace __smokeqtdbus {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //DBusError
      switch(to) {
        case 1: return (void*)(DBusError*)xptr;
        default: return xptr;
      }
    case 2:   //QBitArray
      switch(to) {
        case 2: return (void*)(QBitArray*)xptr;
        default: return xptr;
      }
    case 3:   //QBool
      switch(to) {
        case 3: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 4:   //QByteArray
      switch(to) {
        case 4: return (void*)(QByteArray*)xptr;
        default: return xptr;
      }
    case 5:   //QChar
      switch(to) {
        case 5: return (void*)(QChar*)xptr;
        default: return xptr;
      }
    case 6:   //QChildEvent
      switch(to) {
        case 32: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 6: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 8:   //QDBusAbstractAdaptor
      switch(to) {
        case 43: return (void*)(QObject*)(QDBusAbstractAdaptor*)xptr;
        case 8: return (void*)(QDBusAbstractAdaptor*)xptr;
        default: return xptr;
      }
    case 9:   //QDBusAbstractInterface
      switch(to) {
        case 10: return (void*)(QDBusAbstractInterfaceBase*)(QDBusAbstractInterface*)xptr;
        case 43: return (void*)(QObject*)(QDBusAbstractInterface*)xptr;
        case 9: return (void*)(QDBusAbstractInterface*)xptr;
        case 16: return (void*)(QDBusInterface*)(QDBusAbstractInterface*)xptr;
        case 13: return (void*)(QDBusConnectionInterface*)(QDBusAbstractInterface*)xptr;
        default: return xptr;
      }
    case 10:   //QDBusAbstractInterfaceBase
      switch(to) {
        case 43: return (void*)(QObject*)(QDBusAbstractInterfaceBase*)xptr;
        case 10: return (void*)(QDBusAbstractInterfaceBase*)xptr;
        case 9: return (void*)(QDBusAbstractInterface*)(QDBusAbstractInterfaceBase*)xptr;
        case 16: return (void*)(QDBusInterface*)(QDBusAbstractInterfaceBase*)xptr;
        case 13: return (void*)(QDBusConnectionInterface*)(QDBusAbstractInterfaceBase*)xptr;
        default: return xptr;
      }
    case 11:   //QDBusArgument
      switch(to) {
        case 11: return (void*)(QDBusArgument*)xptr;
        default: return xptr;
      }
    case 12:   //QDBusConnection
      switch(to) {
        case 12: return (void*)(QDBusConnection*)xptr;
        default: return xptr;
      }
    case 13:   //QDBusConnectionInterface
      switch(to) {
        case 9: return (void*)(QDBusAbstractInterface*)(QDBusConnectionInterface*)xptr;
        case 10: return (void*)(QDBusAbstractInterfaceBase*)(QDBusConnectionInterface*)xptr;
        case 43: return (void*)(QObject*)(QDBusConnectionInterface*)xptr;
        case 13: return (void*)(QDBusConnectionInterface*)xptr;
        default: return xptr;
      }
    case 14:   //QDBusContext
      switch(to) {
        case 14: return (void*)(QDBusContext*)xptr;
        default: return xptr;
      }
    case 15:   //QDBusError
      switch(to) {
        case 15: return (void*)(QDBusError*)xptr;
        default: return xptr;
      }
    case 16:   //QDBusInterface
      switch(to) {
        case 9: return (void*)(QDBusAbstractInterface*)(QDBusInterface*)xptr;
        case 10: return (void*)(QDBusAbstractInterfaceBase*)(QDBusInterface*)xptr;
        case 43: return (void*)(QObject*)(QDBusInterface*)xptr;
        case 16: return (void*)(QDBusInterface*)xptr;
        default: return xptr;
      }
    case 17:   //QDBusMessage
      switch(to) {
        case 17: return (void*)(QDBusMessage*)xptr;
        default: return xptr;
      }
    case 18:   //QDBusMetaType
      switch(to) {
        case 18: return (void*)(QDBusMetaType*)xptr;
        default: return xptr;
      }
    case 19:   //QDBusPendingCall
      switch(to) {
        case 19: return (void*)(QDBusPendingCall*)xptr;
        case 20: return (void*)(QDBusPendingCallWatcher*)(QDBusPendingCall*)xptr;
        default: return xptr;
      }
    case 20:   //QDBusPendingCallWatcher
      switch(to) {
        case 43: return (void*)(QObject*)(QDBusPendingCallWatcher*)xptr;
        case 19: return (void*)(QDBusPendingCall*)(QDBusPendingCallWatcher*)xptr;
        case 20: return (void*)(QDBusPendingCallWatcher*)xptr;
        default: return xptr;
      }
    case 21:   //QDBusServer
      switch(to) {
        case 43: return (void*)(QObject*)(QDBusServer*)xptr;
        case 21: return (void*)(QDBusServer*)xptr;
        default: return xptr;
      }
    case 22:   //QDBusServiceWatcher
      switch(to) {
        case 43: return (void*)(QObject*)(QDBusServiceWatcher*)xptr;
        case 22: return (void*)(QDBusServiceWatcher*)xptr;
        default: return xptr;
      }
    case 23:   //QDBusUnixFileDescriptor
      switch(to) {
        case 23: return (void*)(QDBusUnixFileDescriptor*)xptr;
        default: return xptr;
      }
    case 24:   //QDBusVariant
      switch(to) {
        case 60: return (void*)(QVariant*)(QDBusVariant*)xptr;
        case 24: return (void*)(QDBusVariant*)xptr;
        default: return xptr;
      }
    case 25:   //QDBusVirtualObject
      switch(to) {
        case 43: return (void*)(QObject*)(QDBusVirtualObject*)xptr;
        case 25: return (void*)(QDBusVirtualObject*)xptr;
        default: return xptr;
      }
    case 26:   //QDataStream
      switch(to) {
        case 26: return (void*)(QDataStream*)xptr;
        default: return xptr;
      }
    case 27:   //QDate
      switch(to) {
        case 27: return (void*)(QDate*)xptr;
        default: return xptr;
      }
    case 28:   //QDateTime
      switch(to) {
        case 28: return (void*)(QDateTime*)xptr;
        default: return xptr;
      }
    case 29:   //QDebug
      switch(to) {
        case 29: return (void*)(QDebug*)xptr;
        default: return xptr;
      }
    case 30:   //QDir
      switch(to) {
        case 30: return (void*)(QDir*)xptr;
        default: return xptr;
      }
    case 31:   //QEasingCurve
      switch(to) {
        case 31: return (void*)(QEasingCurve*)xptr;
        default: return xptr;
      }
    case 32:   //QEvent
      switch(to) {
        case 32: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 34:   //QHashDummyValue
      switch(to) {
        case 34: return (void*)(QHashDummyValue*)xptr;
        default: return xptr;
      }
    case 35:   //QIncompatibleFlag
      switch(to) {
        case 35: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 36:   //QLatin1String
      switch(to) {
        case 36: return (void*)(QLatin1String*)xptr;
        default: return xptr;
      }
    case 37:   //QLine
      switch(to) {
        case 37: return (void*)(QLine*)xptr;
        default: return xptr;
      }
    case 38:   //QLineF
      switch(to) {
        case 38: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 39:   //QLocale
      switch(to) {
        case 39: return (void*)(QLocale*)xptr;
        default: return xptr;
      }
    case 40:   //QMargins
      switch(to) {
        case 40: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 41:   //QMetaObject
      switch(to) {
        case 41: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 42:   //QModelIndex
      switch(to) {
        case 42: return (void*)(QModelIndex*)xptr;
        default: return xptr;
      }
    case 43:   //QObject
      switch(to) {
        case 43: return (void*)(QObject*)xptr;
        case 8: return (void*)(QDBusAbstractAdaptor*)(QObject*)xptr;
        case 9: return (void*)(QDBusAbstractInterface*)(QObject*)xptr;
        case 20: return (void*)(QDBusPendingCallWatcher*)(QObject*)xptr;
        case 10: return (void*)(QDBusAbstractInterfaceBase*)(QObject*)xptr;
        case 22: return (void*)(QDBusServiceWatcher*)(QObject*)xptr;
        case 16: return (void*)(QDBusInterface*)(QObject*)xptr;
        case 13: return (void*)(QDBusConnectionInterface*)(QObject*)xptr;
        case 21: return (void*)(QDBusServer*)(QObject*)xptr;
        case 25: return (void*)(QDBusVirtualObject*)(QObject*)xptr;
        default: return xptr;
      }
    case 44:   //QPersistentModelIndex
      switch(to) {
        case 44: return (void*)(QPersistentModelIndex*)xptr;
        default: return xptr;
      }
    case 45:   //QPoint
      switch(to) {
        case 45: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 46:   //QPointF
      switch(to) {
        case 46: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 47:   //QRect
      switch(to) {
        case 47: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 48:   //QRectF
      switch(to) {
        case 48: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 49:   //QRegExp
      switch(to) {
        case 49: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 50:   //QSize
      switch(to) {
        case 50: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 51:   //QSizeF
      switch(to) {
        case 51: return (void*)(QSizeF*)xptr;
        default: return xptr;
      }
    case 52:   //QString::Null
      switch(to) {
        case 52: return (void*)(QString::Null*)xptr;
        default: return xptr;
      }
    case 53:   //QStringRef
      switch(to) {
        case 53: return (void*)(QStringRef*)xptr;
        default: return xptr;
      }
    case 54:   //QTextStream
      switch(to) {
        case 54: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 55:   //QTextStreamManipulator
      switch(to) {
        case 55: return (void*)(QTextStreamManipulator*)xptr;
        default: return xptr;
      }
    case 56:   //QTime
      switch(to) {
        case 56: return (void*)(QTime*)xptr;
        default: return xptr;
      }
    case 57:   //QTimerEvent
      switch(to) {
        case 32: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 57: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 58:   //QUrl
      switch(to) {
        case 58: return (void*)(QUrl*)xptr;
        default: return xptr;
      }
    case 59:   //QUuid
      switch(to) {
        case 59: return (void*)(QUuid*)xptr;
        default: return xptr;
      }
    case 60:   //QVariant
      switch(to) {
        case 60: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 61:   //QVariantComparisonHelper
      switch(to) {
        case 61: return (void*)(QVariantComparisonHelper*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    43, 0,	// 1: QObject
    10, 0,	// 3: QDBusAbstractInterfaceBase
    9, 0,	// 5: QDBusAbstractInterface
    43, 19, 0,	// 7: QObject, QDBusPendingCall
};

// These are the xenum functions for manipulating enum pointers
void xenum_QGlobalSpace(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBusConnection(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBusConnectionInterface(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBus(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBusArgument(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBusServiceWatcher(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBusError(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QDBusMessage(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QDBus(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusAbstractAdaptor(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusAbstractInterface(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusAbstractInterfaceBase(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusArgument(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusConnection(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusConnectionInterface(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusContext(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusError(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusInterface(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusMessage(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusMetaType(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusPendingCall(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusPendingCallWatcher(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusServer(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusServiceWatcher(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusUnixFileDescriptor(Smoke::Index, void*, Smoke::Stack);
void xcall_QDBusVirtualObject(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "DBusError", true, 0, 0, 0, 0, 0 },	//1
    { "QBitArray", true, 0, 0, 0, 0, 0 },	//2
    { "QBool", true, 0, 0, 0, 0, 0 },	//3
    { "QByteArray", true, 0, 0, 0, 0, 0 },	//4
    { "QChar", true, 0, 0, 0, 0, 0 },	//5
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//6
    { "QDBus", false, 0, xcall_QDBus, xenum_QDBus, Smoke::cf_namespace, 0 },	//7
    { "QDBusAbstractAdaptor", false, 1, xcall_QDBusAbstractAdaptor, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusAbstractAdaptor) },	//8
    { "QDBusAbstractInterface", false, 3, xcall_QDBusAbstractInterface, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusAbstractInterface) },	//9
    { "QDBusAbstractInterfaceBase", false, 1, xcall_QDBusAbstractInterfaceBase, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusAbstractInterfaceBase) },	//10
    { "QDBusArgument", false, 0, xcall_QDBusArgument, xenum_QDBusArgument, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusArgument) },	//11
    { "QDBusConnection", false, 0, xcall_QDBusConnection, xenum_QDBusConnection, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusConnection) },	//12
    { "QDBusConnectionInterface", false, 5, xcall_QDBusConnectionInterface, xenum_QDBusConnectionInterface, Smoke::cf_virtual, sizeof(QDBusConnectionInterface) },	//13
    { "QDBusContext", false, 0, xcall_QDBusContext, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusContext) },	//14
    { "QDBusError", false, 0, xcall_QDBusError, xenum_QDBusError, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusError) },	//15
    { "QDBusInterface", false, 5, xcall_QDBusInterface, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusInterface) },	//16
    { "QDBusMessage", false, 0, xcall_QDBusMessage, xenum_QDBusMessage, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusMessage) },	//17
    { "QDBusMetaType", false, 0, xcall_QDBusMetaType, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusMetaType) },	//18
    { "QDBusPendingCall", false, 0, xcall_QDBusPendingCall, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusPendingCall) },	//19
    { "QDBusPendingCallWatcher", false, 7, xcall_QDBusPendingCallWatcher, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusPendingCallWatcher) },	//20
    { "QDBusServer", false, 1, xcall_QDBusServer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusServer) },	//21
    { "QDBusServiceWatcher", false, 1, xcall_QDBusServiceWatcher, xenum_QDBusServiceWatcher, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusServiceWatcher) },	//22
    { "QDBusUnixFileDescriptor", false, 0, xcall_QDBusUnixFileDescriptor, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QDBusUnixFileDescriptor) },	//23
    { "QDBusVariant", true, 0, 0, 0, 0, 0 },	//24
    { "QDBusVirtualObject", false, 1, xcall_QDBusVirtualObject, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QDBusVirtualObject) },	//25
    { "QDataStream", true, 0, 0, 0, 0, 0 },	//26
    { "QDate", true, 0, 0, 0, 0, 0 },	//27
    { "QDateTime", true, 0, 0, 0, 0, 0 },	//28
    { "QDebug", true, 0, 0, 0, 0, 0 },	//29
    { "QDir", true, 0, 0, 0, 0, 0 },	//30
    { "QEasingCurve", true, 0, 0, 0, 0, 0 },	//31
    { "QEvent", true, 0, 0, 0, 0, 0 },	//32
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, xenum_QGlobalSpace, Smoke::cf_namespace, 0 },	//33
    { "QHashDummyValue", true, 0, 0, 0, 0, 0 },	//34
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//35
    { "QLatin1String", true, 0, 0, 0, 0, 0 },	//36
    { "QLine", true, 0, 0, 0, 0, 0 },	//37
    { "QLineF", true, 0, 0, 0, 0, 0 },	//38
    { "QLocale", true, 0, 0, 0, 0, 0 },	//39
    { "QMargins", true, 0, 0, 0, 0, 0 },	//40
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//41
    { "QModelIndex", true, 0, 0, 0, 0, 0 },	//42
    { "QObject", true, 0, 0, 0, 0, 0 },	//43
    { "QPersistentModelIndex", true, 0, 0, 0, 0, 0 },	//44
    { "QPoint", true, 0, 0, 0, 0, 0 },	//45
    { "QPointF", true, 0, 0, 0, 0, 0 },	//46
    { "QRect", true, 0, 0, 0, 0, 0 },	//47
    { "QRectF", true, 0, 0, 0, 0, 0 },	//48
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//49
    { "QSize", true, 0, 0, 0, 0, 0 },	//50
    { "QSizeF", true, 0, 0, 0, 0, 0 },	//51
    { "QString::Null", true, 0, 0, 0, 0, 0 },	//52
    { "QStringRef", true, 0, 0, 0, 0, 0 },	//53
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//54
    { "QTextStreamManipulator", true, 0, 0, 0, 0, 0 },	//55
    { "QTime", true, 0, 0, 0, 0, 0 },	//56
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//57
    { "QUrl", true, 0, 0, 0, 0, 0 },	//58
    { "QUuid", true, 0, 0, 0, 0, 0 },	//59
    { "QVariant", true, 0, 0, 0, 0, 0 },	//60
    { "QVariantComparisonHelper", true, 0, 0, 0, 0, 0 },	//61
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QAbstractFileEngine::FileFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//1
    { "QBitArray", 2, Smoke::t_class|Smoke::tf_stack },	//2
    { "QBitArray&", 2, Smoke::t_class|Smoke::tf_ref },	//3
    { "QBool", 3, Smoke::t_class|Smoke::tf_stack },	//4
    { "QByteArray", 4, Smoke::t_class|Smoke::tf_stack },	//5
    { "QByteArray&", 4, Smoke::t_class|Smoke::tf_ref },	//6
    { "QChar", 5, Smoke::t_class|Smoke::tf_stack },	//7
    { "QChar&", 5, Smoke::t_class|Smoke::tf_ref },	//8
    { "QChildEvent*", 6, Smoke::t_class|Smoke::tf_ptr },	//9
    { "QDBus::CallMode", 7, Smoke::t_enum|Smoke::tf_stack },	//10
    { "QDBusAbstractAdaptor*", 8, Smoke::t_class|Smoke::tf_ptr },	//11
    { "QDBusAbstractInterface*", 9, Smoke::t_class|Smoke::tf_ptr },	//12
    { "QDBusArgument&", 11, Smoke::t_class|Smoke::tf_ref },	//13
    { "QDBusArgument*", 11, Smoke::t_class|Smoke::tf_ptr },	//14
    { "QDBusArgument::ElementType", 11, Smoke::t_enum|Smoke::tf_stack },	//15
    { "QDBusConnection", 12, Smoke::t_class|Smoke::tf_stack },	//16
    { "QDBusConnection&", 12, Smoke::t_class|Smoke::tf_ref },	//17
    { "QDBusConnection*", 12, Smoke::t_class|Smoke::tf_ptr },	//18
    { "QDBusConnection::BusType", 12, Smoke::t_enum|Smoke::tf_stack },	//19
    { "QDBusConnection::ConnectionCapability", 12, Smoke::t_enum|Smoke::tf_stack },	//20
    { "QDBusConnection::RegisterOption", 12, Smoke::t_enum|Smoke::tf_stack },	//21
    { "QDBusConnection::UnregisterMode", 12, Smoke::t_enum|Smoke::tf_stack },	//22
    { "QDBusConnection::VirtualObjectRegisterOption", 12, Smoke::t_enum|Smoke::tf_stack },	//23
    { "QDBusConnectionInterface*", 13, Smoke::t_class|Smoke::tf_ptr },	//24
    { "QDBusConnectionInterface::RegisterServiceReply", 13, Smoke::t_enum|Smoke::tf_stack },	//25
    { "QDBusConnectionInterface::ServiceQueueOptions", 13, Smoke::t_enum|Smoke::tf_stack },	//26
    { "QDBusConnectionInterface::ServiceReplacementOptions", 13, Smoke::t_enum|Smoke::tf_stack },	//27
    { "QDBusContext*", 14, Smoke::t_class|Smoke::tf_ptr },	//28
    { "QDBusError", 15, Smoke::t_class|Smoke::tf_stack },	//29
    { "QDBusError&", 15, Smoke::t_class|Smoke::tf_ref },	//30
    { "QDBusError*", 15, Smoke::t_class|Smoke::tf_ptr },	//31
    { "QDBusError::ErrorType", 15, Smoke::t_enum|Smoke::tf_stack },	//32
    { "QDBusInterface*", 16, Smoke::t_class|Smoke::tf_ptr },	//33
    { "QDBusMessage", 17, Smoke::t_class|Smoke::tf_stack },	//34
    { "QDBusMessage&", 17, Smoke::t_class|Smoke::tf_ref },	//35
    { "QDBusMessage*", 17, Smoke::t_class|Smoke::tf_ptr },	//36
    { "QDBusMessage::MessageType", 17, Smoke::t_enum|Smoke::tf_stack },	//37
    { "QDBusMetaType*", 18, Smoke::t_class|Smoke::tf_ptr },	//38
    { "QDBusObjectPath&", 0, Smoke::t_voidp|Smoke::tf_ref },	//39
    { "QDBusPendingCall", 19, Smoke::t_class|Smoke::tf_stack },	//40
    { "QDBusPendingCall&", 19, Smoke::t_class|Smoke::tf_ref },	//41
    { "QDBusPendingCall*", 19, Smoke::t_class|Smoke::tf_ptr },	//42
    { "QDBusPendingCallWatcher*", 20, Smoke::t_class|Smoke::tf_ptr },	//43
    { "QDBusReply<QDBusConnectionInterface::RegisterServiceReply>", 0, Smoke::t_voidp|Smoke::tf_stack },	//44
    { "QDBusReply<QString>", 0, Smoke::t_voidp|Smoke::tf_stack },	//45
    { "QDBusReply<QStringList>", 0, Smoke::t_voidp|Smoke::tf_stack },	//46
    { "QDBusReply<bool>", 0, Smoke::t_voidp|Smoke::tf_stack },	//47
    { "QDBusReply<uint>", 0, Smoke::t_voidp|Smoke::tf_stack },	//48
    { "QDBusReply<void>", 0, Smoke::t_voidp|Smoke::tf_stack },	//49
    { "QDBusServer*", 21, Smoke::t_class|Smoke::tf_ptr },	//50
    { "QDBusServiceWatcher*", 22, Smoke::t_class|Smoke::tf_ptr },	//51
    { "QDBusServiceWatcher::WatchModeFlag", 22, Smoke::t_enum|Smoke::tf_stack },	//52
    { "QDBusSignature&", 0, Smoke::t_voidp|Smoke::tf_ref },	//53
    { "QDBusUnixFileDescriptor&", 23, Smoke::t_class|Smoke::tf_ref },	//54
    { "QDBusUnixFileDescriptor*", 23, Smoke::t_class|Smoke::tf_ptr },	//55
    { "QDBusVariant&", 24, Smoke::t_class|Smoke::tf_ref },	//56
    { "QDBusVirtualObject*", 25, Smoke::t_class|Smoke::tf_ptr },	//57
    { "QDataStream&", 26, Smoke::t_class|Smoke::tf_ref },	//58
    { "QDate&", 27, Smoke::t_class|Smoke::tf_ref },	//59
    { "QDateTime&", 28, Smoke::t_class|Smoke::tf_ref },	//60
    { "QDebug", 29, Smoke::t_class|Smoke::tf_stack },	//61
    { "QDir::Filter", 30, Smoke::t_enum|Smoke::tf_stack },	//62
    { "QDir::SortFlag", 30, Smoke::t_enum|Smoke::tf_stack },	//63
    { "QDirIterator::IteratorFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//64
    { "QEasingCurve&", 31, Smoke::t_class|Smoke::tf_ref },	//65
    { "QEvent*", 32, Smoke::t_class|Smoke::tf_ptr },	//66
    { "QEventLoop::ProcessEventsFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//67
    { "QFile::Permission", 0, Smoke::t_enum|Smoke::tf_stack },	//68
    { "QFlags<QAbstractFileEngine::FileFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//69
    { "QFlags<QDBusConnection::ConnectionCapability>", 0, Smoke::t_uint|Smoke::tf_stack },	//70
    { "QFlags<QDBusConnection::RegisterOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//71
    { "QFlags<QDBusConnection::VirtualObjectRegisterOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//72
    { "QFlags<QDBusServiceWatcher::WatchModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//73
    { "QFlags<QDir::Filter>", 0, Smoke::t_uint|Smoke::tf_stack },	//74
    { "QFlags<QDir::SortFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//75
    { "QFlags<QDirIterator::IteratorFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//76
    { "QFlags<QEventLoop::ProcessEventsFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//77
    { "QFlags<QFile::Permission>", 0, Smoke::t_uint|Smoke::tf_stack },	//78
    { "QFlags<QIODevice::OpenModeFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//79
    { "QFlags<QLibrary::LoadHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//80
    { "QFlags<QLocale::NumberOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//81
    { "QFlags<QString::SectionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//82
    { "QFlags<QTextCodec::ConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//83
    { "QFlags<QTextStream::NumberFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//84
    { "QFlags<QUrl::FormattingOption>", 0, Smoke::t_uint|Smoke::tf_stack },	//85
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//86
    { "QFlags<Qt::DockWidgetArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//87
    { "QFlags<Qt::DropAction>", 0, Smoke::t_uint|Smoke::tf_stack },	//88
    { "QFlags<Qt::GestureFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//89
    { "QFlags<Qt::ImageConversionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//90
    { "QFlags<Qt::InputMethodHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//91
    { "QFlags<Qt::ItemFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//92
    { "QFlags<Qt::KeyboardModifier>", 0, Smoke::t_uint|Smoke::tf_stack },	//93
    { "QFlags<Qt::MatchFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//94
    { "QFlags<Qt::MouseButton>", 0, Smoke::t_uint|Smoke::tf_stack },	//95
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//96
    { "QFlags<Qt::TextInteractionFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//97
    { "QFlags<Qt::ToolBarArea>", 0, Smoke::t_uint|Smoke::tf_stack },	//98
    { "QFlags<Qt::TouchPointState>", 0, Smoke::t_uint|Smoke::tf_stack },	//99
    { "QFlags<Qt::WindowState>", 0, Smoke::t_uint|Smoke::tf_stack },	//100
    { "QFlags<Qt::WindowType>", 0, Smoke::t_uint|Smoke::tf_stack },	//101
    { "QIODevice::OpenModeFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//102
    { "QIncompatibleFlag", 35, Smoke::t_class|Smoke::tf_stack },	//103
    { "QLibrary::LoadHint", 0, Smoke::t_enum|Smoke::tf_stack },	//104
    { "QLine&", 37, Smoke::t_class|Smoke::tf_ref },	//105
    { "QLineF&", 38, Smoke::t_class|Smoke::tf_ref },	//106
    { "QList<QVariant>", 0, Smoke::t_voidp|Smoke::tf_stack },	//107
    { "QList<void*>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//108
    { "QLocale&", 39, Smoke::t_class|Smoke::tf_ref },	//109
    { "QLocale::NumberOption", 39, Smoke::t_enum|Smoke::tf_stack },	//110
    { "QMetaObject::Call", 41, Smoke::t_enum|Smoke::tf_stack },	//111
    { "QObject*", 43, Smoke::t_class|Smoke::tf_ptr },	//112
    { "QObject*(*)()", 43, Smoke::t_class|Smoke::tf_ptr },	//113
    { "QPoint&", 45, Smoke::t_class|Smoke::tf_ref },	//114
    { "QPointF&", 46, Smoke::t_class|Smoke::tf_ref },	//115
    { "QRect&", 47, Smoke::t_class|Smoke::tf_ref },	//116
    { "QRectF&", 48, Smoke::t_class|Smoke::tf_ref },	//117
    { "QRegExp&", 49, Smoke::t_class|Smoke::tf_ref },	//118
    { "QSize&", 50, Smoke::t_class|Smoke::tf_ref },	//119
    { "QSizeF&", 51, Smoke::t_class|Smoke::tf_ref },	//120
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//121
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//122
    { "QString::Null", 52, Smoke::t_class|Smoke::tf_stack },	//123
    { "QString::SectionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//124
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//125
    { "QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref },	//126
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//127
    { "QTextCodec::ConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//128
    { "QTextStream&", 54, Smoke::t_class|Smoke::tf_ref },	//129
    { "QTextStream&(*)(QTextStream&)", 54, Smoke::t_class|Smoke::tf_ref },	//130
    { "QTextStream::NumberFlag", 54, Smoke::t_enum|Smoke::tf_stack },	//131
    { "QTextStreamManipulator", 55, Smoke::t_class|Smoke::tf_stack },	//132
    { "QTime&", 56, Smoke::t_class|Smoke::tf_ref },	//133
    { "QTimerEvent*", 57, Smoke::t_class|Smoke::tf_ptr },	//134
    { "QUrl&", 58, Smoke::t_class|Smoke::tf_ref },	//135
    { "QUrl::FormattingOption", 58, Smoke::t_enum|Smoke::tf_stack },	//136
    { "QUuid&", 59, Smoke::t_class|Smoke::tf_ref },	//137
    { "QVariant", 60, Smoke::t_class|Smoke::tf_stack },	//138
    { "QVariant&", 60, Smoke::t_class|Smoke::tf_ref },	//139
    { "QVariant::Type", 60, Smoke::t_enum|Smoke::tf_stack },	//140
    { "QVariant::Type&", 60, Smoke::t_enum|Smoke::tf_ref },	//141
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//142
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//143
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//144
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//145
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//146
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//147
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//148
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//149
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//150
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//151
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//152
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//153
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//154
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//155
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//156
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//157
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//158
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//159
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//160
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//161
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//162
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//163
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//164
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//165
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//166
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//167
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//168
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//169
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//170
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//171
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//172
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//173
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//174
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//175
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//176
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//177
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//178
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//179
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//180
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//181
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//182
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//183
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//184
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//185
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//186
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//187
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//188
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//189
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//190
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//191
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//192
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//193
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//194
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//195
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//196
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//197
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//198
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//199
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//200
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//201
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//202
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//203
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//204
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//205
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//206
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//207
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//208
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//209
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//210
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//211
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//212
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//213
    { "QtConcurrent::ReduceOption", 0, Smoke::t_enum|Smoke::tf_stack },	//214
    { "QtConcurrent::ThreadFunctionResult", 0, Smoke::t_enum|Smoke::tf_stack },	//215
    { "QtMsgType", 33, Smoke::t_enum|Smoke::tf_stack },	//216
    { "QtValidLicenseForActiveQtModule", 33, Smoke::t_enum|Smoke::tf_stack },	//217
    { "QtValidLicenseForCoreModule", 33, Smoke::t_enum|Smoke::tf_stack },	//218
    { "QtValidLicenseForDBusModule", 33, Smoke::t_enum|Smoke::tf_stack },	//219
    { "QtValidLicenseForDeclarativeModule", 33, Smoke::t_enum|Smoke::tf_stack },	//220
    { "QtValidLicenseForGuiModule", 33, Smoke::t_enum|Smoke::tf_stack },	//221
    { "QtValidLicenseForHelpModule", 33, Smoke::t_enum|Smoke::tf_stack },	//222
    { "QtValidLicenseForMultimediaModule", 33, Smoke::t_enum|Smoke::tf_stack },	//223
    { "QtValidLicenseForNetworkModule", 33, Smoke::t_enum|Smoke::tf_stack },	//224
    { "QtValidLicenseForOpenGLModule", 33, Smoke::t_enum|Smoke::tf_stack },	//225
    { "QtValidLicenseForOpenVGModule", 33, Smoke::t_enum|Smoke::tf_stack },	//226
    { "QtValidLicenseForQt3SupportLightModule", 33, Smoke::t_enum|Smoke::tf_stack },	//227
    { "QtValidLicenseForQt3SupportModule", 33, Smoke::t_enum|Smoke::tf_stack },	//228
    { "QtValidLicenseForScriptModule", 33, Smoke::t_enum|Smoke::tf_stack },	//229
    { "QtValidLicenseForScriptToolsModule", 33, Smoke::t_enum|Smoke::tf_stack },	//230
    { "QtValidLicenseForSqlModule", 33, Smoke::t_enum|Smoke::tf_stack },	//231
    { "QtValidLicenseForSvgModule", 33, Smoke::t_enum|Smoke::tf_stack },	//232
    { "QtValidLicenseForTestModule", 33, Smoke::t_enum|Smoke::tf_stack },	//233
    { "QtValidLicenseForXmlModule", 33, Smoke::t_enum|Smoke::tf_stack },	//234
    { "QtValidLicenseForXmlPatternsModule", 33, Smoke::t_enum|Smoke::tf_stack },	//235
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//236
    { "bool&", 0, Smoke::t_voidp|Smoke::tf_ref },	//237
    { "char", 0, Smoke::t_char|Smoke::tf_stack },	//238
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//239
    { "const DBusError*", 1, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//240
    { "const QBitArray&", 2, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//241
    { "const QByteArray", 4, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//242
    { "const QByteArray&", 4, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//243
    { "const QChar&", 5, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//244
    { "const QDBusArgument&", 11, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//245
    { "const QDBusConnection&", 12, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//246
    { "const QDBusContext&", 14, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//247
    { "const QDBusError&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//248
    { "const QDBusMessage&", 17, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//249
    { "const QDBusMetaType&", 18, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//250
    { "const QDBusObjectPath&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//251
    { "const QDBusPendingCall&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//252
    { "const QDBusSignature&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//253
    { "const QDBusUnixFileDescriptor&", 23, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//254
    { "const QDBusVariant&", 24, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//255
    { "const QDate&", 27, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//256
    { "const QDateTime&", 28, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//257
    { "const QDir&", 30, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//258
    { "const QEasingCurve&", 31, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//259
    { "const QHash<QString,QVariant>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//260
    { "const QHashDummyValue&", 34, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//261
    { "const QLatin1String&", 36, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//262
    { "const QLine&", 37, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//263
    { "const QLineF&", 38, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//264
    { "const QList<QVariant>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//265
    { "const QLocale&", 39, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//266
    { "const QMap<QString,QVariant>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//267
    { "const QMargins&", 40, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//268
    { "const QMetaObject&", 41, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//269
    { "const QMetaObject*", 41, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//270
    { "const QModelIndex&", 42, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//271
    { "const QObject*", 43, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//272
    { "const QPersistentModelIndex&", 44, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//273
    { "const QPoint", 45, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//274
    { "const QPoint&", 45, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//275
    { "const QPointF", 46, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//276
    { "const QPointF&", 46, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//277
    { "const QRect&", 47, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//278
    { "const QRectF&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//279
    { "const QRegExp&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//280
    { "const QRegExp*", 49, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//281
    { "const QSize", 50, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//282
    { "const QSize&", 50, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//283
    { "const QSizeF", 51, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//284
    { "const QSizeF&", 51, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//285
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//286
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//287
    { "const QStringList&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//288
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//289
    { "const QStringRef&", 53, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//290
    { "const QTime&", 56, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//291
    { "const QUrl&", 58, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//292
    { "const QUuid&", 59, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//293
    { "const QVariant&", 60, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//294
    { "const QVariant::Type", 60, Smoke::t_enum|Smoke::tf_stack|Smoke::tf_const },	//295
    { "const QVariantComparisonHelper&", 61, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//296
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//297
    { "const unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//298
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//299
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//300
    { "double&", 0, Smoke::t_voidp|Smoke::tf_ref },	//301
    { "float", 0, Smoke::t_float|Smoke::tf_stack },	//302
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//303
    { "int&", 0, Smoke::t_voidp|Smoke::tf_ref },	//304
    { "long", 0, Smoke::t_long|Smoke::tf_stack },	//305
    { "long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//306
    { "long long&", 0, Smoke::t_voidp|Smoke::tf_ref },	//307
    { "short", 0, Smoke::t_short|Smoke::tf_stack },	//308
    { "short&", 0, Smoke::t_voidp|Smoke::tf_ref },	//309
    { "signed char", 0, Smoke::t_char|Smoke::tf_stack },	//310
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//311
    { "unsigned char", 0, Smoke::t_uchar|Smoke::tf_stack },	//312
    { "unsigned char&", 0, Smoke::t_voidp|Smoke::tf_ref },	//313
    { "unsigned char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//314
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//315
    { "unsigned int&", 0, Smoke::t_voidp|Smoke::tf_ref },	//316
    { "unsigned long", 0, Smoke::t_ulong|Smoke::tf_stack },	//317
    { "unsigned long long", 0, Smoke::t_voidp|Smoke::tf_stack },	//318
    { "unsigned long long&", 0, Smoke::t_voidp|Smoke::tf_ref },	//319
    { "unsigned short", 0, Smoke::t_ushort|Smoke::tf_stack },	//320
    { "unsigned short&", 0, Smoke::t_voidp|Smoke::tf_ref },	//321
    { "va_list", 0, Smoke::t_voidp|Smoke::tf_stack },	//322
    { "void(*)()", 0, Smoke::t_voidp|Smoke::tf_stack },	//323
    { "void(*)(QDBusArgument&,const void*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//324
    { "void(*)(QtMsgType,const char*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//325
    { "void(*)(const QDBusArgument&,void*)", 0, Smoke::t_voidp|Smoke::tf_stack },	//326
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//327
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//328
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//329
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    297, 0,	//1  const char*
    297, 297, 0,	//3  const char*, const char*
    297, 297, 303, 0,	//6  const char*, const char*, int
    111, 303, 328, 0,	//10  QMetaObject::Call, int, void**
    112, 0,	//14  QObject*
    236, 0,	//16  bool
    303, 0,	//18  int
    287, 294, 294, 294, 294, 294, 294, 294, 294, 0,	//20  const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 294, 294, 294, 294, 294, 294, 294, 294, 0,	//30  QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 265, 0,	//41  QDBus::CallMode, const QString&, const QList<QVariant>&
    287, 265, 112, 297, 297, 0,	//45  const QString&, const QList<QVariant>&, QObject*, const char*, const char*
    287, 265, 112, 297, 0,	//51  const QString&, const QList<QVariant>&, QObject*, const char*
    287, 265, 0,	//56  const QString&, const QList<QVariant>&
    287, 287, 297, 246, 112, 0,	//59  const QString&, const QString&, const char*, const QDBusConnection&, QObject*
    297, 294, 0,	//65  const char*, const QVariant&
    287, 0,	//68  const QString&
    287, 294, 0,	//70  const QString&, const QVariant&
    287, 294, 294, 0,	//73  const QString&, const QVariant&, const QVariant&
    287, 294, 294, 294, 0,	//77  const QString&, const QVariant&, const QVariant&, const QVariant&
    287, 294, 294, 294, 294, 0,	//82  const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    287, 294, 294, 294, 294, 294, 0,	//88  const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    287, 294, 294, 294, 294, 294, 294, 0,	//95  const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    287, 294, 294, 294, 294, 294, 294, 294, 0,	//103  const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 0,	//112  QDBus::CallMode, const QString&
    10, 287, 294, 0,	//115  QDBus::CallMode, const QString&, const QVariant&
    10, 287, 294, 294, 0,	//119  QDBus::CallMode, const QString&, const QVariant&, const QVariant&
    10, 287, 294, 294, 294, 0,	//124  QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 294, 294, 294, 294, 0,	//130  QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 294, 294, 294, 294, 294, 0,	//137  QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 294, 294, 294, 294, 294, 294, 0,	//145  QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    10, 287, 294, 294, 294, 294, 294, 294, 294, 0,	//154  QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&
    245, 0,	//164  const QDBusArgument&
    312, 0,	//166  unsigned char
    308, 0,	//168  short
    320, 0,	//170  unsigned short
    315, 0,	//172  unsigned int
    306, 0,	//174  long long
    318, 0,	//176  unsigned long long
    300, 0,	//178  double
    255, 0,	//180  const QDBusVariant&
    251, 0,	//182  const QDBusObjectPath&
    253, 0,	//184  const QDBusSignature&
    254, 0,	//186  const QDBusUnixFileDescriptor&
    288, 0,	//188  const QStringList&
    243, 0,	//190  const QByteArray&
    303, 303, 0,	//192  int, int
    294, 0,	//195  const QVariant&
    313, 0,	//197  unsigned char&
    237, 0,	//199  bool&
    309, 0,	//201  short&
    321, 0,	//203  unsigned short&
    304, 0,	//205  int&
    316, 0,	//207  unsigned int&
    307, 0,	//209  long long&
    319, 0,	//211  unsigned long long&
    301, 0,	//213  double&
    122, 0,	//215  QString&
    56, 0,	//217  QDBusVariant&
    39, 0,	//219  QDBusObjectPath&
    53, 0,	//221  QDBusSignature&
    54, 0,	//223  QDBusUnixFileDescriptor&
    126, 0,	//225  QStringList&
    6, 0,	//227  QByteArray&
    246, 0,	//229  const QDBusConnection&
    249, 0,	//231  const QDBusMessage&
    249, 112, 297, 297, 303, 0,	//233  const QDBusMessage&, QObject*, const char*, const char*, int
    249, 112, 297, 303, 0,	//239  const QDBusMessage&, QObject*, const char*, int
    249, 10, 303, 0,	//244  const QDBusMessage&, QDBus::CallMode, int
    249, 303, 0,	//248  const QDBusMessage&, int
    287, 287, 287, 287, 112, 297, 0,	//251  const QString&, const QString&, const QString&, const QString&, QObject*, const char*
    287, 287, 287, 287, 287, 112, 297, 0,	//258  const QString&, const QString&, const QString&, const QString&, const QString&, QObject*, const char*
    287, 287, 287, 287, 288, 287, 112, 297, 0,	//266  const QString&, const QString&, const QString&, const QString&, const QStringList&, const QString&, QObject*, const char*
    287, 112, 71, 0,	//275  const QString&, QObject*, QFlags<QDBusConnection::RegisterOption>
    287, 22, 0,	//279  const QString&, QDBusConnection::UnregisterMode
    287, 57, 23, 0,	//282  const QString&, QDBusVirtualObject*, QDBusConnection::VirtualObjectRegisterOption
    19, 287, 0,	//286  QDBusConnection::BusType, const QString&
    287, 287, 0,	//289  const QString&, const QString&
    249, 112, 297, 297, 0,	//292  const QDBusMessage&, QObject*, const char*, const char*
    249, 112, 297, 0,	//297  const QDBusMessage&, QObject*, const char*
    249, 10, 0,	//301  const QDBusMessage&, QDBus::CallMode
    287, 112, 0,	//304  const QString&, QObject*
    287, 57, 0,	//307  const QString&, QDBusVirtualObject*
    287, 26, 27, 0,	//310  const QString&, QDBusConnectionInterface::ServiceQueueOptions, QDBusConnectionInterface::ServiceReplacementOptions
    287, 287, 287, 0,	//314  const QString&, const QString&, const QString&
    248, 249, 0,	//318  const QDBusError&, const QDBusMessage&
    287, 26, 0,	//321  const QString&, QDBusConnectionInterface::ServiceQueueOptions
    32, 287, 0,	//324  QDBusError::ErrorType, const QString&
    247, 0,	//327  const QDBusContext&
    32, 0,	//329  QDBusError::ErrorType
    240, 0,	//331  const DBusError*
    248, 0,	//333  const QDBusError&
    287, 287, 287, 246, 112, 0,	//335  const QString&, const QString&, const QString&, const QDBusConnection&, QObject*
    287, 287, 287, 246, 0,	//341  const QString&, const QString&, const QString&, const QDBusConnection&
    287, 287, 287, 287, 0,	//346  const QString&, const QString&, const QString&, const QString&
    265, 0,	//351  const QList<QVariant>&
    286, 287, 0,	//353  const QString, const QString&
    303, 324, 326, 0,	//356  int, void(*)(QDBusArgument&,const void*), void(*)(const QDBusArgument&,void*)
    13, 303, 299, 0,	//360  QDBusArgument&, int, const void*
    245, 303, 327, 0,	//364  const QDBusArgument&, int, void*
    250, 0,	//368  const QDBusMetaType&
    252, 0,	//370  const QDBusPendingCall&
    252, 112, 0,	//372  const QDBusPendingCall&, QObject*
    43, 0,	//375  QDBusPendingCallWatcher*
    287, 246, 73, 112, 0,	//377  const QString&, const QDBusConnection&, QFlags<QDBusServiceWatcher::WatchModeFlag>, QObject*
    73, 0,	//382  QFlags<QDBusServiceWatcher::WatchModeFlag>
    287, 246, 0,	//384  const QString&, const QDBusConnection&
    287, 246, 73, 0,	//387  const QString&, const QDBusConnection&, QFlags<QDBusServiceWatcher::WatchModeFlag>
    249, 246, 0,	//391  const QDBusMessage&, const QDBusConnection&
    68, 68, 0,	//394  QFile::Permission, QFile::Permission
    13, 277, 0,	//397  QDBusArgument&, const QPointF&
    13, 264, 0,	//400  QDBusArgument&, const QLineF&
    58, 8, 0,	//403  QDataStream&, QChar&
    64, 76, 0,	//406  QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>
    13, 257, 0,	//409  QDBusArgument&, const QDateTime&
    58, 109, 0,	//412  QDataStream&, QLocale&
    13, 279, 0,	//415  QDBusArgument&, const QRectF&
    213, 303, 0,	//418  Qt::WindowType, int
    239, 297, 315, 0,	//421  char*, const char*, unsigned int
    238, 0,	//425  char
    285, 300, 0,	//427  const QSizeF&, double
    61, 263, 0,	//430  QDebug, const QLine&
    243, 297, 0,	//433  const QByteArray&, const char*
    58, 116, 0,	//436  QDataStream&, QRect&
    52, 52, 0,	//439  QDBusServiceWatcher::WatchModeFlag, QDBusServiceWatcher::WatchModeFlag
    178, 178, 0,	//442  Qt::ItemFlag, Qt::ItemFlag
    294, 296, 0,	//445  const QVariant&, const QVariantComparisonHelper&
    13, 267, 0,	//448  QDBusArgument&, const QMap<QString,QVariant>&
    61, 79, 0,	//451  QDebug, QFlags<QIODevice::OpenModeFlag>
    283, 283, 0,	//454  const QSize&, const QSize&
    253, 253, 0,	//457  const QDBusSignature&, const QDBusSignature&
    7, 287, 0,	//460  QChar, const QString&
    23, 72, 0,	//463  QDBusConnection::VirtualObjectRegisterOption, QFlags<QDBusConnection::VirtualObjectRegisterOption>
    297, 297, 315, 0,	//466  const char*, const char*, unsigned int
    290, 290, 0,	//470  const QStringRef&, const QStringRef&
    239, 311, 297, 322, 0,	//473  char*, size_t, const char*, va_list
    277, 277, 0,	//478  const QPointF&, const QPointF&
    287, 290, 0,	//481  const QString&, const QStringRef&
    245, 133, 0,	//484  const QDBusArgument&, QTime&
    287, 7, 0,	//487  const QString&, QChar
    297, 315, 0,	//490  const char*, unsigned int
    58, 65, 0,	//493  QDataStream&, QEasingCurve&
    61, 256, 0,	//496  QDebug, const QDate&
    262, 290, 0,	//499  const QLatin1String&, const QStringRef&
    13, 283, 0,	//502  QDBusArgument&, const QSize&
    203, 203, 0,	//505  Qt::ToolBarArea, Qt::ToolBarArea
    61, 264, 0,	//508  QDebug, const QLineF&
    279, 279, 0,	//511  const QRectF&, const QRectF&
    272, 287, 281, 269, 108, 0,	//514  const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*
    290, 262, 0,	//520  const QStringRef&, const QLatin1String&
    58, 59, 0,	//523  QDataStream&, QDate&
    302, 0,	//526  float
    200, 303, 0,	//528  Qt::TextInteractionFlag, int
    7, 7, 0,	//531  QChar, QChar
    7, 0,	//534  QChar
    58, 135, 0,	//536  QDataStream&, QUrl&
    61, 271, 0,	//539  QDebug, const QModelIndex&
    104, 80, 0,	//542  QLibrary::LoadHint, QFlags<QLibrary::LoadHint>
    297, 303, 0,	//545  const char*, int
    300, 300, 0,	//548  double, double
    58, 295, 0,	//551  QDataStream&, const QVariant::Type
    58, 294, 0,	//554  QDataStream&, const QVariant&
    200, 97, 0,	//557  Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>
    178, 92, 0,	//560  Qt::ItemFlag, QFlags<Qt::ItemFlag>
    305, 0,	//563  long
    175, 91, 0,	//565  Qt::InputMethodHint, QFlags<Qt::InputMethodHint>
    58, 285, 0,	//568  QDataStream&, const QSizeF&
    123, 123, 0,	//571  QString::Null, QString::Null
    297, 243, 0,	//574  const char*, const QByteArray&
    241, 0,	//577  const QBitArray&
    64, 64, 0,	//579  QDirIterator::IteratorFlag, QDirIterator::IteratorFlag
    239, 297, 0,	//582  char*, const char*
    241, 241, 0,	//585  const QBitArray&, const QBitArray&
    275, 275, 0,	//588  const QPoint&, const QPoint&
    181, 93, 0,	//591  Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>
    277, 300, 0,	//594  const QPointF&, double
    23, 23, 0,	//597  QDBusConnection::VirtualObjectRegisterOption, QDBusConnection::VirtualObjectRegisterOption
    61, 285, 0,	//600  QDebug, const QSizeF&
    261, 261, 0,	//603  const QHashDummyValue&, const QHashDummyValue&
    1, 1, 0,	//606  QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag
    278, 278, 0,	//609  const QRect&, const QRect&
    58, 137, 0,	//612  QDataStream&, QUuid&
    243, 243, 0,	//615  const QByteArray&, const QByteArray&
    298, 303, 0,	//618  const unsigned char*, int
    243, 303, 0,	//621  const QByteArray&, int
    58, 287, 0,	//624  QDataStream&, const QString&
    129, 130, 0,	//627  QTextStream&, QTextStream&(*)(QTextStream&)
    164, 303, 0,	//630  Qt::DropAction, int
    327, 311, 311, 311, 0,	//633  void*, size_t, size_t, size_t
    184, 303, 0,	//638  Qt::MatchFlag, int
    58, 275, 0,	//641  QDataStream&, const QPoint&
    245, 60, 0,	//644  const QDBusArgument&, QDateTime&
    61, 278, 0,	//647  QDebug, const QRect&
    128, 83, 0,	//650  QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>
    245, 105, 0,	//653  const QDBusArgument&, QLine&
    200, 200, 0,	//656  Qt::TextInteractionFlag, Qt::TextInteractionFlag
    124, 82, 0,	//659  QString::SectionFlag, QFlags<QString::SectionFlag>
    61, 258, 0,	//662  QDebug, const QDir&
    186, 186, 0,	//665  Qt::MouseButton, Qt::MouseButton
    327, 311, 0,	//668  void*, size_t
    164, 164, 0,	//671  Qt::DropAction, Qt::DropAction
    21, 21, 0,	//674  QDBusConnection::RegisterOption, QDBusConnection::RegisterOption
    1, 303, 0,	//677  QAbstractFileEngine::FileFlag, int
    287, 123, 0,	//680  const QString&, QString::Null
    169, 89, 0,	//683  Qt::GestureFlag, QFlags<Qt::GestureFlag>
    251, 251, 0,	//686  const QDBusObjectPath&, const QDBusObjectPath&
    67, 303, 0,	//689  QEventLoop::ProcessEventsFlag, int
    102, 102, 0,	//692  QIODevice::OpenModeFlag, QIODevice::OpenModeFlag
    110, 110, 0,	//695  QLocale::NumberOption, QLocale::NumberOption
    58, 106, 0,	//698  QDataStream&, QLineF&
    58, 264, 0,	//701  QDataStream&, const QLineF&
    285, 285, 0,	//704  const QSizeF&, const QSizeF&
    300, 283, 0,	//707  double, const QSize&
    162, 87, 0,	//710  Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>
    245, 116, 0,	//713  const QDBusArgument&, QRect&
    184, 94, 0,	//716  Qt::MatchFlag, QFlags<Qt::MatchFlag>
    275, 302, 0,	//719  const QPoint&, float
    277, 0,	//722  const QPointF&
    142, 303, 0,	//724  Qt::AlignmentFlag, int
    173, 303, 0,	//727  Qt::ImageConversionFlag, int
    245, 117, 0,	//730  const QDBusArgument&, QRectF&
    61, 283, 0,	//733  QDebug, const QSize&
    23, 303, 0,	//736  QDBusConnection::VirtualObjectRegisterOption, int
    128, 303, 0,	//739  QTextCodec::ConversionFlag, int
    61, 275, 0,	//742  QDebug, const QPoint&
    275, 0,	//745  const QPoint&
    61, 292, 0,	//747  QDebug, const QUrl&
    249, 30, 139, 0,	//750  const QDBusMessage&, QDBusError&, QVariant&
    245, 120, 0,	//754  const QDBusArgument&, QSizeF&
    245, 106, 0,	//757  const QDBusArgument&, QLineF&
    21, 303, 0,	//760  QDBusConnection::RegisterOption, int
    58, 277, 0,	//763  QDataStream&, const QPointF&
    61, 249, 0,	//766  QDebug, const QDBusMessage&
    52, 73, 0,	//769  QDBusServiceWatcher::WatchModeFlag, QFlags<QDBusServiceWatcher::WatchModeFlag>
    128, 128, 0,	//772  QTextCodec::ConversionFlag, QTextCodec::ConversionFlag
    245, 139, 0,	//775  const QDBusArgument&, QVariant&
    245, 115, 0,	//778  const QDBusArgument&, QPointF&
    4, 4, 0,	//781  QBool, QBool
    21, 71, 0,	//784  QDBusConnection::RegisterOption, QFlags<QDBusConnection::RegisterOption>
    297, 290, 0,	//787  const char*, const QStringRef&
    13, 275, 0,	//790  QDBusArgument&, const QPoint&
    131, 303, 0,	//793  QTextStream::NumberFlag, int
    61, 277, 0,	//796  QDebug, const QPointF&
    123, 287, 0,	//799  QString::Null, const QString&
    323, 0,	//802  void(*)()
    110, 81, 0,	//804  QLocale::NumberOption, QFlags<QLocale::NumberOption>
    169, 169, 0,	//807  Qt::GestureFlag, Qt::GestureFlag
    58, 117, 0,	//810  QDataStream&, QRectF&
    302, 302, 0,	//813  float, float
    58, 244, 0,	//816  QDataStream&, const QChar&
    58, 115, 0,	//819  QDataStream&, QPointF&
    283, 300, 0,	//822  const QSize&, double
    325, 0,	//825  void(*)(QtMsgType,const char*)
    129, 132, 0,	//827  QTextStream&, QTextStreamManipulator
    142, 142, 0,	//830  Qt::AlignmentFlag, Qt::AlignmentFlag
    58, 105, 0,	//833  QDataStream&, QLine&
    62, 62, 0,	//836  QDir::Filter, QDir::Filter
    275, 300, 0,	//839  const QPoint&, double
    58, 243, 0,	//842  QDataStream&, const QByteArray&
    58, 259, 0,	//845  QDataStream&, const QEasingCurve&
    173, 173, 0,	//848  Qt::ImageConversionFlag, Qt::ImageConversionFlag
    212, 303, 0,	//851  Qt::WindowState, int
    58, 122, 0,	//854  QDataStream&, QString&
    272, 287, 269, 0,	//857  const QObject*, const QString&, const QMetaObject&
    58, 279, 0,	//861  QDataStream&, const QRectF&
    58, 3, 0,	//864  QDataStream&, QBitArray&
    58, 119, 0,	//867  QDataStream&, QSize&
    181, 181, 0,	//870  Qt::KeyboardModifier, Qt::KeyboardModifier
    236, 4, 0,	//873  bool, QBool
    131, 131, 0,	//876  QTextStream::NumberFlag, QTextStream::NumberFlag
    58, 60, 0,	//879  QDataStream&, QDateTime&
    294, 140, 327, 0,	//882  const QVariant&, QVariant::Type, void*
    290, 287, 0,	//886  const QStringRef&, const QString&
    298, 314, 303, 0,	//889  const unsigned char*, unsigned char*, int
    181, 303, 0,	//893  Qt::KeyboardModifier, int
    58, 257, 0,	//896  QDataStream&, const QDateTime&
    245, 114, 0,	//899  const QDBusArgument&, QPoint&
    216, 297, 0,	//902  QtMsgType, const char*
    67, 77, 0,	//905  QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>
    268, 268, 0,	//908  const QMargins&, const QMargins&
    136, 136, 0,	//911  QUrl::FormattingOption, QUrl::FormattingOption
    61, 295, 0,	//914  QDebug, const QVariant::Type
    58, 133, 0,	//917  QDataStream&, QTime&
    162, 303, 0,	//920  Qt::DockWidgetArea, int
    213, 213, 0,	//923  Qt::WindowType, Qt::WindowType
    61, 257, 0,	//926  QDebug, const QDateTime&
    327, 303, 311, 0,	//929  void*, int, size_t
    310, 0,	//933  signed char
    13, 291, 0,	//935  QDBusArgument&, const QTime&
    213, 101, 0,	//938  Qt::WindowType, QFlags<Qt::WindowType>
    212, 212, 0,	//941  Qt::WindowState, Qt::WindowState
    58, 126, 0,	//944  QDataStream&, QStringList&
    61, 294, 0,	//947  QDebug, const QVariant&
    68, 303, 0,	//950  QFile::Permission, int
    113, 0,	//953  QObject*(*)()
    300, 277, 0,	//955  double, const QPointF&
    303, 275, 0,	//958  int, const QPoint&
    58, 292, 0,	//961  QDataStream&, const QUrl&
    58, 114, 0,	//964  QDataStream&, QPoint&
    58, 291, 0,	//967  QDataStream&, const QTime&
    13, 278, 0,	//970  QDBusArgument&, const QRect&
    290, 0,	//973  const QStringRef&
    58, 118, 0,	//975  QDataStream&, QRegExp&
    175, 303, 0,	//978  Qt::InputMethodHint, int
    58, 266, 0,	//981  QDataStream&, const QLocale&
    245, 119, 0,	//984  const QDBusArgument&, QSize&
    311, 311, 0,	//987  size_t, size_t
    58, 241, 0,	//990  QDataStream&, const QBitArray&
    297, 297, 297, 303, 0,	//993  const char*, const char*, const char*, int
    245, 59, 0,	//998  const QDBusArgument&, QDate&
    136, 85, 0,	//1001  QUrl::FormattingOption, QFlags<QUrl::FormattingOption>
    13, 256, 0,	//1004  QDBusArgument&, const QDate&
    67, 67, 0,	//1007  QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag
    243, 238, 0,	//1010  const QByteArray&, char
    104, 104, 0,	//1013  QLibrary::LoadHint, QLibrary::LoadHint
    142, 86, 0,	//1016  Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>
    13, 265, 0,	//1019  QDBusArgument&, const QList<QVariant>&
    13, 260, 0,	//1022  QDBusArgument&, const QHash<QString,QVariant>&
    58, 293, 0,	//1025  QDataStream&, const QUuid&
    102, 79, 0,	//1028  QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>
    58, 263, 0,	//1031  QDataStream&, const QLine&
    61, 248, 0,	//1034  QDebug, const QDBusError&
    169, 303, 0,	//1037  Qt::GestureFlag, int
    290, 297, 0,	//1040  const QStringRef&, const char*
    63, 75, 0,	//1043  QDir::SortFlag, QFlags<QDir::SortFlag>
    58, 256, 0,	//1046  QDataStream&, const QDate&
    238, 243, 0,	//1049  char, const QByteArray&
    104, 303, 0,	//1052  QLibrary::LoadHint, int
    298, 303, 303, 0,	//1055  const unsigned char*, int, int
    188, 188, 0,	//1059  Qt::Orientation, Qt::Orientation
    4, 236, 0,	//1062  QBool, bool
    255, 255, 0,	//1065  const QDBusVariant&, const QDBusVariant&
    13, 285, 0,	//1068  QDBusArgument&, const QSizeF&
    58, 288, 0,	//1071  QDataStream&, const QStringList&
    58, 280, 0,	//1074  QDataStream&, const QRegExp&
    63, 303, 0,	//1077  QDir::SortFlag, int
    327, 299, 311, 0,	//1080  void*, const void*, size_t
    327, 0,	//1084  void*
    203, 98, 0,	//1086  Qt::ToolBarArea, QFlags<Qt::ToolBarArea>
    52, 303, 0,	//1089  QDBusServiceWatcher::WatchModeFlag, int
    61, 273, 0,	//1092  QDebug, const QPersistentModelIndex&
    58, 139, 0,	//1095  QDataStream&, QVariant&
    292, 0,	//1098  const QUrl&
    206, 99, 0,	//1100  Qt::TouchPointState, QFlags<Qt::TouchPointState>
    302, 275, 0,	//1103  float, const QPoint&
    300, 275, 0,	//1106  double, const QPoint&
    61, 272, 0,	//1109  QDebug, const QObject*
    68, 78, 0,	//1112  QFile::Permission, QFlags<QFile::Permission>
    61, 279, 0,	//1115  QDebug, const QRectF&
    131, 84, 0,	//1118  QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>
    63, 63, 0,	//1121  QDir::SortFlag, QDir::SortFlag
    206, 303, 0,	//1124  Qt::TouchPointState, int
    62, 303, 0,	//1127  QDir::Filter, int
    317, 0,	//1130  unsigned long
    13, 263, 0,	//1132  QDBusArgument&, const QLine&
    1, 69, 0,	//1135  QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>
    186, 95, 0,	//1138  Qt::MouseButton, QFlags<Qt::MouseButton>
    164, 88, 0,	//1141  Qt::DropAction, QFlags<Qt::DropAction>
    311, 0,	//1144  size_t
    188, 303, 0,	//1146  Qt::Orientation, int
    203, 303, 0,	//1149  Qt::ToolBarArea, int
    58, 6, 0,	//1152  QDataStream&, QByteArray&
    58, 141, 0,	//1155  QDataStream&, QVariant::Type&
    58, 278, 0,	//1158  QDataStream&, const QRect&
    61, 259, 0,	//1161  QDebug, const QEasingCurve&
    273, 0,	//1164  const QPersistentModelIndex&
    61, 291, 0,	//1166  QDebug, const QTime&
    110, 303, 0,	//1169  QLocale::NumberOption, int
    206, 206, 0,	//1172  Qt::TouchPointState, Qt::TouchPointState
    173, 90, 0,	//1175  Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>
    212, 100, 0,	//1178  Qt::WindowState, QFlags<Qt::WindowState>
    162, 162, 0,	//1181  Qt::DockWidgetArea, Qt::DockWidgetArea
    64, 303, 0,	//1184  QDirIterator::IteratorFlag, int
    300, 285, 0,	//1187  double, const QSizeF&
    61, 268, 0,	//1190  QDebug, const QMargins&
    271, 0,	//1193  const QModelIndex&
    275, 303, 0,	//1195  const QPoint&, int
    136, 303, 0,	//1198  QUrl::FormattingOption, int
    184, 184, 0,	//1201  Qt::MatchFlag, Qt::MatchFlag
    175, 175, 0,	//1204  Qt::InputMethodHint, Qt::InputMethodHint
    188, 96, 0,	//1207  Qt::Orientation, QFlags<Qt::Orientation>
    61, 74, 0,	//1210  QDebug, QFlags<QDir::Filter>
    178, 303, 0,	//1213  Qt::ItemFlag, int
    186, 303, 0,	//1216  Qt::MouseButton, int
    58, 120, 0,	//1219  QDataStream&, QSizeF&
    102, 303, 0,	//1222  QIODevice::OpenModeFlag, int
    124, 303, 0,	//1225  QString::SectionFlag, int
    58, 283, 0,	//1228  QDataStream&, const QSize&
    62, 74, 0,	//1231  QDir::Filter, QFlags<QDir::Filter>
    124, 124, 0,	//1234  QString::SectionFlag, QString::SectionFlag
    66, 0,	//1237  QEvent*
    112, 66, 0,	//1239  QObject*, QEvent*
    134, 0,	//1242  QTimerEvent*
    9, 0,	//1244  QChildEvent*
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "AccessDenied",	//1
    "ActivationBus",	//2
    "AddressInUse",	//3
    "AllowReplacement",	//4
    "ArrayType",	//5
    "AutoDetect",	//6
    "BadAddress",	//7
    "BasicType",	//8
    "Block",	//9
    "BlockWithGui",	//10
    "Disconnected",	//11
    "DontAllowReplacement",	//12
    "DontQueueService",	//13
    "ErrorMessage",	//14
    "ExportAdaptors",	//15
    "ExportAllContents",	//16
    "ExportAllInvokables",	//17
    "ExportAllProperties",	//18
    "ExportAllSignal",	//19
    "ExportAllSignals",	//20
    "ExportAllSlots",	//21
    "ExportChildObjects",	//22
    "ExportNonScriptableContents",	//23
    "ExportNonScriptableInvokables",	//24
    "ExportNonScriptableProperties",	//25
    "ExportNonScriptableSignals",	//26
    "ExportNonScriptableSlots",	//27
    "ExportScriptableContents",	//28
    "ExportScriptableInvokables",	//29
    "ExportScriptableProperties",	//30
    "ExportScriptableSignals",	//31
    "ExportScriptableSlots",	//32
    "Failed",	//33
    "InternalError",	//34
    "InvalidArgs",	//35
    "InvalidInterface",	//36
    "InvalidMember",	//37
    "InvalidMessage",	//38
    "InvalidObjectPath",	//39
    "InvalidService",	//40
    "InvalidSignature",	//41
    "LastErrorType",	//42
    "LicensedActiveQt",	//43
    "LicensedCore",	//44
    "LicensedDBus",	//45
    "LicensedDeclarative",	//46
    "LicensedGui",	//47
    "LicensedHelp",	//48
    "LicensedMultimedia",	//49
    "LicensedNetwork",	//50
    "LicensedOpenGL",	//51
    "LicensedOpenVG",	//52
    "LicensedQt3Support",	//53
    "LicensedQt3SupportLight",	//54
    "LicensedScript",	//55
    "LicensedScriptTools",	//56
    "LicensedSql",	//57
    "LicensedSvg",	//58
    "LicensedTest",	//59
    "LicensedXml",	//60
    "LicensedXmlPatterns",	//61
    "LimitsExceeded",	//62
    "MapEntryType",	//63
    "MapType",	//64
    "MethodCallMessage",	//65
    "NameAcquired",	//66
    "NameAcquired$",	//67
    "NameLost",	//68
    "NameLost$",	//69
    "NameOwnerChanged",	//70
    "NameOwnerChanged$$$",	//71
    "NoBlock",	//72
    "NoError",	//73
    "NoMemory",	//74
    "NoNetwork",	//75
    "NoReply",	//76
    "NoServer",	//77
    "NotSupported",	//78
    "Other",	//79
    "QDBusAbstractAdaptor",	//80
    "QDBusAbstractAdaptor#",	//81
    "QDBusAbstractInterface",	//82
    "QDBusAbstractInterface$$$##",	//83
    "QDBusArgument",	//84
    "QDBusArgument#",	//85
    "QDBusConnection",	//86
    "QDBusConnection#",	//87
    "QDBusConnection$",	//88
    "QDBusContext",	//89
    "QDBusContext#",	//90
    "QDBusError",	//91
    "QDBusError#",	//92
    "QDBusError$$",	//93
    "QDBusInterface",	//94
    "QDBusInterface$$",	//95
    "QDBusInterface$$$",	//96
    "QDBusInterface$$$#",	//97
    "QDBusInterface$$$##",	//98
    "QDBusMessage",	//99
    "QDBusMessage#",	//100
    "QDBusMetaType",	//101
    "QDBusMetaType#",	//102
    "QDBusPendingCall",	//103
    "QDBusPendingCall#",	//104
    "QDBusPendingCallWatcher",	//105
    "QDBusPendingCallWatcher#",	//106
    "QDBusPendingCallWatcher##",	//107
    "QDBusServer",	//108
    "QDBusServer$",	//109
    "QDBusServer$#",	//110
    "QDBusServiceWatcher",	//111
    "QDBusServiceWatcher#",	//112
    "QDBusServiceWatcher$#",	//113
    "QDBusServiceWatcher$#$",	//114
    "QDBusServiceWatcher$#$#",	//115
    "QDBusUnixFileDescriptor",	//116
    "QDBusUnixFileDescriptor#",	//117
    "QDBusUnixFileDescriptor$",	//118
    "QDBusVirtualObject",	//119
    "QDBusVirtualObject#",	//120
    "Q_COMPLEX_TYPE",	//121
    "Q_DUMMY_TYPE",	//122
    "Q_MOVABLE_TYPE",	//123
    "Q_PRIMITIVE_TYPE",	//124
    "Q_STATIC_TYPE",	//125
    "QtCriticalMsg",	//126
    "QtDebugMsg",	//127
    "QtFatalMsg",	//128
    "QtSystemMsg",	//129
    "QtWarningMsg",	//130
    "QueueService",	//131
    "ReplaceExistingService",	//132
    "ReplyMessage",	//133
    "ServiceNotRegistered",	//134
    "ServiceQueued",	//135
    "ServiceRegistered",	//136
    "ServiceUnknown",	//137
    "SessionBus",	//138
    "SignalMessage",	//139
    "SingleNode",	//140
    "StructureType",	//141
    "SubPath",	//142
    "SystemBus",	//143
    "TimedOut",	//144
    "Timeout",	//145
    "UnixFileDescriptorPassing",	//146
    "UnknownInterface",	//147
    "UnknownMethod",	//148
    "UnknownObject",	//149
    "UnknownType",	//150
    "UnregisterNode",	//151
    "UnregisterTree",	//152
    "VariantType",	//153
    "WatchForOwnerChange",	//154
    "WatchForRegistration",	//155
    "WatchForUnregistration",	//156
    "addWatchedService",	//157
    "addWatchedService$",	//158
    "address",	//159
    "appendVariant",	//160
    "appendVariant#",	//161
    "arguments",	//162
    "asVariant",	//163
    "asyncCall",	//164
    "asyncCall#",	//165
    "asyncCall#$",	//166
    "asyncCall$",	//167
    "asyncCall$#",	//168
    "asyncCall$##",	//169
    "asyncCall$###",	//170
    "asyncCall$####",	//171
    "asyncCall$#####",	//172
    "asyncCall$######",	//173
    "asyncCall$#######",	//174
    "asyncCall$########",	//175
    "asyncCallWithArgumentList",	//176
    "asyncCallWithArgumentList$?",	//177
    "atEnd",	//178
    "autoRelaySignals",	//179
    "autoStartService",	//180
    "baseService",	//181
    "beginArray",	//182
    "beginArray$",	//183
    "beginMap",	//184
    "beginMap$$",	//185
    "beginMapEntry",	//186
    "beginStructure",	//187
    "call",	//188
    "call#",	//189
    "call#$",	//190
    "call#$$",	//191
    "call$",	//192
    "call$#",	//193
    "call$##",	//194
    "call$###",	//195
    "call$####",	//196
    "call$#####",	//197
    "call$######",	//198
    "call$#######",	//199
    "call$########",	//200
    "call$$",	//201
    "call$$#",	//202
    "call$$##",	//203
    "call$$###",	//204
    "call$$####",	//205
    "call$$#####",	//206
    "call$$######",	//207
    "call$$#######",	//208
    "call$$########",	//209
    "callWithArgumentList",	//210
    "callWithArgumentList$$?",	//211
    "callWithCallback",	//212
    "callWithCallback##$",	//213
    "callWithCallback##$$",	//214
    "callWithCallback##$$$",	//215
    "callWithCallback$?#$",	//216
    "callWithCallback$?#$$",	//217
    "callWithCallbackFailed",	//218
    "callWithCallbackFailed##",	//219
    "calledFromDBus",	//220
    "childEvent",	//221
    "connect",	//222
    "connect$$$$#$",	//223
    "connect$$$$$#$",	//224
    "connect$$$$?$#$",	//225
    "connectNotify",	//226
    "connectNotify$",	//227
    "connectToBus",	//228
    "connectToBus$$",	//229
    "connectToPeer",	//230
    "connectToPeer$$",	//231
    "connection",	//232
    "connectionCapabilities",	//233
    "createError",	//234
    "createError#",	//235
    "createError$$",	//236
    "createErrorReply",	//237
    "createErrorReply#",	//238
    "createErrorReply$$",	//239
    "createMethodCall",	//240
    "createMethodCall$$$$",	//241
    "createReply",	//242
    "createReply#",	//243
    "createReply?",	//244
    "createSignal",	//245
    "createSignal$$$",	//246
    "currentSignature",	//247
    "currentType",	//248
    "customEvent",	//249
    "demarshall",	//250
    "demarshall#$$",	//251
    "disconnect",	//252
    "disconnect$$$$#$",	//253
    "disconnect$$$$$#$",	//254
    "disconnect$$$$?$#$",	//255
    "disconnectFromBus",	//256
    "disconnectFromBus$",	//257
    "disconnectFromPeer",	//258
    "disconnectFromPeer$",	//259
    "disconnectNotify",	//260
    "disconnectNotify$",	//261
    "endArray",	//262
    "endMap",	//263
    "endMapEntry",	//264
    "endStructure",	//265
    "error",	//266
    "errorMessage",	//267
    "errorName",	//268
    "errorString",	//269
    "errorString$",	//270
    "event",	//271
    "eventFilter",	//272
    "fileDescriptor",	//273
    "finished",	//274
    "finished#",	//275
    "fromCompletedCall",	//276
    "fromCompletedCall#",	//277
    "fromError",	//278
    "fromError#",	//279
    "giveFileDescriptor",	//280
    "giveFileDescriptor$",	//281
    "handleMessage",	//282
    "handleMessage##",	//283
    "interface",	//284
    "internalConstCall",	//285
    "internalConstCall$$",	//286
    "internalConstCall$$?",	//287
    "internalPointer",	//288
    "internalPropGet",	//289
    "internalPropGet$",	//290
    "internalPropSet",	//291
    "internalPropSet$#",	//292
    "introspect",	//293
    "introspect$",	//294
    "isConnected",	//295
    "isDelayedReply",	//296
    "isError",	//297
    "isFinished",	//298
    "isReplyRequired",	//299
    "isServiceRegistered",	//300
    "isServiceRegistered$",	//301
    "isSupported",	//302
    "isValid",	//303
    "lastError",	//304
    "localMachineId",	//305
    "marshall",	//306
    "marshall#$$",	//307
    "member",	//308
    "message",	//309
    "metaObject",	//310
    "name",	//311
    "newConnection",	//312
    "newConnection#",	//313
    "objectRegisteredAt",	//314
    "objectRegisteredAt$",	//315
    "operator!=",	//316
    "operator!=##",	//317
    "operator!=#$",	//318
    "operator!=$#",	//319
    "operator!=$$",	//320
    "operator&",	//321
    "operator&##",	//322
    "operator*",	//323
    "operator*#$",	//324
    "operator*$#",	//325
    "operator+",	//326
    "operator+##",	//327
    "operator+#$",	//328
    "operator+$#",	//329
    "operator+$$",	//330
    "operator-",	//331
    "operator-#",	//332
    "operator-##",	//333
    "operator/",	//334
    "operator/#$",	//335
    "operator<",	//336
    "operator<##",	//337
    "operator<#$",	//338
    "operator<$#",	//339
    "operator<$$",	//340
    "operator<<",	//341
    "operator<<#",	//342
    "operator<<##",	//343
    "operator<<#$",	//344
    "operator<<#?",	//345
    "operator<<$",	//346
    "operator<<?",	//347
    "operator<=",	//348
    "operator<=##",	//349
    "operator<=#$",	//350
    "operator<=$#",	//351
    "operator=",	//352
    "operator=#",	//353
    "operator==",	//354
    "operator==##",	//355
    "operator==#$",	//356
    "operator==$#",	//357
    "operator==$$",	//358
    "operator>",	//359
    "operator>##",	//360
    "operator>#$",	//361
    "operator>$#",	//362
    "operator>=",	//363
    "operator>=##",	//364
    "operator>=#$",	//365
    "operator>=$#",	//366
    "operator>>",	//367
    "operator>>#",	//368
    "operator>>##",	//369
    "operator>>#$",	//370
    "operator>>#?",	//371
    "operator>>$",	//372
    "operator>>?",	//373
    "operator^",	//374
    "operator^##",	//375
    "operator|",	//376
    "operator|##",	//377
    "operator|$$",	//378
    "path",	//379
    "qAcos",	//380
    "qAcos$",	//381
    "qAddPostRoutine",	//382
    "qAddPostRoutine$",	//383
    "qAppName",	//384
    "qAsin",	//385
    "qAsin$",	//386
    "qAtan",	//387
    "qAtan$",	//388
    "qAtan2",	//389
    "qAtan2$$",	//390
    "qBadAlloc",	//391
    "qCeil",	//392
    "qCeil$",	//393
    "qChecksum",	//394
    "qChecksum$$",	//395
    "qCompress",	//396
    "qCompress#",	//397
    "qCompress#$",	//398
    "qCompress$$",	//399
    "qCompress$$$",	//400
    "qCos",	//401
    "qCos$",	//402
    "qCritical",	//403
    "qDBusReplyFill",	//404
    "qDBusReplyFill###",	//405
    "qDebug",	//406
    "qExp",	//407
    "qExp$",	//408
    "qFabs",	//409
    "qFabs$",	//410
    "qFastCos",	//411
    "qFastCos$",	//412
    "qFastSin",	//413
    "qFastSin$",	//414
    "qFlagLocation",	//415
    "qFlagLocation$",	//416
    "qFloor",	//417
    "qFloor$",	//418
    "qFree",	//419
    "qFree$",	//420
    "qFreeAligned",	//421
    "qFreeAligned$",	//422
    "qFuzzyCompare",	//423
    "qFuzzyCompare$$",	//424
    "qFuzzyIsNull",	//425
    "qFuzzyIsNull$",	//426
    "qHash",	//427
    "qHash#",	//428
    "qHash$",	//429
    "qInf",	//430
    "qInstallMsgHandler",	//431
    "qInstallMsgHandler$",	//432
    "qIntCast",	//433
    "qIntCast$",	//434
    "qIsFinite",	//435
    "qIsFinite$",	//436
    "qIsInf",	//437
    "qIsInf$",	//438
    "qIsNaN",	//439
    "qIsNaN$",	//440
    "qIsNull",	//441
    "qIsNull$",	//442
    "qLn",	//443
    "qLn$",	//444
    "qMalloc",	//445
    "qMalloc$",	//446
    "qMallocAligned",	//447
    "qMallocAligned$$",	//448
    "qMemCopy",	//449
    "qMemCopy$$$",	//450
    "qMemSet",	//451
    "qMemSet$$$",	//452
    "qPow",	//453
    "qPow$$",	//454
    "qQNaN",	//455
    "qRealloc",	//456
    "qRealloc$$",	//457
    "qReallocAligned",	//458
    "qReallocAligned$$$$",	//459
    "qRegisterStaticPluginInstanceFunction",	//460
    "qRegisterStaticPluginInstanceFunction#",	//461
    "qRemovePostRoutine",	//462
    "qRemovePostRoutine$",	//463
    "qRound",	//464
    "qRound$",	//465
    "qRound64",	//466
    "qRound64$",	//467
    "qSNaN",	//468
    "qSetFieldWidth",	//469
    "qSetFieldWidth$",	//470
    "qSetPadChar",	//471
    "qSetPadChar#",	//472
    "qSetRealNumberPrecision",	//473
    "qSetRealNumberPrecision$",	//474
    "qSharedBuild",	//475
    "qSin",	//476
    "qSin$",	//477
    "qSqrt",	//478
    "qSqrt$",	//479
    "qStringComparisonHelper",	//480
    "qStringComparisonHelper#$",	//481
    "qTan",	//482
    "qTan$",	//483
    "qUncompress",	//484
    "qUncompress#",	//485
    "qUncompress$$",	//486
    "qVersion",	//487
    "qWarning",	//488
    "qbswap_helper",	//489
    "qbswap_helper$$$",	//490
    "qgetenv",	//491
    "qgetenv$",	//492
    "qputenv",	//493
    "qputenv$#",	//494
    "qrand",	//495
    "qsrand",	//496
    "qsrand$",	//497
    "qstrcmp",	//498
    "qstrcmp##",	//499
    "qstrcmp#$",	//500
    "qstrcmp$#",	//501
    "qstrcmp$$",	//502
    "qstrcpy",	//503
    "qstrcpy$$",	//504
    "qstrdup",	//505
    "qstrdup$",	//506
    "qstricmp",	//507
    "qstricmp$$",	//508
    "qstrlen",	//509
    "qstrlen$",	//510
    "qstrncmp",	//511
    "qstrncmp$$$",	//512
    "qstrncpy",	//513
    "qstrncpy$$$",	//514
    "qstrnicmp",	//515
    "qstrnicmp$$$",	//516
    "qstrnlen",	//517
    "qstrnlen$$",	//518
    "qtTrId",	//519
    "qtTrId$",	//520
    "qtTrId$$",	//521
    "qt_assert",	//522
    "qt_assert$$$",	//523
    "qt_assert_x",	//524
    "qt_assert_x$$$$",	//525
    "qt_check_pointer",	//526
    "qt_check_pointer$$",	//527
    "qt_error_string",	//528
    "qt_error_string$",	//529
    "qt_message_output",	//530
    "qt_message_output$$",	//531
    "qt_metacall",	//532
    "qt_metacall$$?",	//533
    "qt_metacast",	//534
    "qt_metacast$",	//535
    "qt_noop",	//536
    "qt_qFindChild_helper",	//537
    "qt_qFindChild_helper#$#",	//538
    "qt_qFindChildren_helper",	//539
    "qt_qFindChildren_helper#$##?",	//540
    "qvariant_cast_helper",	//541
    "qvariant_cast_helper#$$",	//542
    "qvsnprintf",	//543
    "qvsnprintf$$$?",	//544
    "registerMarshallOperators",	//545
    "registerMarshallOperators$$$",	//546
    "registerObject",	//547
    "registerObject$#",	//548
    "registerObject$#$",	//549
    "registerService",	//550
    "registerService$",	//551
    "registerService$$",	//552
    "registerService$$$",	//553
    "registerVirtualObject",	//554
    "registerVirtualObject$#",	//555
    "registerVirtualObject$#$",	//556
    "registeredServiceNames",	//557
    "removeWatchedService",	//558
    "removeWatchedService$",	//559
    "reply",	//560
    "send",	//561
    "send#",	//562
    "sendErrorReply",	//563
    "sendErrorReply$",	//564
    "sendErrorReply$$",	//565
    "sender",	//566
    "service",	//567
    "serviceOwner",	//568
    "serviceOwner$",	//569
    "serviceOwnerChanged",	//570
    "serviceOwnerChanged$$$",	//571
    "servicePid",	//572
    "servicePid$",	//573
    "serviceRegistered",	//574
    "serviceRegistered$",	//575
    "serviceUid",	//576
    "serviceUid$",	//577
    "serviceUnregistered",	//578
    "serviceUnregistered$",	//579
    "sessionBus",	//580
    "setArguments",	//581
    "setArguments?",	//582
    "setAutoRelaySignals",	//583
    "setAutoRelaySignals$",	//584
    "setAutoStartService",	//585
    "setAutoStartService$",	//586
    "setConnection",	//587
    "setConnection#",	//588
    "setDelayedReply",	//589
    "setDelayedReply$",	//590
    "setFileDescriptor",	//591
    "setFileDescriptor$",	//592
    "setTimeout",	//593
    "setTimeout$",	//594
    "setWatchMode",	//595
    "setWatchMode$",	//596
    "setWatchedServices",	//597
    "setWatchedServices?",	//598
    "signature",	//599
    "signatureToType",	//600
    "signatureToType$",	//601
    "startService",	//602
    "startService$",	//603
    "staticMetaObject",	//604
    "systemBus",	//605
    "takeFileDescriptor",	//606
    "timeout",	//607
    "timerEvent",	//608
    "tr",	//609
    "tr$",	//610
    "tr$$",	//611
    "tr$$$",	//612
    "trUtf8",	//613
    "trUtf8$",	//614
    "trUtf8$$",	//615
    "trUtf8$$$",	//616
    "type",	//617
    "typeToSignature",	//618
    "typeToSignature$",	//619
    "unregisterObject",	//620
    "unregisterObject$",	//621
    "unregisterObject$$",	//622
    "unregisterService",	//623
    "unregisterService$",	//624
    "waitForFinished",	//625
    "watchMode",	//626
    "watchedServices",	//627
    "~QDBusAbstractAdaptor",	//628
    "~QDBusAbstractInterface",	//629
    "~QDBusAbstractInterfaceBase",	//630
    "~QDBusArgument",	//631
    "~QDBusConnection",	//632
    "~QDBusContext",	//633
    "~QDBusError",	//634
    "~QDBusInterface",	//635
    "~QDBusMessage",	//636
    "~QDBusMetaType",	//637
    "~QDBusPendingCall",	//638
    "~QDBusPendingCallWatcher",	//639
    "~QDBusServer",	//640
    "~QDBusServiceWatcher",	//641
    "~QDBusUnixFileDescriptor",	//642
    "~QDBusVirtualObject",	//643
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {7, 72, 0, 0, Smoke::mf_static|Smoke::mf_enum, 10, 1},	//1 QDBus::NoBlock (enum)
    {7, 9, 0, 0, Smoke::mf_static|Smoke::mf_enum, 10, 2},	//2 QDBus::Block (enum)
    {7, 10, 0, 0, Smoke::mf_static|Smoke::mf_enum, 10, 3},	//3 QDBus::BlockWithGui (enum)
    {7, 6, 0, 0, Smoke::mf_static|Smoke::mf_enum, 10, 4},	//4 QDBus::AutoDetect (enum)
    {8, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 1},	//5 QDBusAbstractAdaptor::metaObject() const
    {8, 534, 1, 1, Smoke::mf_virtual, 327, 2},	//6 QDBusAbstractAdaptor::qt_metacast(const char*)
    {8, 609, 3, 2, Smoke::mf_static, 121, 3},	//7 QDBusAbstractAdaptor::tr(const char*, const char*)
    {8, 613, 3, 2, Smoke::mf_static, 121, 4},	//8 QDBusAbstractAdaptor::trUtf8(const char*, const char*)
    {8, 609, 6, 3, Smoke::mf_static, 121, 5},	//9 QDBusAbstractAdaptor::tr(const char*, const char*, int)
    {8, 613, 6, 3, Smoke::mf_static, 121, 6},	//10 QDBusAbstractAdaptor::trUtf8(const char*, const char*, int)
    {8, 532, 10, 3, Smoke::mf_virtual, 303, 7},	//11 QDBusAbstractAdaptor::qt_metacall(QMetaObject::Call, int, void**)
    {8, 80, 14, 1, Smoke::mf_ctor|Smoke::mf_protected, 11, 8},	//12 QDBusAbstractAdaptor::QDBusAbstractAdaptor(QObject*)
    {8, 583, 16, 1, Smoke::mf_protected, 0, 9},	//13 QDBusAbstractAdaptor::setAutoRelaySignals(bool)
    {8, 179, 0, 0, Smoke::mf_const|Smoke::mf_protected, 236, 10},	//14 QDBusAbstractAdaptor::autoRelaySignals() const
    {8, 609, 1, 1, Smoke::mf_static, 121, 11},	//15 QDBusAbstractAdaptor::tr(const char*)
    {8, 613, 1, 1, Smoke::mf_static, 121, 12},	//16 QDBusAbstractAdaptor::trUtf8(const char*)
    {8, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 13},	//17 QDBusAbstractAdaptor::staticMetaObject() const
    {8, 628, 0, 0, Smoke::mf_dtor, 0, 14 },	//18 QDBusAbstractAdaptor::~QDBusAbstractAdaptor()
    {9, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 1},	//19 QDBusAbstractInterface::metaObject() const
    {9, 534, 1, 1, Smoke::mf_virtual, 327, 2},	//20 QDBusAbstractInterface::qt_metacast(const char*)
    {9, 609, 3, 2, Smoke::mf_static, 121, 3},	//21 QDBusAbstractInterface::tr(const char*, const char*)
    {9, 613, 3, 2, Smoke::mf_static, 121, 4},	//22 QDBusAbstractInterface::trUtf8(const char*, const char*)
    {9, 609, 6, 3, Smoke::mf_static, 121, 5},	//23 QDBusAbstractInterface::tr(const char*, const char*, int)
    {9, 613, 6, 3, Smoke::mf_static, 121, 6},	//24 QDBusAbstractInterface::trUtf8(const char*, const char*, int)
    {9, 532, 10, 3, Smoke::mf_virtual, 303, 7},	//25 QDBusAbstractInterface::qt_metacall(QMetaObject::Call, int, void**)
    {9, 303, 0, 0, Smoke::mf_const, 236, 8},	//26 QDBusAbstractInterface::isValid() const
    {9, 232, 0, 0, Smoke::mf_const, 16, 9},	//27 QDBusAbstractInterface::connection() const
    {9, 567, 0, 0, Smoke::mf_const, 121, 10},	//28 QDBusAbstractInterface::service() const
    {9, 379, 0, 0, Smoke::mf_const, 121, 11},	//29 QDBusAbstractInterface::path() const
    {9, 284, 0, 0, Smoke::mf_const, 121, 12},	//30 QDBusAbstractInterface::interface() const
    {9, 304, 0, 0, Smoke::mf_const, 29, 13},	//31 QDBusAbstractInterface::lastError() const
    {9, 593, 18, 1, 0, 0, 14},	//32 QDBusAbstractInterface::setTimeout(int)
    {9, 607, 0, 0, Smoke::mf_const, 303, 15},	//33 QDBusAbstractInterface::timeout() const
    {9, 188, 20, 9, 0, 34, 16},	//34 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 30, 10, 0, 34, 17},	//35 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 210, 41, 3, 0, 34, 18},	//36 QDBusAbstractInterface::callWithArgumentList(QDBus::CallMode, const QString&, const QList<QVariant>&)
    {9, 212, 45, 5, 0, 236, 19},	//37 QDBusAbstractInterface::callWithCallback(const QString&, const QList<QVariant>&, QObject*, const char*, const char*)
    {9, 212, 51, 4, 0, 236, 20},	//38 QDBusAbstractInterface::callWithCallback(const QString&, const QList<QVariant>&, QObject*, const char*)
    {9, 164, 20, 9, 0, 40, 21},	//39 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 176, 56, 2, 0, 40, 22},	//40 QDBusAbstractInterface::asyncCallWithArgumentList(const QString&, const QList<QVariant>&)
    {9, 82, 59, 5, Smoke::mf_ctor|Smoke::mf_protected, 12, 23},	//41 QDBusAbstractInterface::QDBusAbstractInterface(const QString&, const QString&, const char*, const QDBusConnection&, QObject*)
    {9, 226, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 24},	//42 QDBusAbstractInterface::connectNotify(const char*)
    {9, 260, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 25},	//43 QDBusAbstractInterface::disconnectNotify(const char*)
    {9, 289, 1, 1, Smoke::mf_const|Smoke::mf_protected, 138, 26},	//44 QDBusAbstractInterface::internalPropGet(const char*) const
    {9, 291, 65, 2, Smoke::mf_protected, 0, 27},	//45 QDBusAbstractInterface::internalPropSet(const char*, const QVariant&)
    {9, 285, 41, 3, Smoke::mf_const|Smoke::mf_protected, 34, 28},	//46 QDBusAbstractInterface::internalConstCall(QDBus::CallMode, const QString&, const QList<QVariant>&) const
    {9, 609, 1, 1, Smoke::mf_static, 121, 29},	//47 QDBusAbstractInterface::tr(const char*)
    {9, 613, 1, 1, Smoke::mf_static, 121, 30},	//48 QDBusAbstractInterface::trUtf8(const char*)
    {9, 188, 68, 1, 0, 34, 31},	//49 QDBusAbstractInterface::call(const QString&)
    {9, 188, 70, 2, 0, 34, 32},	//50 QDBusAbstractInterface::call(const QString&, const QVariant&)
    {9, 188, 73, 3, 0, 34, 33},	//51 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&)
    {9, 188, 77, 4, 0, 34, 34},	//52 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 82, 5, 0, 34, 35},	//53 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 88, 6, 0, 34, 36},	//54 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 95, 7, 0, 34, 37},	//55 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 103, 8, 0, 34, 38},	//56 QDBusAbstractInterface::call(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 112, 2, 0, 34, 39},	//57 QDBusAbstractInterface::call(QDBus::CallMode, const QString&)
    {9, 188, 115, 3, 0, 34, 40},	//58 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&)
    {9, 188, 119, 4, 0, 34, 41},	//59 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&)
    {9, 188, 124, 5, 0, 34, 42},	//60 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 130, 6, 0, 34, 43},	//61 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 137, 7, 0, 34, 44},	//62 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 145, 8, 0, 34, 45},	//63 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 188, 154, 9, 0, 34, 46},	//64 QDBusAbstractInterface::call(QDBus::CallMode, const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 164, 68, 1, 0, 40, 47},	//65 QDBusAbstractInterface::asyncCall(const QString&)
    {9, 164, 70, 2, 0, 40, 48},	//66 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&)
    {9, 164, 73, 3, 0, 40, 49},	//67 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&)
    {9, 164, 77, 4, 0, 40, 50},	//68 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&, const QVariant&)
    {9, 164, 82, 5, 0, 40, 51},	//69 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 164, 88, 6, 0, 40, 52},	//70 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 164, 95, 7, 0, 40, 53},	//71 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 164, 103, 8, 0, 40, 54},	//72 QDBusAbstractInterface::asyncCall(const QString&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&, const QVariant&)
    {9, 285, 112, 2, Smoke::mf_const|Smoke::mf_protected, 34, 55},	//73 QDBusAbstractInterface::internalConstCall(QDBus::CallMode, const QString&) const
    {9, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 56},	//74 QDBusAbstractInterface::staticMetaObject() const
    {9, 629, 0, 0, Smoke::mf_dtor, 0, 57 },	//75 QDBusAbstractInterface::~QDBusAbstractInterface()
    {10, 532, 10, 3, Smoke::mf_virtual, 303, 1},	//76 QDBusAbstractInterfaceBase::qt_metacall(QMetaObject::Call, int, void**)
    {10, 630, 0, 0, Smoke::mf_dtor, 0, 2 },	//77 QDBusAbstractInterfaceBase::~QDBusAbstractInterfaceBase()
    {11, 84, 0, 0, Smoke::mf_ctor, 14, 1},	//78 QDBusArgument::QDBusArgument()
    {11, 84, 164, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 14, 2},	//79 QDBusArgument::QDBusArgument(const QDBusArgument&)
    {11, 352, 164, 1, 0, 13, 3},	//80 QDBusArgument::operator=(const QDBusArgument&)
    {11, 341, 166, 1, 0, 13, 4},	//81 QDBusArgument::operator<<(unsigned char)
    {11, 341, 16, 1, 0, 13, 5},	//82 QDBusArgument::operator<<(bool)
    {11, 341, 168, 1, 0, 13, 6},	//83 QDBusArgument::operator<<(short)
    {11, 341, 170, 1, 0, 13, 7},	//84 QDBusArgument::operator<<(unsigned short)
    {11, 341, 18, 1, 0, 13, 8},	//85 QDBusArgument::operator<<(int)
    {11, 341, 172, 1, 0, 13, 9},	//86 QDBusArgument::operator<<(unsigned int)
    {11, 341, 174, 1, 0, 13, 10},	//87 QDBusArgument::operator<<(long long)
    {11, 341, 176, 1, 0, 13, 11},	//88 QDBusArgument::operator<<(unsigned long long)
    {11, 341, 178, 1, 0, 13, 12},	//89 QDBusArgument::operator<<(double)
    {11, 341, 68, 1, 0, 13, 13},	//90 QDBusArgument::operator<<(const QString&)
    {11, 341, 180, 1, 0, 13, 14},	//91 QDBusArgument::operator<<(const QDBusVariant&)
    {11, 341, 182, 1, 0, 13, 15},	//92 QDBusArgument::operator<<(const QDBusObjectPath&)
    {11, 341, 184, 1, 0, 13, 16},	//93 QDBusArgument::operator<<(const QDBusSignature&)
    {11, 341, 186, 1, 0, 13, 17},	//94 QDBusArgument::operator<<(const QDBusUnixFileDescriptor&)
    {11, 341, 188, 1, 0, 13, 18},	//95 QDBusArgument::operator<<(const QStringList&)
    {11, 341, 190, 1, 0, 13, 19},	//96 QDBusArgument::operator<<(const QByteArray&)
    {11, 187, 0, 0, 0, 0, 20},	//97 QDBusArgument::beginStructure()
    {11, 265, 0, 0, 0, 0, 21},	//98 QDBusArgument::endStructure()
    {11, 182, 18, 1, 0, 0, 22},	//99 QDBusArgument::beginArray(int)
    {11, 262, 0, 0, 0, 0, 23},	//100 QDBusArgument::endArray()
    {11, 184, 192, 2, 0, 0, 24},	//101 QDBusArgument::beginMap(int, int)
    {11, 263, 0, 0, 0, 0, 25},	//102 QDBusArgument::endMap()
    {11, 186, 0, 0, 0, 0, 26},	//103 QDBusArgument::beginMapEntry()
    {11, 264, 0, 0, 0, 0, 27},	//104 QDBusArgument::endMapEntry()
    {11, 160, 195, 1, 0, 0, 28},	//105 QDBusArgument::appendVariant(const QVariant&)
    {11, 247, 0, 0, Smoke::mf_const, 121, 29},	//106 QDBusArgument::currentSignature() const
    {11, 248, 0, 0, Smoke::mf_const, 15, 30},	//107 QDBusArgument::currentType() const
    {11, 367, 197, 1, Smoke::mf_const, 245, 31},	//108 QDBusArgument::operator>>(unsigned char&) const
    {11, 367, 199, 1, Smoke::mf_const, 245, 32},	//109 QDBusArgument::operator>>(bool&) const
    {11, 367, 201, 1, Smoke::mf_const, 245, 33},	//110 QDBusArgument::operator>>(short&) const
    {11, 367, 203, 1, Smoke::mf_const, 245, 34},	//111 QDBusArgument::operator>>(unsigned short&) const
    {11, 367, 205, 1, Smoke::mf_const, 245, 35},	//112 QDBusArgument::operator>>(int&) const
    {11, 367, 207, 1, Smoke::mf_const, 245, 36},	//113 QDBusArgument::operator>>(unsigned int&) const
    {11, 367, 209, 1, Smoke::mf_const, 245, 37},	//114 QDBusArgument::operator>>(long long&) const
    {11, 367, 211, 1, Smoke::mf_const, 245, 38},	//115 QDBusArgument::operator>>(unsigned long long&) const
    {11, 367, 213, 1, Smoke::mf_const, 245, 39},	//116 QDBusArgument::operator>>(double&) const
    {11, 367, 215, 1, Smoke::mf_const, 245, 40},	//117 QDBusArgument::operator>>(QString&) const
    {11, 367, 217, 1, Smoke::mf_const, 245, 41},	//118 QDBusArgument::operator>>(QDBusVariant&) const
    {11, 367, 219, 1, Smoke::mf_const, 245, 42},	//119 QDBusArgument::operator>>(QDBusObjectPath&) const
    {11, 367, 221, 1, Smoke::mf_const, 245, 43},	//120 QDBusArgument::operator>>(QDBusSignature&) const
    {11, 367, 223, 1, Smoke::mf_const, 245, 44},	//121 QDBusArgument::operator>>(QDBusUnixFileDescriptor&) const
    {11, 367, 225, 1, Smoke::mf_const, 245, 45},	//122 QDBusArgument::operator>>(QStringList&) const
    {11, 367, 227, 1, Smoke::mf_const, 245, 46},	//123 QDBusArgument::operator>>(QByteArray&) const
    {11, 187, 0, 0, Smoke::mf_const, 0, 47},	//124 QDBusArgument::beginStructure() const
    {11, 265, 0, 0, Smoke::mf_const, 0, 48},	//125 QDBusArgument::endStructure() const
    {11, 182, 0, 0, Smoke::mf_const, 0, 49},	//126 QDBusArgument::beginArray() const
    {11, 262, 0, 0, Smoke::mf_const, 0, 50},	//127 QDBusArgument::endArray() const
    {11, 184, 0, 0, Smoke::mf_const, 0, 51},	//128 QDBusArgument::beginMap() const
    {11, 263, 0, 0, Smoke::mf_const, 0, 52},	//129 QDBusArgument::endMap() const
    {11, 186, 0, 0, Smoke::mf_const, 0, 53},	//130 QDBusArgument::beginMapEntry() const
    {11, 264, 0, 0, Smoke::mf_const, 0, 54},	//131 QDBusArgument::endMapEntry() const
    {11, 178, 0, 0, Smoke::mf_const, 236, 55},	//132 QDBusArgument::atEnd() const
    {11, 163, 0, 0, Smoke::mf_const, 138, 56},	//133 QDBusArgument::asVariant() const
    {11, 8, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 57},	//134 QDBusArgument::BasicType (enum)
    {11, 153, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 58},	//135 QDBusArgument::VariantType (enum)
    {11, 5, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 59},	//136 QDBusArgument::ArrayType (enum)
    {11, 141, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 60},	//137 QDBusArgument::StructureType (enum)
    {11, 64, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 61},	//138 QDBusArgument::MapType (enum)
    {11, 63, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 62},	//139 QDBusArgument::MapEntryType (enum)
    {11, 150, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 63},	//140 QDBusArgument::UnknownType (enum)
    {11, 631, 0, 0, Smoke::mf_dtor, 0, 64 },	//141 QDBusArgument::~QDBusArgument()
    {12, 86, 68, 1, Smoke::mf_ctor, 18, 1},	//142 QDBusConnection::QDBusConnection(const QString&)
    {12, 86, 229, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 18, 2},	//143 QDBusConnection::QDBusConnection(const QDBusConnection&)
    {12, 352, 229, 1, 0, 17, 3},	//144 QDBusConnection::operator=(const QDBusConnection&)
    {12, 295, 0, 0, Smoke::mf_const, 236, 4},	//145 QDBusConnection::isConnected() const
    {12, 181, 0, 0, Smoke::mf_const, 121, 5},	//146 QDBusConnection::baseService() const
    {12, 304, 0, 0, Smoke::mf_const, 29, 6},	//147 QDBusConnection::lastError() const
    {12, 311, 0, 0, Smoke::mf_const, 121, 7},	//148 QDBusConnection::name() const
    {12, 233, 0, 0, Smoke::mf_const, 70, 8},	//149 QDBusConnection::connectionCapabilities() const
    {12, 561, 231, 1, Smoke::mf_const, 236, 9},	//150 QDBusConnection::send(const QDBusMessage&) const
    {12, 212, 233, 5, Smoke::mf_const, 236, 10},	//151 QDBusConnection::callWithCallback(const QDBusMessage&, QObject*, const char*, const char*, int) const
    {12, 212, 239, 4, Smoke::mf_const, 236, 11},	//152 QDBusConnection::callWithCallback(const QDBusMessage&, QObject*, const char*, int) const
    {12, 188, 244, 3, Smoke::mf_const, 34, 12},	//153 QDBusConnection::call(const QDBusMessage&, QDBus::CallMode, int) const
    {12, 164, 248, 2, Smoke::mf_const, 40, 13},	//154 QDBusConnection::asyncCall(const QDBusMessage&, int) const
    {12, 222, 251, 6, 0, 236, 14},	//155 QDBusConnection::connect(const QString&, const QString&, const QString&, const QString&, QObject*, const char*)
    {12, 222, 258, 7, 0, 236, 15},	//156 QDBusConnection::connect(const QString&, const QString&, const QString&, const QString&, const QString&, QObject*, const char*)
    {12, 222, 266, 8, 0, 236, 16},	//157 QDBusConnection::connect(const QString&, const QString&, const QString&, const QString&, const QStringList&, const QString&, QObject*, const char*)
    {12, 252, 251, 6, 0, 236, 17},	//158 QDBusConnection::disconnect(const QString&, const QString&, const QString&, const QString&, QObject*, const char*)
    {12, 252, 258, 7, 0, 236, 18},	//159 QDBusConnection::disconnect(const QString&, const QString&, const QString&, const QString&, const QString&, QObject*, const char*)
    {12, 252, 266, 8, 0, 236, 19},	//160 QDBusConnection::disconnect(const QString&, const QString&, const QString&, const QString&, const QStringList&, const QString&, QObject*, const char*)
    {12, 547, 275, 3, 0, 236, 20},	//161 QDBusConnection::registerObject(const QString&, QObject*, QFlags<QDBusConnection::RegisterOption>)
    {12, 620, 279, 2, 0, 0, 21},	//162 QDBusConnection::unregisterObject(const QString&, QDBusConnection::UnregisterMode)
    {12, 314, 68, 1, Smoke::mf_const, 112, 22},	//163 QDBusConnection::objectRegisteredAt(const QString&) const
    {12, 554, 282, 3, 0, 236, 23},	//164 QDBusConnection::registerVirtualObject(const QString&, QDBusVirtualObject*, QDBusConnection::VirtualObjectRegisterOption)
    {12, 550, 68, 1, 0, 236, 24},	//165 QDBusConnection::registerService(const QString&)
    {12, 623, 68, 1, 0, 236, 25},	//166 QDBusConnection::unregisterService(const QString&)
    {12, 284, 0, 0, Smoke::mf_const, 24, 26},	//167 QDBusConnection::interface() const
    {12, 288, 0, 0, Smoke::mf_const, 327, 27},	//168 QDBusConnection::internalPointer() const
    {12, 228, 286, 2, Smoke::mf_static, 16, 28},	//169 QDBusConnection::connectToBus(QDBusConnection::BusType, const QString&)
    {12, 228, 289, 2, Smoke::mf_static, 16, 29},	//170 QDBusConnection::connectToBus(const QString&, const QString&)
    {12, 230, 289, 2, Smoke::mf_static, 16, 30},	//171 QDBusConnection::connectToPeer(const QString&, const QString&)
    {12, 256, 68, 1, Smoke::mf_static, 0, 31},	//172 QDBusConnection::disconnectFromBus(const QString&)
    {12, 258, 68, 1, Smoke::mf_static, 0, 32},	//173 QDBusConnection::disconnectFromPeer(const QString&)
    {12, 305, 0, 0, Smoke::mf_static, 5, 33},	//174 QDBusConnection::localMachineId()
    {12, 580, 0, 0, Smoke::mf_static, 16, 34},	//175 QDBusConnection::sessionBus()
    {12, 605, 0, 0, Smoke::mf_static, 16, 35},	//176 QDBusConnection::systemBus()
    {12, 566, 0, 0, Smoke::mf_static, 16, 36},	//177 QDBusConnection::sender()
    {12, 212, 292, 4, Smoke::mf_const, 236, 37},	//178 QDBusConnection::callWithCallback(const QDBusMessage&, QObject*, const char*, const char*) const
    {12, 212, 297, 3, Smoke::mf_const, 236, 38},	//179 QDBusConnection::callWithCallback(const QDBusMessage&, QObject*, const char*) const
    {12, 188, 231, 1, Smoke::mf_const, 34, 39},	//180 QDBusConnection::call(const QDBusMessage&) const
    {12, 188, 301, 2, Smoke::mf_const, 34, 40},	//181 QDBusConnection::call(const QDBusMessage&, QDBus::CallMode) const
    {12, 164, 231, 1, Smoke::mf_const, 40, 41},	//182 QDBusConnection::asyncCall(const QDBusMessage&) const
    {12, 547, 304, 2, 0, 236, 42},	//183 QDBusConnection::registerObject(const QString&, QObject*)
    {12, 620, 68, 1, 0, 0, 43},	//184 QDBusConnection::unregisterObject(const QString&)
    {12, 554, 307, 2, 0, 236, 44},	//185 QDBusConnection::registerVirtualObject(const QString&, QDBusVirtualObject*)
    {12, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 45},	//186 QDBusConnection::staticMetaObject() const
    {12, 138, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 46},	//187 QDBusConnection::SessionBus (enum)
    {12, 143, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 47},	//188 QDBusConnection::SystemBus (enum)
    {12, 2, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 48},	//189 QDBusConnection::ActivationBus (enum)
    {12, 15, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 49},	//190 QDBusConnection::ExportAdaptors (enum)
    {12, 32, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 50},	//191 QDBusConnection::ExportScriptableSlots (enum)
    {12, 31, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 51},	//192 QDBusConnection::ExportScriptableSignals (enum)
    {12, 30, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 52},	//193 QDBusConnection::ExportScriptableProperties (enum)
    {12, 29, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 53},	//194 QDBusConnection::ExportScriptableInvokables (enum)
    {12, 28, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 54},	//195 QDBusConnection::ExportScriptableContents (enum)
    {12, 27, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 55},	//196 QDBusConnection::ExportNonScriptableSlots (enum)
    {12, 26, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 56},	//197 QDBusConnection::ExportNonScriptableSignals (enum)
    {12, 25, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 57},	//198 QDBusConnection::ExportNonScriptableProperties (enum)
    {12, 24, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 58},	//199 QDBusConnection::ExportNonScriptableInvokables (enum)
    {12, 23, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 59},	//200 QDBusConnection::ExportNonScriptableContents (enum)
    {12, 21, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 60},	//201 QDBusConnection::ExportAllSlots (enum)
    {12, 20, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 61},	//202 QDBusConnection::ExportAllSignals (enum)
    {12, 18, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 62},	//203 QDBusConnection::ExportAllProperties (enum)
    {12, 17, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 63},	//204 QDBusConnection::ExportAllInvokables (enum)
    {12, 16, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 64},	//205 QDBusConnection::ExportAllContents (enum)
    {12, 19, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 65},	//206 QDBusConnection::ExportAllSignal (enum)
    {12, 22, 0, 0, Smoke::mf_static|Smoke::mf_enum, 21, 66},	//207 QDBusConnection::ExportChildObjects (enum)
    {12, 151, 0, 0, Smoke::mf_static|Smoke::mf_enum, 22, 67},	//208 QDBusConnection::UnregisterNode (enum)
    {12, 152, 0, 0, Smoke::mf_static|Smoke::mf_enum, 22, 68},	//209 QDBusConnection::UnregisterTree (enum)
    {12, 140, 0, 0, Smoke::mf_static|Smoke::mf_enum, 23, 69},	//210 QDBusConnection::SingleNode (enum)
    {12, 142, 0, 0, Smoke::mf_static|Smoke::mf_enum, 23, 70},	//211 QDBusConnection::SubPath (enum)
    {12, 146, 0, 0, Smoke::mf_static|Smoke::mf_enum, 20, 71},	//212 QDBusConnection::UnixFileDescriptorPassing (enum)
    {12, 632, 0, 0, Smoke::mf_dtor, 0, 72 },	//213 QDBusConnection::~QDBusConnection()
    {13, 310, 0, 0, Smoke::mf_const, 270, 1},	//214 QDBusConnectionInterface::metaObject() const
    {13, 534, 1, 1, 0, 327, 2},	//215 QDBusConnectionInterface::qt_metacast(const char*)
    {13, 609, 3, 2, Smoke::mf_static, 121, 3},	//216 QDBusConnectionInterface::tr(const char*, const char*)
    {13, 613, 3, 2, Smoke::mf_static, 121, 4},	//217 QDBusConnectionInterface::trUtf8(const char*, const char*)
    {13, 609, 6, 3, Smoke::mf_static, 121, 5},	//218 QDBusConnectionInterface::tr(const char*, const char*, int)
    {13, 613, 6, 3, Smoke::mf_static, 121, 6},	//219 QDBusConnectionInterface::trUtf8(const char*, const char*, int)
    {13, 532, 10, 3, 0, 303, 7},	//220 QDBusConnectionInterface::qt_metacall(QMetaObject::Call, int, void**)
    {13, 557, 0, 0, Smoke::mf_const|Smoke::mf_property|Smoke::mf_slot, 46, 8},	//221 QDBusConnectionInterface::registeredServiceNames() const
    {13, 300, 68, 1, Smoke::mf_const|Smoke::mf_slot, 47, 9},	//222 QDBusConnectionInterface::isServiceRegistered(const QString&) const
    {13, 568, 68, 1, Smoke::mf_const|Smoke::mf_slot, 45, 10},	//223 QDBusConnectionInterface::serviceOwner(const QString&) const
    {13, 623, 68, 1, Smoke::mf_slot, 47, 11},	//224 QDBusConnectionInterface::unregisterService(const QString&)
    {13, 550, 310, 3, Smoke::mf_slot, 44, 12},	//225 QDBusConnectionInterface::registerService(const QString&, QDBusConnectionInterface::ServiceQueueOptions, QDBusConnectionInterface::ServiceReplacementOptions)
    {13, 572, 68, 1, Smoke::mf_const|Smoke::mf_slot, 48, 13},	//226 QDBusConnectionInterface::servicePid(const QString&) const
    {13, 576, 68, 1, Smoke::mf_const|Smoke::mf_slot, 48, 14},	//227 QDBusConnectionInterface::serviceUid(const QString&) const
    {13, 602, 68, 1, Smoke::mf_slot, 49, 15},	//228 QDBusConnectionInterface::startService(const QString&)
    {13, 574, 68, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 16},	//229 QDBusConnectionInterface::serviceRegistered(const QString&)
    {13, 578, 68, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 17},	//230 QDBusConnectionInterface::serviceUnregistered(const QString&)
    {13, 570, 314, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 18},	//231 QDBusConnectionInterface::serviceOwnerChanged(const QString&, const QString&, const QString&)
    {13, 218, 318, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 19},	//232 QDBusConnectionInterface::callWithCallbackFailed(const QDBusError&, const QDBusMessage&)
    {13, 66, 68, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 20},	//233 QDBusConnectionInterface::NameAcquired(const QString&)
    {13, 68, 68, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 21},	//234 QDBusConnectionInterface::NameLost(const QString&)
    {13, 70, 314, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 22},	//235 QDBusConnectionInterface::NameOwnerChanged(const QString&, const QString&, const QString&)
    {13, 226, 1, 1, Smoke::mf_protected, 0, 23},	//236 QDBusConnectionInterface::connectNotify(const char*)
    {13, 260, 1, 1, Smoke::mf_protected, 0, 24},	//237 QDBusConnectionInterface::disconnectNotify(const char*)
    {13, 609, 1, 1, Smoke::mf_static, 121, 25},	//238 QDBusConnectionInterface::tr(const char*)
    {13, 613, 1, 1, Smoke::mf_static, 121, 26},	//239 QDBusConnectionInterface::trUtf8(const char*)
    {13, 550, 68, 1, Smoke::mf_slot, 44, 27},	//240 QDBusConnectionInterface::registerService(const QString&)
    {13, 550, 321, 2, Smoke::mf_slot, 44, 28},	//241 QDBusConnectionInterface::registerService(const QString&, QDBusConnectionInterface::ServiceQueueOptions)
    {13, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 29},	//242 QDBusConnectionInterface::staticMetaObject() const
    {13, 13, 0, 0, Smoke::mf_static|Smoke::mf_enum, 26, 30},	//243 QDBusConnectionInterface::DontQueueService (enum)
    {13, 131, 0, 0, Smoke::mf_static|Smoke::mf_enum, 26, 31},	//244 QDBusConnectionInterface::QueueService (enum)
    {13, 132, 0, 0, Smoke::mf_static|Smoke::mf_enum, 26, 32},	//245 QDBusConnectionInterface::ReplaceExistingService (enum)
    {13, 12, 0, 0, Smoke::mf_static|Smoke::mf_enum, 27, 33},	//246 QDBusConnectionInterface::DontAllowReplacement (enum)
    {13, 4, 0, 0, Smoke::mf_static|Smoke::mf_enum, 27, 34},	//247 QDBusConnectionInterface::AllowReplacement (enum)
    {13, 134, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 35},	//248 QDBusConnectionInterface::ServiceNotRegistered (enum)
    {13, 136, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 36},	//249 QDBusConnectionInterface::ServiceRegistered (enum)
    {13, 135, 0, 0, Smoke::mf_static|Smoke::mf_enum, 25, 37},	//250 QDBusConnectionInterface::ServiceQueued (enum)
    {14, 89, 0, 0, Smoke::mf_ctor, 28, 1},	//251 QDBusContext::QDBusContext()
    {14, 220, 0, 0, Smoke::mf_const, 236, 2},	//252 QDBusContext::calledFromDBus() const
    {14, 232, 0, 0, Smoke::mf_const, 16, 3},	//253 QDBusContext::connection() const
    {14, 309, 0, 0, Smoke::mf_const, 249, 4},	//254 QDBusContext::message() const
    {14, 296, 0, 0, Smoke::mf_const, 236, 5},	//255 QDBusContext::isDelayedReply() const
    {14, 589, 16, 1, Smoke::mf_const, 0, 6},	//256 QDBusContext::setDelayedReply(bool) const
    {14, 563, 289, 2, Smoke::mf_const, 0, 7},	//257 QDBusContext::sendErrorReply(const QString&, const QString&) const
    {14, 563, 324, 2, Smoke::mf_const, 0, 8},	//258 QDBusContext::sendErrorReply(QDBusError::ErrorType, const QString&) const
    {14, 89, 327, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 28, 9},	//259 QDBusContext::QDBusContext(const QDBusContext&)
    {14, 563, 68, 1, Smoke::mf_const, 0, 10},	//260 QDBusContext::sendErrorReply(const QString&) const
    {14, 563, 329, 1, Smoke::mf_const, 0, 11},	//261 QDBusContext::sendErrorReply(QDBusError::ErrorType) const
    {14, 633, 0, 0, Smoke::mf_dtor, 0, 12 },	//262 QDBusContext::~QDBusContext()
    {15, 91, 331, 1, Smoke::mf_ctor, 31, 1},	//263 QDBusError::QDBusError(const DBusError*)
    {15, 91, 231, 1, Smoke::mf_ctor, 31, 2},	//264 QDBusError::QDBusError(const QDBusMessage&)
    {15, 91, 324, 2, Smoke::mf_ctor, 31, 3},	//265 QDBusError::QDBusError(QDBusError::ErrorType, const QString&)
    {15, 91, 333, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 31, 4},	//266 QDBusError::QDBusError(const QDBusError&)
    {15, 352, 333, 1, 0, 30, 5},	//267 QDBusError::operator=(const QDBusError&)
    {15, 617, 0, 0, Smoke::mf_const, 32, 6},	//268 QDBusError::type() const
    {15, 311, 0, 0, Smoke::mf_const, 121, 7},	//269 QDBusError::name() const
    {15, 309, 0, 0, Smoke::mf_const, 121, 8},	//270 QDBusError::message() const
    {15, 303, 0, 0, Smoke::mf_const, 236, 9},	//271 QDBusError::isValid() const
    {15, 269, 329, 1, Smoke::mf_static, 121, 10},	//272 QDBusError::errorString(QDBusError::ErrorType)
    {15, 91, 0, 0, Smoke::mf_ctor, 31, 11},	//273 QDBusError::QDBusError()
    {15, 73, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 12},	//274 QDBusError::NoError (enum)
    {15, 79, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 13},	//275 QDBusError::Other (enum)
    {15, 33, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 14},	//276 QDBusError::Failed (enum)
    {15, 74, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 15},	//277 QDBusError::NoMemory (enum)
    {15, 137, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 16},	//278 QDBusError::ServiceUnknown (enum)
    {15, 76, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 17},	//279 QDBusError::NoReply (enum)
    {15, 7, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 18},	//280 QDBusError::BadAddress (enum)
    {15, 78, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 19},	//281 QDBusError::NotSupported (enum)
    {15, 62, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 20},	//282 QDBusError::LimitsExceeded (enum)
    {15, 1, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 21},	//283 QDBusError::AccessDenied (enum)
    {15, 77, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 22},	//284 QDBusError::NoServer (enum)
    {15, 145, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 23},	//285 QDBusError::Timeout (enum)
    {15, 75, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 24},	//286 QDBusError::NoNetwork (enum)
    {15, 3, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 25},	//287 QDBusError::AddressInUse (enum)
    {15, 11, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 26},	//288 QDBusError::Disconnected (enum)
    {15, 35, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 27},	//289 QDBusError::InvalidArgs (enum)
    {15, 148, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 28},	//290 QDBusError::UnknownMethod (enum)
    {15, 144, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 29},	//291 QDBusError::TimedOut (enum)
    {15, 41, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 30},	//292 QDBusError::InvalidSignature (enum)
    {15, 147, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 31},	//293 QDBusError::UnknownInterface (enum)
    {15, 34, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 32},	//294 QDBusError::InternalError (enum)
    {15, 149, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 33},	//295 QDBusError::UnknownObject (enum)
    {15, 40, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 34},	//296 QDBusError::InvalidService (enum)
    {15, 39, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 35},	//297 QDBusError::InvalidObjectPath (enum)
    {15, 36, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 36},	//298 QDBusError::InvalidInterface (enum)
    {15, 37, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 37},	//299 QDBusError::InvalidMember (enum)
    {15, 42, 0, 0, Smoke::mf_static|Smoke::mf_enum, 32, 38},	//300 QDBusError::LastErrorType (enum)
    {15, 634, 0, 0, Smoke::mf_dtor, 0, 39 },	//301 QDBusError::~QDBusError()
    {16, 94, 335, 5, Smoke::mf_ctor, 33, 1},	//302 QDBusInterface::QDBusInterface(const QString&, const QString&, const QString&, const QDBusConnection&, QObject*)
    {16, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 2},	//303 QDBusInterface::metaObject() const
    {16, 534, 1, 1, Smoke::mf_virtual, 327, 3},	//304 QDBusInterface::qt_metacast(const char*)
    {16, 532, 10, 3, Smoke::mf_virtual, 303, 4},	//305 QDBusInterface::qt_metacall(QMetaObject::Call, int, void**)
    {16, 94, 289, 2, Smoke::mf_ctor, 33, 5},	//306 QDBusInterface::QDBusInterface(const QString&, const QString&)
    {16, 94, 314, 3, Smoke::mf_ctor, 33, 6},	//307 QDBusInterface::QDBusInterface(const QString&, const QString&, const QString&)
    {16, 94, 341, 4, Smoke::mf_ctor, 33, 7},	//308 QDBusInterface::QDBusInterface(const QString&, const QString&, const QString&, const QDBusConnection&)
    {16, 635, 0, 0, Smoke::mf_dtor, 0, 8 },	//309 QDBusInterface::~QDBusInterface()
    {17, 99, 0, 0, Smoke::mf_ctor, 36, 1},	//310 QDBusMessage::QDBusMessage()
    {17, 99, 231, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 36, 2},	//311 QDBusMessage::QDBusMessage(const QDBusMessage&)
    {17, 352, 231, 1, 0, 35, 3},	//312 QDBusMessage::operator=(const QDBusMessage&)
    {17, 245, 314, 3, Smoke::mf_static, 34, 4},	//313 QDBusMessage::createSignal(const QString&, const QString&, const QString&)
    {17, 240, 346, 4, Smoke::mf_static, 34, 5},	//314 QDBusMessage::createMethodCall(const QString&, const QString&, const QString&, const QString&)
    {17, 234, 289, 2, Smoke::mf_static, 34, 6},	//315 QDBusMessage::createError(const QString&, const QString&)
    {17, 234, 333, 1, Smoke::mf_static, 34, 7},	//316 QDBusMessage::createError(const QDBusError&)
    {17, 234, 324, 2, Smoke::mf_static, 34, 8},	//317 QDBusMessage::createError(QDBusError::ErrorType, const QString&)
    {17, 242, 351, 1, Smoke::mf_const, 34, 9},	//318 QDBusMessage::createReply(const QList<QVariant>&) const
    {17, 242, 195, 1, Smoke::mf_const, 34, 10},	//319 QDBusMessage::createReply(const QVariant&) const
    {17, 237, 353, 2, Smoke::mf_const, 34, 11},	//320 QDBusMessage::createErrorReply(const QString, const QString&) const
    {17, 237, 333, 1, Smoke::mf_const, 34, 12},	//321 QDBusMessage::createErrorReply(const QDBusError&) const
    {17, 237, 324, 2, Smoke::mf_const, 34, 13},	//322 QDBusMessage::createErrorReply(QDBusError::ErrorType, const QString&) const
    {17, 567, 0, 0, Smoke::mf_const, 121, 14},	//323 QDBusMessage::service() const
    {17, 379, 0, 0, Smoke::mf_const, 121, 15},	//324 QDBusMessage::path() const
    {17, 284, 0, 0, Smoke::mf_const, 121, 16},	//325 QDBusMessage::interface() const
    {17, 308, 0, 0, Smoke::mf_const, 121, 17},	//326 QDBusMessage::member() const
    {17, 268, 0, 0, Smoke::mf_const, 121, 18},	//327 QDBusMessage::errorName() const
    {17, 267, 0, 0, Smoke::mf_const, 121, 19},	//328 QDBusMessage::errorMessage() const
    {17, 617, 0, 0, Smoke::mf_const, 37, 20},	//329 QDBusMessage::type() const
    {17, 599, 0, 0, Smoke::mf_const, 121, 21},	//330 QDBusMessage::signature() const
    {17, 299, 0, 0, Smoke::mf_const, 236, 22},	//331 QDBusMessage::isReplyRequired() const
    {17, 589, 16, 1, Smoke::mf_const, 0, 23},	//332 QDBusMessage::setDelayedReply(bool) const
    {17, 296, 0, 0, Smoke::mf_const, 236, 24},	//333 QDBusMessage::isDelayedReply() const
    {17, 585, 16, 1, 0, 0, 25},	//334 QDBusMessage::setAutoStartService(bool)
    {17, 180, 0, 0, Smoke::mf_const, 236, 26},	//335 QDBusMessage::autoStartService() const
    {17, 581, 351, 1, 0, 0, 27},	//336 QDBusMessage::setArguments(const QList<QVariant>&)
    {17, 162, 0, 0, Smoke::mf_const, 107, 28},	//337 QDBusMessage::arguments() const
    {17, 341, 195, 1, 0, 35, 29},	//338 QDBusMessage::operator<<(const QVariant&)
    {17, 242, 0, 0, Smoke::mf_const, 34, 30},	//339 QDBusMessage::createReply() const
    {17, 38, 0, 0, Smoke::mf_static|Smoke::mf_enum, 37, 31},	//340 QDBusMessage::InvalidMessage (enum)
    {17, 65, 0, 0, Smoke::mf_static|Smoke::mf_enum, 37, 32},	//341 QDBusMessage::MethodCallMessage (enum)
    {17, 133, 0, 0, Smoke::mf_static|Smoke::mf_enum, 37, 33},	//342 QDBusMessage::ReplyMessage (enum)
    {17, 14, 0, 0, Smoke::mf_static|Smoke::mf_enum, 37, 34},	//343 QDBusMessage::ErrorMessage (enum)
    {17, 139, 0, 0, Smoke::mf_static|Smoke::mf_enum, 37, 35},	//344 QDBusMessage::SignalMessage (enum)
    {17, 636, 0, 0, Smoke::mf_dtor, 0, 36 },	//345 QDBusMessage::~QDBusMessage()
    {18, 545, 356, 3, Smoke::mf_static, 0, 1},	//346 QDBusMetaType::registerMarshallOperators(int, void(*)(QDBusArgument&,const void*), void(*)(const QDBusArgument&,void*))
    {18, 306, 360, 3, Smoke::mf_static, 236, 2},	//347 QDBusMetaType::marshall(QDBusArgument&, int, const void*)
    {18, 250, 364, 3, Smoke::mf_static, 236, 3},	//348 QDBusMetaType::demarshall(const QDBusArgument&, int, void*)
    {18, 600, 1, 1, Smoke::mf_static, 303, 4},	//349 QDBusMetaType::signatureToType(const char*)
    {18, 618, 18, 1, Smoke::mf_static, 297, 5},	//350 QDBusMetaType::typeToSignature(int)
    {18, 101, 0, 0, Smoke::mf_ctor, 38, 6},	//351 QDBusMetaType::QDBusMetaType()
    {18, 101, 368, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 38, 7},	//352 QDBusMetaType::QDBusMetaType(const QDBusMetaType&)
    {18, 637, 0, 0, Smoke::mf_dtor, 0, 8 },	//353 QDBusMetaType::~QDBusMetaType()
    {19, 103, 370, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 42, 1},	//354 QDBusPendingCall::QDBusPendingCall(const QDBusPendingCall&)
    {19, 352, 370, 1, 0, 41, 2},	//355 QDBusPendingCall::operator=(const QDBusPendingCall&)
    {19, 298, 0, 0, Smoke::mf_const, 236, 3},	//356 QDBusPendingCall::isFinished() const
    {19, 625, 0, 0, 0, 0, 4},	//357 QDBusPendingCall::waitForFinished()
    {19, 297, 0, 0, Smoke::mf_const, 236, 5},	//358 QDBusPendingCall::isError() const
    {19, 303, 0, 0, Smoke::mf_const, 236, 6},	//359 QDBusPendingCall::isValid() const
    {19, 266, 0, 0, Smoke::mf_const, 29, 7},	//360 QDBusPendingCall::error() const
    {19, 560, 0, 0, Smoke::mf_const, 34, 8},	//361 QDBusPendingCall::reply() const
    {19, 278, 333, 1, Smoke::mf_static, 40, 9},	//362 QDBusPendingCall::fromError(const QDBusError&)
    {19, 276, 231, 1, Smoke::mf_static, 40, 10},	//363 QDBusPendingCall::fromCompletedCall(const QDBusMessage&)
    {19, 638, 0, 0, Smoke::mf_dtor, 0, 11 },	//364 QDBusPendingCall::~QDBusPendingCall()
    {20, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 1},	//365 QDBusPendingCallWatcher::metaObject() const
    {20, 534, 1, 1, Smoke::mf_virtual, 327, 2},	//366 QDBusPendingCallWatcher::qt_metacast(const char*)
    {20, 609, 3, 2, Smoke::mf_static, 121, 3},	//367 QDBusPendingCallWatcher::tr(const char*, const char*)
    {20, 613, 3, 2, Smoke::mf_static, 121, 4},	//368 QDBusPendingCallWatcher::trUtf8(const char*, const char*)
    {20, 609, 6, 3, Smoke::mf_static, 121, 5},	//369 QDBusPendingCallWatcher::tr(const char*, const char*, int)
    {20, 613, 6, 3, Smoke::mf_static, 121, 6},	//370 QDBusPendingCallWatcher::trUtf8(const char*, const char*, int)
    {20, 532, 10, 3, Smoke::mf_virtual, 303, 7},	//371 QDBusPendingCallWatcher::qt_metacall(QMetaObject::Call, int, void**)
    {20, 105, 372, 2, Smoke::mf_ctor, 43, 8},	//372 QDBusPendingCallWatcher::QDBusPendingCallWatcher(const QDBusPendingCall&, QObject*)
    {20, 625, 0, 0, 0, 0, 9},	//373 QDBusPendingCallWatcher::waitForFinished()
    {20, 274, 375, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 10},	//374 QDBusPendingCallWatcher::finished(QDBusPendingCallWatcher*)
    {20, 609, 1, 1, Smoke::mf_static, 121, 11},	//375 QDBusPendingCallWatcher::tr(const char*)
    {20, 613, 1, 1, Smoke::mf_static, 121, 12},	//376 QDBusPendingCallWatcher::trUtf8(const char*)
    {20, 105, 370, 1, Smoke::mf_ctor, 43, 13},	//377 QDBusPendingCallWatcher::QDBusPendingCallWatcher(const QDBusPendingCall&)
    {20, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 14},	//378 QDBusPendingCallWatcher::staticMetaObject() const
    {20, 639, 0, 0, Smoke::mf_dtor, 0, 15 },	//379 QDBusPendingCallWatcher::~QDBusPendingCallWatcher()
    {21, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 1},	//380 QDBusServer::metaObject() const
    {21, 534, 1, 1, Smoke::mf_virtual, 327, 2},	//381 QDBusServer::qt_metacast(const char*)
    {21, 609, 3, 2, Smoke::mf_static, 121, 3},	//382 QDBusServer::tr(const char*, const char*)
    {21, 613, 3, 2, Smoke::mf_static, 121, 4},	//383 QDBusServer::trUtf8(const char*, const char*)
    {21, 609, 6, 3, Smoke::mf_static, 121, 5},	//384 QDBusServer::tr(const char*, const char*, int)
    {21, 613, 6, 3, Smoke::mf_static, 121, 6},	//385 QDBusServer::trUtf8(const char*, const char*, int)
    {21, 532, 10, 3, Smoke::mf_virtual, 303, 7},	//386 QDBusServer::qt_metacall(QMetaObject::Call, int, void**)
    {21, 108, 304, 2, Smoke::mf_ctor, 50, 8},	//387 QDBusServer::QDBusServer(const QString&, QObject*)
    {21, 295, 0, 0, Smoke::mf_const, 236, 9},	//388 QDBusServer::isConnected() const
    {21, 304, 0, 0, Smoke::mf_const, 29, 10},	//389 QDBusServer::lastError() const
    {21, 159, 0, 0, Smoke::mf_const, 121, 11},	//390 QDBusServer::address() const
    {21, 312, 229, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 12},	//391 QDBusServer::newConnection(const QDBusConnection&)
    {21, 609, 1, 1, Smoke::mf_static, 121, 13},	//392 QDBusServer::tr(const char*)
    {21, 613, 1, 1, Smoke::mf_static, 121, 14},	//393 QDBusServer::trUtf8(const char*)
    {21, 108, 0, 0, Smoke::mf_ctor, 50, 15},	//394 QDBusServer::QDBusServer()
    {21, 108, 68, 1, Smoke::mf_ctor, 50, 16},	//395 QDBusServer::QDBusServer(const QString&)
    {21, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 17},	//396 QDBusServer::staticMetaObject() const
    {21, 640, 0, 0, Smoke::mf_dtor, 0, 18 },	//397 QDBusServer::~QDBusServer()
    {22, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 1},	//398 QDBusServiceWatcher::metaObject() const
    {22, 534, 1, 1, Smoke::mf_virtual, 327, 2},	//399 QDBusServiceWatcher::qt_metacast(const char*)
    {22, 609, 3, 2, Smoke::mf_static, 121, 3},	//400 QDBusServiceWatcher::tr(const char*, const char*)
    {22, 613, 3, 2, Smoke::mf_static, 121, 4},	//401 QDBusServiceWatcher::trUtf8(const char*, const char*)
    {22, 609, 6, 3, Smoke::mf_static, 121, 5},	//402 QDBusServiceWatcher::tr(const char*, const char*, int)
    {22, 613, 6, 3, Smoke::mf_static, 121, 6},	//403 QDBusServiceWatcher::trUtf8(const char*, const char*, int)
    {22, 532, 10, 3, Smoke::mf_virtual, 303, 7},	//404 QDBusServiceWatcher::qt_metacall(QMetaObject::Call, int, void**)
    {22, 111, 14, 1, Smoke::mf_ctor, 51, 8},	//405 QDBusServiceWatcher::QDBusServiceWatcher(QObject*)
    {22, 111, 377, 4, Smoke::mf_ctor, 51, 9},	//406 QDBusServiceWatcher::QDBusServiceWatcher(const QString&, const QDBusConnection&, QFlags<QDBusServiceWatcher::WatchModeFlag>, QObject*)
    {22, 627, 0, 0, Smoke::mf_const|Smoke::mf_property, 125, 10},	//407 QDBusServiceWatcher::watchedServices() const
    {22, 597, 188, 1, Smoke::mf_property, 0, 11},	//408 QDBusServiceWatcher::setWatchedServices(const QStringList&)
    {22, 157, 68, 1, 0, 0, 12},	//409 QDBusServiceWatcher::addWatchedService(const QString&)
    {22, 558, 68, 1, 0, 236, 13},	//410 QDBusServiceWatcher::removeWatchedService(const QString&)
    {22, 626, 0, 0, Smoke::mf_const, 73, 14},	//411 QDBusServiceWatcher::watchMode() const
    {22, 595, 382, 1, 0, 0, 15},	//412 QDBusServiceWatcher::setWatchMode(QFlags<QDBusServiceWatcher::WatchModeFlag>)
    {22, 232, 0, 0, Smoke::mf_const, 16, 16},	//413 QDBusServiceWatcher::connection() const
    {22, 587, 229, 1, 0, 0, 17},	//414 QDBusServiceWatcher::setConnection(const QDBusConnection&)
    {22, 574, 68, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 18},	//415 QDBusServiceWatcher::serviceRegistered(const QString&)
    {22, 578, 68, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 19},	//416 QDBusServiceWatcher::serviceUnregistered(const QString&)
    {22, 570, 314, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 20},	//417 QDBusServiceWatcher::serviceOwnerChanged(const QString&, const QString&, const QString&)
    {22, 609, 1, 1, Smoke::mf_static, 121, 21},	//418 QDBusServiceWatcher::tr(const char*)
    {22, 613, 1, 1, Smoke::mf_static, 121, 22},	//419 QDBusServiceWatcher::trUtf8(const char*)
    {22, 111, 0, 0, Smoke::mf_ctor, 51, 23},	//420 QDBusServiceWatcher::QDBusServiceWatcher()
    {22, 111, 384, 2, Smoke::mf_ctor, 51, 24},	//421 QDBusServiceWatcher::QDBusServiceWatcher(const QString&, const QDBusConnection&)
    {22, 111, 387, 3, Smoke::mf_ctor, 51, 25},	//422 QDBusServiceWatcher::QDBusServiceWatcher(const QString&, const QDBusConnection&, QFlags<QDBusServiceWatcher::WatchModeFlag>)
    {22, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 26},	//423 QDBusServiceWatcher::staticMetaObject() const
    {22, 155, 0, 0, Smoke::mf_static|Smoke::mf_enum, 52, 27},	//424 QDBusServiceWatcher::WatchForRegistration (enum)
    {22, 156, 0, 0, Smoke::mf_static|Smoke::mf_enum, 52, 28},	//425 QDBusServiceWatcher::WatchForUnregistration (enum)
    {22, 154, 0, 0, Smoke::mf_static|Smoke::mf_enum, 52, 29},	//426 QDBusServiceWatcher::WatchForOwnerChange (enum)
    {22, 641, 0, 0, Smoke::mf_dtor, 0, 30 },	//427 QDBusServiceWatcher::~QDBusServiceWatcher()
    {23, 116, 0, 0, Smoke::mf_ctor, 55, 1},	//428 QDBusUnixFileDescriptor::QDBusUnixFileDescriptor()
    {23, 116, 18, 1, Smoke::mf_ctor, 55, 2},	//429 QDBusUnixFileDescriptor::QDBusUnixFileDescriptor(int)
    {23, 116, 186, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 55, 3},	//430 QDBusUnixFileDescriptor::QDBusUnixFileDescriptor(const QDBusUnixFileDescriptor&)
    {23, 352, 186, 1, 0, 54, 4},	//431 QDBusUnixFileDescriptor::operator=(const QDBusUnixFileDescriptor&)
    {23, 303, 0, 0, Smoke::mf_const, 236, 5},	//432 QDBusUnixFileDescriptor::isValid() const
    {23, 273, 0, 0, Smoke::mf_const, 303, 6},	//433 QDBusUnixFileDescriptor::fileDescriptor() const
    {23, 591, 18, 1, 0, 0, 7},	//434 QDBusUnixFileDescriptor::setFileDescriptor(int)
    {23, 280, 18, 1, 0, 0, 8},	//435 QDBusUnixFileDescriptor::giveFileDescriptor(int)
    {23, 606, 0, 0, 0, 303, 9},	//436 QDBusUnixFileDescriptor::takeFileDescriptor()
    {23, 302, 0, 0, Smoke::mf_static, 236, 10},	//437 QDBusUnixFileDescriptor::isSupported()
    {23, 642, 0, 0, Smoke::mf_dtor, 0, 11 },	//438 QDBusUnixFileDescriptor::~QDBusUnixFileDescriptor()
    {25, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 1},	//439 QDBusVirtualObject::metaObject() const
    {25, 534, 1, 1, Smoke::mf_virtual, 327, 2},	//440 QDBusVirtualObject::qt_metacast(const char*)
    {25, 609, 3, 2, Smoke::mf_static, 121, 3},	//441 QDBusVirtualObject::tr(const char*, const char*)
    {25, 613, 3, 2, Smoke::mf_static, 121, 4},	//442 QDBusVirtualObject::trUtf8(const char*, const char*)
    {25, 609, 6, 3, Smoke::mf_static, 121, 5},	//443 QDBusVirtualObject::tr(const char*, const char*, int)
    {25, 613, 6, 3, Smoke::mf_static, 121, 6},	//444 QDBusVirtualObject::trUtf8(const char*, const char*, int)
    {25, 532, 10, 3, Smoke::mf_virtual, 303, 7},	//445 QDBusVirtualObject::qt_metacall(QMetaObject::Call, int, void**)
    {25, 119, 14, 1, Smoke::mf_ctor, 57, 8},	//446 QDBusVirtualObject::QDBusVirtualObject(QObject*)
    {25, 293, 68, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 121, 9},	//447 QDBusVirtualObject::introspect(const QString&) const [pure virtual]
    {25, 282, 391, 2, Smoke::mf_virtual|Smoke::mf_purevirtual, 236, 10},	//448 QDBusVirtualObject::handleMessage(const QDBusMessage&, const QDBusConnection&) [pure virtual]
    {25, 609, 1, 1, Smoke::mf_static, 121, 11},	//449 QDBusVirtualObject::tr(const char*)
    {25, 613, 1, 1, Smoke::mf_static, 121, 12},	//450 QDBusVirtualObject::trUtf8(const char*)
    {25, 119, 0, 0, Smoke::mf_ctor, 57, 13},	//451 QDBusVirtualObject::QDBusVirtualObject()
    {25, 604, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 269, 14},	//452 QDBusVirtualObject::staticMetaObject() const
    {25, 643, 0, 0, Smoke::mf_dtor, 0, 15 },	//453 QDBusVirtualObject::~QDBusVirtualObject()
    {33, 464, 178, 1, Smoke::mf_static, 303, 1},	//454 QGlobalSpace::qRound(double)
    {33, 376, 394, 2, Smoke::mf_static, 78, 2},	//455 QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    {33, 341, 397, 2, Smoke::mf_static, 13, 3},	//456 QGlobalSpace::operator<<(QDBusArgument&, const QPointF&)
    {33, 380, 178, 1, Smoke::mf_static, 300, 4},	//457 QGlobalSpace::qAcos(double)
    {33, 341, 400, 2, Smoke::mf_static, 13, 5},	//458 QGlobalSpace::operator<<(QDBusArgument&, const QLineF&)
    {33, 367, 403, 2, Smoke::mf_static, 58, 6},	//459 QGlobalSpace::operator>>(QDataStream&, QChar&)
    {33, 376, 406, 2, Smoke::mf_static, 76, 7},	//460 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    {33, 341, 409, 2, Smoke::mf_static, 13, 8},	//461 QGlobalSpace::operator<<(QDBusArgument&, const QDateTime&)
    {33, 367, 412, 2, Smoke::mf_static, 58, 9},	//462 QGlobalSpace::operator>>(QDataStream&, QLocale&)
    {33, 384, 0, 0, Smoke::mf_static, 121, 10},	//463 QGlobalSpace::qAppName()
    {33, 341, 415, 2, Smoke::mf_static, 13, 11},	//464 QGlobalSpace::operator<<(QDBusArgument&, const QRectF&)
    {33, 376, 418, 2, Smoke::mf_static, 103, 12},	//465 QGlobalSpace::operator|(Qt::WindowType, int)
    {33, 513, 421, 3, Smoke::mf_static, 239, 13},	//466 QGlobalSpace::qstrncpy(char*, const char*, unsigned int)
    {33, 427, 172, 1, Smoke::mf_static, 315, 14},	//467 QGlobalSpace::qHash(unsigned int)
    {33, 427, 425, 1, Smoke::mf_static, 315, 15},	//468 QGlobalSpace::qHash(char)
    {33, 323, 427, 2, Smoke::mf_static, 284, 16},	//469 QGlobalSpace::operator*(const QSizeF&, double)
    {33, 341, 430, 2, Smoke::mf_static, 61, 17},	//470 QGlobalSpace::operator<<(QDebug, const QLine&)
    {33, 491, 1, 1, Smoke::mf_static, 5, 18},	//471 QGlobalSpace::qgetenv(const char*)
    {33, 336, 433, 2, Smoke::mf_static, 236, 19},	//472 QGlobalSpace::operator<(const QByteArray&, const char*)
    {33, 367, 436, 2, Smoke::mf_static, 58, 20},	//473 QGlobalSpace::operator>>(QDataStream&, QRect&)
    {33, 376, 439, 2, Smoke::mf_static, 73, 21},	//474 QGlobalSpace::operator|(QDBusServiceWatcher::WatchModeFlag, QDBusServiceWatcher::WatchModeFlag)
    {33, 376, 442, 2, Smoke::mf_static, 92, 22},	//475 QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    {33, 354, 445, 2, Smoke::mf_static, 236, 23},	//476 QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    {33, 341, 448, 2, Smoke::mf_static, 13, 24},	//477 QGlobalSpace::operator<<(QDBusArgument&, const QMap<QString,QVariant>&)
    {33, 341, 451, 2, Smoke::mf_static, 61, 25},	//478 QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    {33, 354, 454, 2, Smoke::mf_static, 236, 26},	//479 QGlobalSpace::operator==(const QSize&, const QSize&)
    {33, 336, 457, 2, Smoke::mf_static, 236, 27},	//480 QGlobalSpace::operator<(const QDBusSignature&, const QDBusSignature&)
    {33, 413, 178, 1, Smoke::mf_static, 300, 28},	//481 QGlobalSpace::qFastSin(double)
    {33, 326, 460, 2, Smoke::mf_static, 286, 29},	//482 QGlobalSpace::operator+(QChar, const QString&)
    {33, 376, 463, 2, Smoke::mf_static, 72, 30},	//483 QGlobalSpace::operator|(QDBusConnection::VirtualObjectRegisterOption, QFlags<QDBusConnection::VirtualObjectRegisterOption>)
    {33, 511, 466, 3, Smoke::mf_static, 303, 31},	//484 QGlobalSpace::qstrncmp(const char*, const char*, unsigned int)
    {33, 348, 470, 2, Smoke::mf_static, 236, 32},	//485 QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    {33, 543, 473, 4, Smoke::mf_static, 303, 33},	//486 QGlobalSpace::qvsnprintf(char*, size_t, const char*, va_list)
    {33, 316, 478, 2, Smoke::mf_static, 236, 34},	//487 QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    {33, 316, 481, 2, Smoke::mf_static, 236, 35},	//488 QGlobalSpace::operator!=(const QString&, const QStringRef&)
    {33, 367, 484, 2, Smoke::mf_static, 245, 36},	//489 QGlobalSpace::operator>>(const QDBusArgument&, QTime&)
    {33, 326, 487, 2, Smoke::mf_static, 286, 37},	//490 QGlobalSpace::operator+(const QString&, QChar)
    {33, 326, 454, 2, Smoke::mf_static, 282, 38},	//491 QGlobalSpace::operator+(const QSize&, const QSize&)
    {33, 517, 490, 2, Smoke::mf_static, 315, 39},	//492 QGlobalSpace::qstrnlen(const char*, unsigned int)
    {33, 354, 470, 2, Smoke::mf_static, 236, 40},	//493 QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    {33, 367, 493, 2, Smoke::mf_static, 58, 41},	//494 QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    {33, 341, 496, 2, Smoke::mf_static, 61, 42},	//495 QGlobalSpace::operator<<(QDebug, const QDate&)
    {33, 316, 499, 2, Smoke::mf_static, 236, 43},	//496 QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    {33, 341, 502, 2, Smoke::mf_static, 13, 44},	//497 QGlobalSpace::operator<<(QDBusArgument&, const QSize&)
    {33, 376, 505, 2, Smoke::mf_static, 98, 45},	//498 QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    {33, 341, 508, 2, Smoke::mf_static, 61, 46},	//499 QGlobalSpace::operator<<(QDebug, const QLineF&)
    {33, 316, 511, 2, Smoke::mf_static, 236, 47},	//500 QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    {33, 427, 166, 1, Smoke::mf_static, 315, 48},	//501 QGlobalSpace::qHash(unsigned char)
    {33, 539, 514, 5, Smoke::mf_static, 0, 49},	//502 QGlobalSpace::qt_qFindChildren_helper(const QObject*, const QString&, const QRegExp*, const QMetaObject&, QList<void*>*)
    {33, 354, 520, 2, Smoke::mf_static, 236, 50},	//503 QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    {33, 528, 18, 1, Smoke::mf_static, 121, 51},	//504 QGlobalSpace::qt_error_string(int)
    {33, 528, 0, 0, Smoke::mf_static, 121, 52},	//505 QGlobalSpace::qt_error_string()
    {33, 367, 523, 2, Smoke::mf_static, 58, 53},	//506 QGlobalSpace::operator>>(QDataStream&, QDate&)
    {33, 316, 457, 2, Smoke::mf_static, 236, 54},	//507 QGlobalSpace::operator!=(const QDBusSignature&, const QDBusSignature&)
    {33, 441, 526, 1, Smoke::mf_static, 236, 55},	//508 QGlobalSpace::qIsNull(float)
    {33, 376, 528, 2, Smoke::mf_static, 103, 56},	//509 QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    {33, 455, 0, 0, Smoke::mf_static, 300, 57},	//510 QGlobalSpace::qQNaN()
    {33, 316, 531, 2, Smoke::mf_static, 236, 58},	//511 QGlobalSpace::operator!=(QChar, QChar)
    {33, 471, 534, 1, Smoke::mf_static, 132, 59},	//512 QGlobalSpace::qSetPadChar(QChar)
    {33, 427, 184, 1, Smoke::mf_static, 315, 60},	//513 QGlobalSpace::qHash(const QDBusSignature&)
    {33, 367, 536, 2, Smoke::mf_static, 58, 61},	//514 QGlobalSpace::operator>>(QDataStream&, QUrl&)
    {33, 331, 478, 2, Smoke::mf_static, 276, 62},	//515 QGlobalSpace::operator-(const QPointF&, const QPointF&)
    {33, 341, 539, 2, Smoke::mf_static, 61, 63},	//516 QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    {33, 376, 542, 2, Smoke::mf_static, 80, 64},	//517 QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    {33, 519, 545, 2, Smoke::mf_static, 121, 65},	//518 QGlobalSpace::qtTrId(const char*, int)
    {33, 519, 1, 1, Smoke::mf_static, 121, 66},	//519 QGlobalSpace::qtTrId(const char*)
    {33, 389, 548, 2, Smoke::mf_static, 300, 67},	//520 QGlobalSpace::qAtan2(double, double)
    {33, 341, 551, 2, Smoke::mf_static, 58, 68},	//521 QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    {33, 427, 168, 1, Smoke::mf_static, 315, 69},	//522 QGlobalSpace::qHash(short)
    {33, 341, 554, 2, Smoke::mf_static, 58, 70},	//523 QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    {33, 376, 557, 2, Smoke::mf_static, 97, 71},	//524 QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    {33, 435, 178, 1, Smoke::mf_static, 236, 72},	//525 QGlobalSpace::qIsFinite(double)
    {33, 376, 560, 2, Smoke::mf_static, 92, 73},	//526 QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    {33, 498, 433, 2, Smoke::mf_static, 303, 74},	//527 QGlobalSpace::qstrcmp(const QByteArray&, const char*)
    {33, 505, 1, 1, Smoke::mf_static, 239, 75},	//528 QGlobalSpace::qstrdup(const char*)
    {33, 427, 563, 1, Smoke::mf_static, 315, 76},	//529 QGlobalSpace::qHash(long)
    {33, 376, 565, 2, Smoke::mf_static, 91, 77},	//530 QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    {33, 498, 3, 2, Smoke::mf_static, 303, 78},	//531 QGlobalSpace::qstrcmp(const char*, const char*)
    {33, 341, 568, 2, Smoke::mf_static, 58, 79},	//532 QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    {33, 316, 571, 2, Smoke::mf_static, 236, 80},	//533 QGlobalSpace::operator!=(QString::Null, QString::Null)
    {33, 326, 574, 2, Smoke::mf_static, 242, 81},	//534 QGlobalSpace::operator+(const char*, const QByteArray&)
    {33, 427, 577, 1, Smoke::mf_static, 315, 82},	//535 QGlobalSpace::qHash(const QBitArray&)
    {33, 376, 579, 2, Smoke::mf_static, 76, 83},	//536 QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    {33, 503, 582, 2, Smoke::mf_static, 239, 84},	//537 QGlobalSpace::qstrcpy(char*, const char*)
    {33, 376, 585, 2, Smoke::mf_static, 2, 85},	//538 QGlobalSpace::operator|(const QBitArray&, const QBitArray&)
    {33, 316, 588, 2, Smoke::mf_static, 236, 86},	//539 QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    {33, 336, 574, 2, Smoke::mf_static, 236, 87},	//540 QGlobalSpace::operator<(const char*, const QByteArray&)
    {33, 387, 178, 1, Smoke::mf_static, 300, 88},	//541 QGlobalSpace::qAtan(double)
    {33, 498, 574, 2, Smoke::mf_static, 303, 89},	//542 QGlobalSpace::qstrcmp(const char*, const QByteArray&)
    {33, 363, 531, 2, Smoke::mf_static, 236, 90},	//543 QGlobalSpace::operator>=(QChar, QChar)
    {33, 376, 591, 2, Smoke::mf_static, 93, 91},	//544 QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    {33, 348, 531, 2, Smoke::mf_static, 236, 92},	//545 QGlobalSpace::operator<=(QChar, QChar)
    {33, 323, 594, 2, Smoke::mf_static, 276, 93},	//546 QGlobalSpace::operator*(const QPointF&, double)
    {33, 376, 597, 2, Smoke::mf_static, 72, 94},	//547 QGlobalSpace::operator|(QDBusConnection::VirtualObjectRegisterOption, QDBusConnection::VirtualObjectRegisterOption)
    {33, 341, 600, 2, Smoke::mf_static, 61, 95},	//548 QGlobalSpace::operator<<(QDebug, const QSizeF&)
    {33, 354, 603, 2, Smoke::mf_static, 236, 96},	//549 QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    {33, 376, 606, 2, Smoke::mf_static, 69, 97},	//550 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    {33, 526, 545, 2, Smoke::mf_static, 0, 98},	//551 QGlobalSpace::qt_check_pointer(const char*, int)
    {33, 354, 571, 2, Smoke::mf_static, 236, 99},	//552 QGlobalSpace::operator==(QString::Null, QString::Null)
    {33, 316, 609, 2, Smoke::mf_static, 236, 100},	//553 QGlobalSpace::operator!=(const QRect&, const QRect&)
    {33, 367, 612, 2, Smoke::mf_static, 58, 101},	//554 QGlobalSpace::operator>>(QDataStream&, QUuid&)
    {33, 348, 615, 2, Smoke::mf_static, 236, 102},	//555 QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    {33, 484, 618, 2, Smoke::mf_static, 5, 103},	//556 QGlobalSpace::qUncompress(const unsigned char*, int)
    {33, 396, 621, 2, Smoke::mf_static, 5, 104},	//557 QGlobalSpace::qCompress(const QByteArray&, int)
    {33, 396, 190, 1, Smoke::mf_static, 5, 105},	//558 QGlobalSpace::qCompress(const QByteArray&)
    {33, 341, 624, 2, Smoke::mf_static, 58, 106},	//559 QGlobalSpace::operator<<(QDataStream&, const QString&)
    {33, 367, 627, 2, Smoke::mf_static, 129, 107},	//560 QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    {33, 376, 630, 2, Smoke::mf_static, 103, 108},	//561 QGlobalSpace::operator|(Qt::DropAction, int)
    {33, 458, 633, 4, Smoke::mf_static, 327, 109},	//562 QGlobalSpace::qReallocAligned(void*, size_t, size_t, size_t)
    {33, 376, 638, 2, Smoke::mf_static, 103, 110},	//563 QGlobalSpace::operator|(Qt::MatchFlag, int)
    {33, 478, 178, 1, Smoke::mf_static, 300, 111},	//564 QGlobalSpace::qSqrt(double)
    {33, 341, 641, 2, Smoke::mf_static, 58, 112},	//565 QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    {33, 341, 627, 2, Smoke::mf_static, 129, 113},	//566 QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    {33, 367, 644, 2, Smoke::mf_static, 245, 114},	//567 QGlobalSpace::operator>>(const QDBusArgument&, QDateTime&)
    {33, 341, 647, 2, Smoke::mf_static, 61, 115},	//568 QGlobalSpace::operator<<(QDebug, const QRect&)
    {33, 359, 470, 2, Smoke::mf_static, 236, 116},	//569 QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    {33, 363, 615, 2, Smoke::mf_static, 236, 117},	//570 QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    {33, 433, 526, 1, Smoke::mf_static, 303, 118},	//571 QGlobalSpace::qIntCast(float)
    {33, 376, 650, 2, Smoke::mf_static, 83, 119},	//572 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    {33, 367, 653, 2, Smoke::mf_static, 245, 120},	//573 QGlobalSpace::operator>>(const QDBusArgument&, QLine&)
    {33, 354, 478, 2, Smoke::mf_static, 236, 121},	//574 QGlobalSpace::operator==(const QPointF&, const QPointF&)
    {33, 359, 574, 2, Smoke::mf_static, 236, 122},	//575 QGlobalSpace::operator>(const char*, const QByteArray&)
    {33, 409, 178, 1, Smoke::mf_static, 300, 123},	//576 QGlobalSpace::qFabs(double)
    {33, 427, 170, 1, Smoke::mf_static, 315, 124},	//577 QGlobalSpace::qHash(unsigned short)
    {33, 354, 574, 2, Smoke::mf_static, 236, 125},	//578 QGlobalSpace::operator==(const char*, const QByteArray&)
    {33, 376, 656, 2, Smoke::mf_static, 97, 126},	//579 QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    {33, 376, 659, 2, Smoke::mf_static, 82, 127},	//580 QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    {33, 341, 662, 2, Smoke::mf_static, 61, 128},	//581 QGlobalSpace::operator<<(QDebug, const QDir&)
    {33, 376, 665, 2, Smoke::mf_static, 95, 129},	//582 QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    {33, 316, 470, 2, Smoke::mf_static, 236, 130},	//583 QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    {33, 456, 668, 2, Smoke::mf_static, 327, 131},	//584 QGlobalSpace::qRealloc(void*, size_t)
    {33, 376, 671, 2, Smoke::mf_static, 88, 132},	//585 QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    {33, 376, 674, 2, Smoke::mf_static, 71, 133},	//586 QGlobalSpace::operator|(QDBusConnection::RegisterOption, QDBusConnection::RegisterOption)
    {33, 376, 677, 2, Smoke::mf_static, 103, 134},	//587 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    {33, 354, 680, 2, Smoke::mf_static, 236, 135},	//588 QGlobalSpace::operator==(const QString&, QString::Null)
    {33, 376, 683, 2, Smoke::mf_static, 89, 136},	//589 QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    {33, 336, 686, 2, Smoke::mf_static, 236, 137},	//590 QGlobalSpace::operator<(const QDBusObjectPath&, const QDBusObjectPath&)
    {33, 488, 0, 0, Smoke::mf_static, 61, 138},	//591 QGlobalSpace::qWarning()
    {33, 376, 689, 2, Smoke::mf_static, 103, 139},	//592 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    {33, 423, 548, 2, Smoke::mf_static, 236, 140},	//593 QGlobalSpace::qFuzzyCompare(double, double)
    {33, 376, 692, 2, Smoke::mf_static, 79, 141},	//594 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    {33, 376, 695, 2, Smoke::mf_static, 81, 142},	//595 QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    {33, 367, 698, 2, Smoke::mf_static, 58, 143},	//596 QGlobalSpace::operator>>(QDataStream&, QLineF&)
    {33, 341, 701, 2, Smoke::mf_static, 58, 144},	//597 QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    {33, 316, 704, 2, Smoke::mf_static, 236, 145},	//598 QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    {33, 323, 707, 2, Smoke::mf_static, 282, 146},	//599 QGlobalSpace::operator*(double, const QSize&)
    {33, 376, 710, 2, Smoke::mf_static, 87, 147},	//600 QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    {33, 406, 0, 0, Smoke::mf_static, 61, 148},	//601 QGlobalSpace::qDebug()
    {33, 367, 713, 2, Smoke::mf_static, 245, 149},	//602 QGlobalSpace::operator>>(const QDBusArgument&, QRect&)
    {33, 427, 174, 1, Smoke::mf_static, 315, 150},	//603 QGlobalSpace::qHash(long long)
    {33, 376, 716, 2, Smoke::mf_static, 94, 151},	//604 QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    {33, 323, 719, 2, Smoke::mf_static, 274, 152},	//605 QGlobalSpace::operator*(const QPoint&, float)
    {33, 331, 722, 1, Smoke::mf_static, 276, 153},	//606 QGlobalSpace::operator-(const QPointF&)
    {33, 376, 724, 2, Smoke::mf_static, 103, 154},	//607 QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    {33, 437, 526, 1, Smoke::mf_static, 236, 155},	//608 QGlobalSpace::qIsInf(float)
    {33, 376, 727, 2, Smoke::mf_static, 103, 156},	//609 QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    {33, 367, 730, 2, Smoke::mf_static, 245, 157},	//610 QGlobalSpace::operator>>(const QDBusArgument&, QRectF&)
    {33, 348, 574, 2, Smoke::mf_static, 236, 158},	//611 QGlobalSpace::operator<=(const char*, const QByteArray&)
    {33, 341, 733, 2, Smoke::mf_static, 61, 159},	//612 QGlobalSpace::operator<<(QDebug, const QSize&)
    {33, 316, 615, 2, Smoke::mf_static, 236, 160},	//613 QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    {33, 359, 531, 2, Smoke::mf_static, 236, 161},	//614 QGlobalSpace::operator>(QChar, QChar)
    {33, 334, 427, 2, Smoke::mf_static, 284, 162},	//615 QGlobalSpace::operator/(const QSizeF&, double)
    {33, 376, 736, 2, Smoke::mf_static, 103, 163},	//616 QGlobalSpace::operator|(QDBusConnection::VirtualObjectRegisterOption, int)
    {33, 376, 739, 2, Smoke::mf_static, 103, 164},	//617 QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    {33, 341, 742, 2, Smoke::mf_static, 61, 165},	//618 QGlobalSpace::operator<<(QDebug, const QPoint&)
    {33, 498, 615, 2, Smoke::mf_static, 303, 166},	//619 QGlobalSpace::qstrcmp(const QByteArray&, const QByteArray&)
    {33, 321, 585, 2, Smoke::mf_static, 2, 167},	//620 QGlobalSpace::operator&(const QBitArray&, const QBitArray&)
    {33, 331, 745, 1, Smoke::mf_static, 274, 168},	//621 QGlobalSpace::operator-(const QPoint&)
    {33, 341, 747, 2, Smoke::mf_static, 61, 169},	//622 QGlobalSpace::operator<<(QDebug, const QUrl&)
    {33, 363, 433, 2, Smoke::mf_static, 236, 170},	//623 QGlobalSpace::operator>=(const QByteArray&, const char*)
    {33, 404, 750, 3, Smoke::mf_static, 0, 171},	//624 QGlobalSpace::qDBusReplyFill(const QDBusMessage&, QDBusError&, QVariant&)
    {33, 367, 754, 2, Smoke::mf_static, 245, 172},	//625 QGlobalSpace::operator>>(const QDBusArgument&, QSizeF&)
    {33, 367, 757, 2, Smoke::mf_static, 245, 173},	//626 QGlobalSpace::operator>>(const QDBusArgument&, QLineF&)
    {33, 376, 760, 2, Smoke::mf_static, 103, 174},	//627 QGlobalSpace::operator|(QDBusConnection::RegisterOption, int)
    {33, 341, 763, 2, Smoke::mf_static, 58, 175},	//628 QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    {33, 341, 766, 2, Smoke::mf_static, 61, 176},	//629 QGlobalSpace::operator<<(QDebug, const QDBusMessage&)
    {33, 376, 769, 2, Smoke::mf_static, 73, 177},	//630 QGlobalSpace::operator|(QDBusServiceWatcher::WatchModeFlag, QFlags<QDBusServiceWatcher::WatchModeFlag>)
    {33, 376, 772, 2, Smoke::mf_static, 83, 178},	//631 QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    {33, 367, 775, 2, Smoke::mf_static, 245, 179},	//632 QGlobalSpace::operator>>(const QDBusArgument&, QVariant&)
    {33, 367, 778, 2, Smoke::mf_static, 245, 180},	//633 QGlobalSpace::operator>>(const QDBusArgument&, QPointF&)
    {33, 336, 470, 2, Smoke::mf_static, 236, 181},	//634 QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    {33, 316, 781, 2, Smoke::mf_static, 236, 182},	//635 QGlobalSpace::operator!=(QBool, QBool)
    {33, 376, 784, 2, Smoke::mf_static, 71, 183},	//636 QGlobalSpace::operator|(QDBusConnection::RegisterOption, QFlags<QDBusConnection::RegisterOption>)
    {33, 316, 787, 2, Smoke::mf_static, 236, 184},	//637 QGlobalSpace::operator!=(const char*, const QStringRef&)
    {33, 427, 176, 1, Smoke::mf_static, 315, 185},	//638 QGlobalSpace::qHash(unsigned long long)
    {33, 341, 790, 2, Smoke::mf_static, 13, 186},	//639 QGlobalSpace::operator<<(QDBusArgument&, const QPoint&)
    {33, 415, 1, 1, Smoke::mf_static, 297, 187},	//640 QGlobalSpace::qFlagLocation(const char*)
    {33, 334, 594, 2, Smoke::mf_static, 276, 188},	//641 QGlobalSpace::operator/(const QPointF&, double)
    {33, 433, 178, 1, Smoke::mf_static, 303, 189},	//642 QGlobalSpace::qIntCast(double)
    {33, 376, 793, 2, Smoke::mf_static, 103, 190},	//643 QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    {33, 484, 190, 1, Smoke::mf_static, 5, 191},	//644 QGlobalSpace::qUncompress(const QByteArray&)
    {33, 341, 796, 2, Smoke::mf_static, 61, 192},	//645 QGlobalSpace::operator<<(QDebug, const QPointF&)
    {33, 316, 445, 2, Smoke::mf_static, 236, 193},	//646 QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    {33, 354, 799, 2, Smoke::mf_static, 236, 194},	//647 QGlobalSpace::operator==(QString::Null, const QString&)
    {33, 348, 433, 2, Smoke::mf_static, 236, 195},	//648 QGlobalSpace::operator<=(const QByteArray&, const char*)
    {33, 411, 178, 1, Smoke::mf_static, 300, 196},	//649 QGlobalSpace::qFastCos(double)
    {33, 462, 802, 1, Smoke::mf_static, 0, 197},	//650 QGlobalSpace::qRemovePostRoutine(void(*)())
    {33, 376, 804, 2, Smoke::mf_static, 81, 198},	//651 QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    {33, 376, 807, 2, Smoke::mf_static, 89, 199},	//652 QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    {33, 367, 810, 2, Smoke::mf_static, 58, 200},	//653 QGlobalSpace::operator>>(QDataStream&, QRectF&)
    {33, 423, 813, 2, Smoke::mf_static, 236, 201},	//654 QGlobalSpace::qFuzzyCompare(float, float)
    {33, 341, 816, 2, Smoke::mf_static, 58, 202},	//655 QGlobalSpace::operator<<(QDataStream&, const QChar&)
    {33, 394, 490, 2, Smoke::mf_static, 320, 203},	//656 QGlobalSpace::qChecksum(const char*, unsigned int)
    {33, 354, 686, 2, Smoke::mf_static, 236, 204},	//657 QGlobalSpace::operator==(const QDBusObjectPath&, const QDBusObjectPath&)
    {33, 367, 819, 2, Smoke::mf_static, 58, 205},	//658 QGlobalSpace::operator>>(QDataStream&, QPointF&)
    {33, 323, 822, 2, Smoke::mf_static, 282, 206},	//659 QGlobalSpace::operator*(const QSize&, double)
    {33, 431, 825, 1, Smoke::mf_static, 325, 207},	//660 QGlobalSpace::qInstallMsgHandler(void(*)(QtMsgType,const char*))
    {33, 331, 588, 2, Smoke::mf_static, 274, 208},	//661 QGlobalSpace::operator-(const QPoint&, const QPoint&)
    {33, 341, 827, 2, Smoke::mf_static, 129, 209},	//662 QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    {33, 376, 830, 2, Smoke::mf_static, 86, 210},	//663 QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    {33, 367, 833, 2, Smoke::mf_static, 58, 211},	//664 QGlobalSpace::operator>>(QDataStream&, QLine&)
    {33, 376, 836, 2, Smoke::mf_static, 74, 212},	//665 QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    {33, 403, 0, 0, Smoke::mf_static, 61, 213},	//666 QGlobalSpace::qCritical()
    {33, 334, 839, 2, Smoke::mf_static, 274, 214},	//667 QGlobalSpace::operator/(const QPoint&, double)
    {33, 453, 548, 2, Smoke::mf_static, 300, 215},	//668 QGlobalSpace::qPow(double, double)
    {33, 341, 842, 2, Smoke::mf_static, 58, 216},	//669 QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    {33, 341, 845, 2, Smoke::mf_static, 58, 217},	//670 QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    {33, 316, 799, 2, Smoke::mf_static, 236, 218},	//671 QGlobalSpace::operator!=(QString::Null, const QString&)
    {33, 427, 18, 1, Smoke::mf_static, 315, 219},	//672 QGlobalSpace::qHash(int)
    {33, 376, 848, 2, Smoke::mf_static, 90, 220},	//673 QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    {33, 536, 0, 0, Smoke::mf_static, 0, 221},	//674 QGlobalSpace::qt_noop()
    {33, 354, 481, 2, Smoke::mf_static, 236, 222},	//675 QGlobalSpace::operator==(const QString&, const QStringRef&)
    {33, 376, 851, 2, Smoke::mf_static, 103, 223},	//676 QGlobalSpace::operator|(Qt::WindowState, int)
    {33, 316, 520, 2, Smoke::mf_static, 236, 224},	//677 QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    {33, 367, 854, 2, Smoke::mf_static, 58, 225},	//678 QGlobalSpace::operator>>(QDataStream&, QString&)
    {33, 537, 857, 3, Smoke::mf_static, 112, 226},	//679 QGlobalSpace::qt_qFindChild_helper(const QObject*, const QString&, const QMetaObject&)
    {33, 341, 861, 2, Smoke::mf_static, 58, 227},	//680 QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    {33, 354, 781, 2, Smoke::mf_static, 236, 228},	//681 QGlobalSpace::operator==(QBool, QBool)
    {33, 367, 864, 2, Smoke::mf_static, 58, 229},	//682 QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    {33, 407, 178, 1, Smoke::mf_static, 300, 230},	//683 QGlobalSpace::qExp(double)
    {33, 367, 867, 2, Smoke::mf_static, 58, 231},	//684 QGlobalSpace::operator>>(QDataStream&, QSize&)
    {33, 376, 870, 2, Smoke::mf_static, 93, 232},	//685 QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    {33, 354, 873, 2, Smoke::mf_static, 236, 233},	//686 QGlobalSpace::operator==(bool, QBool)
    {33, 376, 876, 2, Smoke::mf_static, 84, 234},	//687 QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    {33, 367, 879, 2, Smoke::mf_static, 58, 235},	//688 QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    {33, 425, 178, 1, Smoke::mf_static, 236, 236},	//689 QGlobalSpace::qFuzzyIsNull(double)
    {33, 541, 882, 3, Smoke::mf_static, 236, 237},	//690 QGlobalSpace::qvariant_cast_helper(const QVariant&, QVariant::Type, void*)
    {33, 354, 886, 2, Smoke::mf_static, 236, 238},	//691 QGlobalSpace::operator==(const QStringRef&, const QString&)
    {33, 489, 889, 3, Smoke::mf_static, 0, 239},	//692 QGlobalSpace::qbswap_helper(const unsigned char*, unsigned char*, int)
    {33, 427, 534, 1, Smoke::mf_static, 315, 240},	//693 QGlobalSpace::qHash(QChar)
    {33, 376, 893, 2, Smoke::mf_static, 103, 241},	//694 QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    {33, 341, 896, 2, Smoke::mf_static, 58, 242},	//695 QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    {33, 316, 886, 2, Smoke::mf_static, 236, 243},	//696 QGlobalSpace::operator!=(const QStringRef&, const QString&)
    {33, 367, 899, 2, Smoke::mf_static, 245, 244},	//697 QGlobalSpace::operator>>(const QDBusArgument&, QPoint&)
    {33, 316, 873, 2, Smoke::mf_static, 236, 245},	//698 QGlobalSpace::operator!=(bool, QBool)
    {33, 530, 902, 2, Smoke::mf_static, 0, 246},	//699 QGlobalSpace::qt_message_output(QtMsgType, const char*)
    {33, 376, 905, 2, Smoke::mf_static, 77, 247},	//700 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    {33, 496, 172, 1, Smoke::mf_static, 0, 248},	//701 QGlobalSpace::qsrand(unsigned int)
    {33, 354, 908, 2, Smoke::mf_static, 236, 249},	//702 QGlobalSpace::operator==(const QMargins&, const QMargins&)
    {33, 376, 911, 2, Smoke::mf_static, 85, 250},	//703 QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    {33, 341, 914, 2, Smoke::mf_static, 61, 251},	//704 QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    {33, 367, 917, 2, Smoke::mf_static, 58, 252},	//705 QGlobalSpace::operator>>(QDataStream&, QTime&)
    {33, 376, 920, 2, Smoke::mf_static, 103, 253},	//706 QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    {33, 316, 680, 2, Smoke::mf_static, 236, 254},	//707 QGlobalSpace::operator!=(const QString&, QString::Null)
    {33, 507, 3, 2, Smoke::mf_static, 303, 255},	//708 QGlobalSpace::qstricmp(const char*, const char*)
    {33, 376, 923, 2, Smoke::mf_static, 101, 256},	//709 QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    {33, 341, 926, 2, Smoke::mf_static, 61, 257},	//710 QGlobalSpace::operator<<(QDebug, const QDateTime&)
    {33, 451, 929, 3, Smoke::mf_static, 327, 258},	//711 QGlobalSpace::qMemSet(void*, int, size_t)
    {33, 316, 454, 2, Smoke::mf_static, 236, 259},	//712 QGlobalSpace::operator!=(const QSize&, const QSize&)
    {33, 392, 178, 1, Smoke::mf_static, 303, 260},	//713 QGlobalSpace::qCeil(double)
    {33, 427, 933, 1, Smoke::mf_static, 315, 261},	//714 QGlobalSpace::qHash(signed char)
    {33, 341, 935, 2, Smoke::mf_static, 13, 262},	//715 QGlobalSpace::operator<<(QDBusArgument&, const QTime&)
    {33, 376, 938, 2, Smoke::mf_static, 101, 263},	//716 QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    {33, 354, 511, 2, Smoke::mf_static, 236, 264},	//717 QGlobalSpace::operator==(const QRectF&, const QRectF&)
    {33, 376, 941, 2, Smoke::mf_static, 100, 265},	//718 QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    {33, 354, 787, 2, Smoke::mf_static, 236, 266},	//719 QGlobalSpace::operator==(const char*, const QStringRef&)
    {33, 367, 944, 2, Smoke::mf_static, 58, 267},	//720 QGlobalSpace::operator>>(QDataStream&, QStringList&)
    {33, 341, 947, 2, Smoke::mf_static, 61, 268},	//721 QGlobalSpace::operator<<(QDebug, const QVariant&)
    {33, 376, 950, 2, Smoke::mf_static, 103, 269},	//722 QGlobalSpace::operator|(QFile::Permission, int)
    {33, 326, 588, 2, Smoke::mf_static, 274, 270},	//723 QGlobalSpace::operator+(const QPoint&, const QPoint&)
    {33, 326, 433, 2, Smoke::mf_static, 242, 271},	//724 QGlobalSpace::operator+(const QByteArray&, const char*)
    {33, 382, 802, 1, Smoke::mf_static, 0, 272},	//725 QGlobalSpace::qAddPostRoutine(void(*)())
    {33, 460, 953, 1, Smoke::mf_static, 0, 273},	//726 QGlobalSpace::qRegisterStaticPluginInstanceFunction(QObject*(*)())
    {33, 323, 955, 2, Smoke::mf_static, 276, 274},	//727 QGlobalSpace::operator*(double, const QPointF&)
    {33, 323, 958, 2, Smoke::mf_static, 274, 275},	//728 QGlobalSpace::operator*(int, const QPoint&)
    {33, 475, 0, 0, Smoke::mf_static, 236, 276},	//729 QGlobalSpace::qSharedBuild()
    {33, 341, 961, 2, Smoke::mf_static, 58, 277},	//730 QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    {33, 367, 964, 2, Smoke::mf_static, 58, 278},	//731 QGlobalSpace::operator>>(QDataStream&, QPoint&)
    {33, 341, 967, 2, Smoke::mf_static, 58, 279},	//732 QGlobalSpace::operator<<(QDataStream&, const QTime&)
    {33, 341, 970, 2, Smoke::mf_static, 13, 280},	//733 QGlobalSpace::operator<<(QDBusArgument&, const QRect&)
    {33, 430, 0, 0, Smoke::mf_static, 300, 281},	//734 QGlobalSpace::qInf()
    {33, 515, 466, 3, Smoke::mf_static, 303, 282},	//735 QGlobalSpace::qstrnicmp(const char*, const char*, unsigned int)
    {33, 427, 973, 1, Smoke::mf_static, 315, 283},	//736 QGlobalSpace::qHash(const QStringRef&)
    {33, 367, 975, 2, Smoke::mf_static, 58, 284},	//737 QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    {33, 376, 978, 2, Smoke::mf_static, 103, 285},	//738 QGlobalSpace::operator|(Qt::InputMethodHint, int)
    {33, 359, 615, 2, Smoke::mf_static, 236, 286},	//739 QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    {33, 341, 981, 2, Smoke::mf_static, 58, 287},	//740 QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    {33, 354, 531, 2, Smoke::mf_static, 236, 288},	//741 QGlobalSpace::operator==(QChar, QChar)
    {33, 401, 178, 1, Smoke::mf_static, 300, 289},	//742 QGlobalSpace::qCos(double)
    {33, 367, 984, 2, Smoke::mf_static, 245, 290},	//743 QGlobalSpace::operator>>(const QDBusArgument&, QSize&)
    {33, 447, 987, 2, Smoke::mf_static, 327, 291},	//744 QGlobalSpace::qMallocAligned(size_t, size_t)
    {33, 341, 990, 2, Smoke::mf_static, 58, 292},	//745 QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    {33, 524, 993, 4, Smoke::mf_static, 0, 293},	//746 QGlobalSpace::qt_assert_x(const char*, const char*, const char*, int)
    {33, 367, 998, 2, Smoke::mf_static, 245, 294},	//747 QGlobalSpace::operator>>(const QDBusArgument&, QDate&)
    {33, 376, 1001, 2, Smoke::mf_static, 85, 295},	//748 QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    {33, 341, 1004, 2, Smoke::mf_static, 13, 296},	//749 QGlobalSpace::operator<<(QDBusArgument&, const QDate&)
    {33, 376, 1007, 2, Smoke::mf_static, 77, 297},	//750 QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    {33, 326, 1010, 2, Smoke::mf_static, 242, 298},	//751 QGlobalSpace::operator+(const QByteArray&, char)
    {33, 376, 1013, 2, Smoke::mf_static, 80, 299},	//752 QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    {33, 487, 0, 0, Smoke::mf_static, 297, 300},	//753 QGlobalSpace::qVersion()
    {33, 376, 1016, 2, Smoke::mf_static, 86, 301},	//754 QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    {33, 341, 1019, 2, Smoke::mf_static, 13, 302},	//755 QGlobalSpace::operator<<(QDBusArgument&, const QList<QVariant>&)
    {33, 341, 1022, 2, Smoke::mf_static, 13, 303},	//756 QGlobalSpace::operator<<(QDBusArgument&, const QHash<QString,QVariant>&)
    {33, 326, 478, 2, Smoke::mf_static, 276, 304},	//757 QGlobalSpace::operator+(const QPointF&, const QPointF&)
    {33, 341, 1025, 2, Smoke::mf_static, 58, 305},	//758 QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    {33, 376, 1028, 2, Smoke::mf_static, 79, 306},	//759 QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    {33, 341, 1031, 2, Smoke::mf_static, 58, 307},	//760 QGlobalSpace::operator<<(QDataStream&, const QLine&)
    {33, 341, 1034, 2, Smoke::mf_static, 61, 308},	//761 QGlobalSpace::operator<<(QDebug, const QDBusError&)
    {33, 376, 1037, 2, Smoke::mf_static, 103, 309},	//762 QGlobalSpace::operator|(Qt::GestureFlag, int)
    {33, 354, 704, 2, Smoke::mf_static, 236, 310},	//763 QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    {33, 480, 1040, 2, Smoke::mf_static, 236, 311},	//764 QGlobalSpace::qStringComparisonHelper(const QStringRef&, const char*)
    {33, 376, 1043, 2, Smoke::mf_static, 75, 312},	//765 QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    {33, 341, 1046, 2, Smoke::mf_static, 58, 313},	//766 QGlobalSpace::operator<<(QDataStream&, const QDate&)
    {33, 326, 1049, 2, Smoke::mf_static, 242, 314},	//767 QGlobalSpace::operator+(char, const QByteArray&)
    {33, 376, 1052, 2, Smoke::mf_static, 103, 315},	//768 QGlobalSpace::operator|(QLibrary::LoadHint, int)
    {33, 336, 615, 2, Smoke::mf_static, 236, 316},	//769 QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    {33, 396, 1055, 3, Smoke::mf_static, 5, 317},	//770 QGlobalSpace::qCompress(const unsigned char*, int, int)
    {33, 396, 618, 2, Smoke::mf_static, 5, 318},	//771 QGlobalSpace::qCompress(const unsigned char*, int)
    {33, 417, 178, 1, Smoke::mf_static, 303, 319},	//772 QGlobalSpace::qFloor(double)
    {33, 376, 1059, 2, Smoke::mf_static, 96, 320},	//773 QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    {33, 427, 68, 1, Smoke::mf_static, 315, 321},	//774 QGlobalSpace::qHash(const QString&)
    {33, 326, 289, 2, Smoke::mf_static, 286, 322},	//775 QGlobalSpace::operator+(const QString&, const QString&)
    {33, 316, 1062, 2, Smoke::mf_static, 236, 323},	//776 QGlobalSpace::operator!=(QBool, bool)
    {33, 354, 615, 2, Smoke::mf_static, 236, 324},	//777 QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    {33, 354, 1065, 2, Smoke::mf_static, 236, 325},	//778 QGlobalSpace::operator==(const QDBusVariant&, const QDBusVariant&)
    {33, 341, 1068, 2, Smoke::mf_static, 13, 326},	//779 QGlobalSpace::operator<<(QDBusArgument&, const QSizeF&)
    {33, 341, 1071, 2, Smoke::mf_static, 58, 327},	//780 QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    {33, 439, 526, 1, Smoke::mf_static, 236, 328},	//781 QGlobalSpace::qIsNaN(float)
    {33, 341, 1074, 2, Smoke::mf_static, 58, 329},	//782 QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    {33, 376, 1077, 2, Smoke::mf_static, 103, 330},	//783 QGlobalSpace::operator|(QDir::SortFlag, int)
    {33, 316, 686, 2, Smoke::mf_static, 236, 331},	//784 QGlobalSpace::operator!=(const QDBusObjectPath&, const QDBusObjectPath&)
    {33, 449, 1080, 3, Smoke::mf_static, 327, 332},	//785 QGlobalSpace::qMemCopy(void*, const void*, size_t)
    {33, 419, 1084, 1, Smoke::mf_static, 0, 333},	//786 QGlobalSpace::qFree(void*)
    {33, 354, 1040, 2, Smoke::mf_static, 236, 334},	//787 QGlobalSpace::operator==(const QStringRef&, const char*)
    {33, 439, 178, 1, Smoke::mf_static, 236, 335},	//788 QGlobalSpace::qIsNaN(double)
    {33, 376, 1086, 2, Smoke::mf_static, 98, 336},	//789 QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    {33, 323, 839, 2, Smoke::mf_static, 274, 337},	//790 QGlobalSpace::operator*(const QPoint&, double)
    {33, 376, 1089, 2, Smoke::mf_static, 103, 338},	//791 QGlobalSpace::operator|(QDBusServiceWatcher::WatchModeFlag, int)
    {33, 341, 1092, 2, Smoke::mf_static, 61, 339},	//792 QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    {33, 473, 18, 1, Smoke::mf_static, 132, 340},	//793 QGlobalSpace::qSetRealNumberPrecision(int)
    {33, 495, 0, 0, Smoke::mf_static, 303, 341},	//794 QGlobalSpace::qrand()
    {33, 367, 1095, 2, Smoke::mf_static, 58, 342},	//795 QGlobalSpace::operator>>(QDataStream&, QVariant&)
    {33, 427, 1098, 1, Smoke::mf_static, 315, 343},	//796 QGlobalSpace::qHash(const QUrl&)
    {33, 376, 1100, 2, Smoke::mf_static, 99, 344},	//797 QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    {33, 326, 615, 2, Smoke::mf_static, 242, 345},	//798 QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    {33, 323, 1103, 2, Smoke::mf_static, 274, 346},	//799 QGlobalSpace::operator*(float, const QPoint&)
    {33, 323, 1106, 2, Smoke::mf_static, 274, 347},	//800 QGlobalSpace::operator*(double, const QPoint&)
    {33, 316, 1040, 2, Smoke::mf_static, 236, 348},	//801 QGlobalSpace::operator!=(const QStringRef&, const char*)
    {33, 476, 178, 1, Smoke::mf_static, 300, 349},	//802 QGlobalSpace::qSin(double)
    {33, 341, 1109, 2, Smoke::mf_static, 61, 350},	//803 QGlobalSpace::operator<<(QDebug, const QObject*)
    {33, 354, 588, 2, Smoke::mf_static, 236, 351},	//804 QGlobalSpace::operator==(const QPoint&, const QPoint&)
    {33, 376, 1112, 2, Smoke::mf_static, 78, 352},	//805 QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    {33, 522, 6, 3, Smoke::mf_static, 0, 353},	//806 QGlobalSpace::qt_assert(const char*, const char*, int)
    {33, 341, 1115, 2, Smoke::mf_static, 61, 354},	//807 QGlobalSpace::operator<<(QDebug, const QRectF&)
    {33, 509, 1, 1, Smoke::mf_static, 315, 355},	//808 QGlobalSpace::qstrlen(const char*)
    {33, 376, 1118, 2, Smoke::mf_static, 84, 356},	//809 QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    {33, 376, 1121, 2, Smoke::mf_static, 75, 357},	//810 QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    {33, 437, 178, 1, Smoke::mf_static, 236, 358},	//811 QGlobalSpace::qIsInf(double)
    {33, 331, 454, 2, Smoke::mf_static, 282, 359},	//812 QGlobalSpace::operator-(const QSize&, const QSize&)
    {33, 334, 822, 2, Smoke::mf_static, 282, 360},	//813 QGlobalSpace::operator/(const QSize&, double)
    {33, 363, 574, 2, Smoke::mf_static, 236, 361},	//814 QGlobalSpace::operator>=(const char*, const QByteArray&)
    {33, 376, 1124, 2, Smoke::mf_static, 103, 362},	//815 QGlobalSpace::operator|(Qt::TouchPointState, int)
    {33, 376, 1127, 2, Smoke::mf_static, 103, 363},	//816 QGlobalSpace::operator|(QDir::Filter, int)
    {33, 316, 574, 2, Smoke::mf_static, 236, 364},	//817 QGlobalSpace::operator!=(const char*, const QByteArray&)
    {33, 482, 178, 1, Smoke::mf_static, 300, 365},	//818 QGlobalSpace::qTan(double)
    {33, 466, 178, 1, Smoke::mf_static, 306, 366},	//819 QGlobalSpace::qRound64(double)
    {33, 427, 1130, 1, Smoke::mf_static, 315, 367},	//820 QGlobalSpace::qHash(unsigned long)
    {33, 341, 1132, 2, Smoke::mf_static, 13, 368},	//821 QGlobalSpace::operator<<(QDBusArgument&, const QLine&)
    {33, 376, 1135, 2, Smoke::mf_static, 69, 369},	//822 QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    {33, 468, 0, 0, Smoke::mf_static, 300, 370},	//823 QGlobalSpace::qSNaN()
    {33, 336, 531, 2, Smoke::mf_static, 236, 371},	//824 QGlobalSpace::operator<(QChar, QChar)
    {33, 376, 1138, 2, Smoke::mf_static, 95, 372},	//825 QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    {33, 376, 1141, 2, Smoke::mf_static, 88, 373},	//826 QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    {33, 331, 704, 2, Smoke::mf_static, 284, 374},	//827 QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    {33, 445, 1144, 1, Smoke::mf_static, 327, 375},	//828 QGlobalSpace::qMalloc(size_t)
    {33, 441, 178, 1, Smoke::mf_static, 236, 376},	//829 QGlobalSpace::qIsNull(double)
    {33, 493, 574, 2, Smoke::mf_static, 236, 377},	//830 QGlobalSpace::qputenv(const char*, const QByteArray&)
    {33, 376, 1146, 2, Smoke::mf_static, 103, 378},	//831 QGlobalSpace::operator|(Qt::Orientation, int)
    {33, 376, 1149, 2, Smoke::mf_static, 103, 379},	//832 QGlobalSpace::operator|(Qt::ToolBarArea, int)
    {33, 367, 1152, 2, Smoke::mf_static, 58, 380},	//833 QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    {33, 367, 1155, 2, Smoke::mf_static, 58, 381},	//834 QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    {33, 425, 526, 1, Smoke::mf_static, 236, 382},	//835 QGlobalSpace::qFuzzyIsNull(float)
    {33, 341, 1158, 2, Smoke::mf_static, 58, 383},	//836 QGlobalSpace::operator<<(QDataStream&, const QRect&)
    {33, 427, 182, 1, Smoke::mf_static, 315, 384},	//837 QGlobalSpace::qHash(const QDBusObjectPath&)
    {33, 341, 1161, 2, Smoke::mf_static, 61, 385},	//838 QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    {33, 427, 1164, 1, Smoke::mf_static, 315, 386},	//839 QGlobalSpace::qHash(const QPersistentModelIndex&)
    {33, 341, 1166, 2, Smoke::mf_static, 61, 387},	//840 QGlobalSpace::operator<<(QDebug, const QTime&)
    {33, 376, 1169, 2, Smoke::mf_static, 103, 388},	//841 QGlobalSpace::operator|(QLocale::NumberOption, int)
    {33, 376, 1172, 2, Smoke::mf_static, 99, 389},	//842 QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    {33, 359, 433, 2, Smoke::mf_static, 236, 390},	//843 QGlobalSpace::operator>(const QByteArray&, const char*)
    {33, 316, 908, 2, Smoke::mf_static, 236, 391},	//844 QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    {33, 376, 1175, 2, Smoke::mf_static, 90, 392},	//845 QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    {33, 469, 18, 1, Smoke::mf_static, 132, 393},	//846 QGlobalSpace::qSetFieldWidth(int)
    {33, 376, 1178, 2, Smoke::mf_static, 100, 394},	//847 QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    {33, 376, 1181, 2, Smoke::mf_static, 87, 395},	//848 QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    {33, 376, 1184, 2, Smoke::mf_static, 103, 396},	//849 QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    {33, 323, 1187, 2, Smoke::mf_static, 284, 397},	//850 QGlobalSpace::operator*(double, const QSizeF&)
    {33, 363, 470, 2, Smoke::mf_static, 236, 398},	//851 QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    {33, 341, 1190, 2, Smoke::mf_static, 61, 399},	//852 QGlobalSpace::operator<<(QDebug, const QMargins&)
    {33, 427, 190, 1, Smoke::mf_static, 315, 400},	//853 QGlobalSpace::qHash(const QByteArray&)
    {33, 354, 499, 2, Smoke::mf_static, 236, 401},	//854 QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    {33, 427, 1193, 1, Smoke::mf_static, 315, 402},	//855 QGlobalSpace::qHash(const QModelIndex&)
    {33, 323, 1195, 2, Smoke::mf_static, 274, 403},	//856 QGlobalSpace::operator*(const QPoint&, int)
    {33, 354, 609, 2, Smoke::mf_static, 236, 404},	//857 QGlobalSpace::operator==(const QRect&, const QRect&)
    {33, 376, 1198, 2, Smoke::mf_static, 103, 405},	//858 QGlobalSpace::operator|(QUrl::FormattingOption, int)
    {33, 376, 1201, 2, Smoke::mf_static, 94, 406},	//859 QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    {33, 376, 1204, 2, Smoke::mf_static, 91, 407},	//860 QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    {33, 421, 1084, 1, Smoke::mf_static, 0, 408},	//861 QGlobalSpace::qFreeAligned(void*)
    {33, 376, 1207, 2, Smoke::mf_static, 96, 409},	//862 QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    {33, 341, 1210, 2, Smoke::mf_static, 61, 410},	//863 QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    {33, 354, 433, 2, Smoke::mf_static, 236, 411},	//864 QGlobalSpace::operator==(const QByteArray&, const char*)
    {33, 376, 1213, 2, Smoke::mf_static, 103, 412},	//865 QGlobalSpace::operator|(Qt::ItemFlag, int)
    {33, 354, 457, 2, Smoke::mf_static, 236, 413},	//866 QGlobalSpace::operator==(const QDBusSignature&, const QDBusSignature&)
    {33, 376, 1216, 2, Smoke::mf_static, 103, 414},	//867 QGlobalSpace::operator|(Qt::MouseButton, int)
    {33, 443, 178, 1, Smoke::mf_static, 300, 415},	//868 QGlobalSpace::qLn(double)
    {33, 354, 1062, 2, Smoke::mf_static, 236, 416},	//869 QGlobalSpace::operator==(QBool, bool)
    {33, 316, 433, 2, Smoke::mf_static, 236, 417},	//870 QGlobalSpace::operator!=(const QByteArray&, const char*)
    {33, 374, 585, 2, Smoke::mf_static, 2, 418},	//871 QGlobalSpace::operator^(const QBitArray&, const QBitArray&)
    {33, 385, 178, 1, Smoke::mf_static, 300, 419},	//872 QGlobalSpace::qAsin(double)
    {33, 367, 1219, 2, Smoke::mf_static, 58, 420},	//873 QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    {33, 391, 0, 0, Smoke::mf_static, 0, 421},	//874 QGlobalSpace::qBadAlloc()
    {33, 376, 1222, 2, Smoke::mf_static, 103, 422},	//875 QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    {33, 376, 1225, 2, Smoke::mf_static, 103, 423},	//876 QGlobalSpace::operator|(QString::SectionFlag, int)
    {33, 341, 1228, 2, Smoke::mf_static, 58, 424},	//877 QGlobalSpace::operator<<(QDataStream&, const QSize&)
    {33, 435, 526, 1, Smoke::mf_static, 236, 425},	//878 QGlobalSpace::qIsFinite(float)
    {33, 326, 704, 2, Smoke::mf_static, 284, 426},	//879 QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    {33, 376, 1231, 2, Smoke::mf_static, 74, 427},	//880 QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    {33, 376, 1234, 2, Smoke::mf_static, 82, 428},	//881 QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    {33, 121, 0, 0, Smoke::mf_static|Smoke::mf_enum, 305, 429},	//882 QGlobalSpace::Q_COMPLEX_TYPE (enum)
    {33, 124, 0, 0, Smoke::mf_static|Smoke::mf_enum, 305, 430},	//883 QGlobalSpace::Q_PRIMITIVE_TYPE (enum)
    {33, 125, 0, 0, Smoke::mf_static|Smoke::mf_enum, 305, 431},	//884 QGlobalSpace::Q_STATIC_TYPE (enum)
    {33, 123, 0, 0, Smoke::mf_static|Smoke::mf_enum, 305, 432},	//885 QGlobalSpace::Q_MOVABLE_TYPE (enum)
    {33, 122, 0, 0, Smoke::mf_static|Smoke::mf_enum, 305, 433},	//886 QGlobalSpace::Q_DUMMY_TYPE (enum)
    {33, 47, 0, 0, Smoke::mf_static|Smoke::mf_enum, 221, 434},	//887 QGlobalSpace::LicensedGui (enum)
    {33, 60, 0, 0, Smoke::mf_static|Smoke::mf_enum, 234, 435},	//888 QGlobalSpace::LicensedXml (enum)
    {33, 54, 0, 0, Smoke::mf_static|Smoke::mf_enum, 227, 436},	//889 QGlobalSpace::LicensedQt3SupportLight (enum)
    {33, 55, 0, 0, Smoke::mf_static|Smoke::mf_enum, 229, 437},	//890 QGlobalSpace::LicensedScript (enum)
    {33, 52, 0, 0, Smoke::mf_static|Smoke::mf_enum, 226, 438},	//891 QGlobalSpace::LicensedOpenVG (enum)
    {33, 45, 0, 0, Smoke::mf_static|Smoke::mf_enum, 219, 439},	//892 QGlobalSpace::LicensedDBus (enum)
    {33, 59, 0, 0, Smoke::mf_static|Smoke::mf_enum, 233, 440},	//893 QGlobalSpace::LicensedTest (enum)
    {33, 43, 0, 0, Smoke::mf_static|Smoke::mf_enum, 217, 441},	//894 QGlobalSpace::LicensedActiveQt (enum)
    {33, 56, 0, 0, Smoke::mf_static|Smoke::mf_enum, 230, 442},	//895 QGlobalSpace::LicensedScriptTools (enum)
    {33, 58, 0, 0, Smoke::mf_static|Smoke::mf_enum, 232, 443},	//896 QGlobalSpace::LicensedSvg (enum)
    {33, 46, 0, 0, Smoke::mf_static|Smoke::mf_enum, 220, 444},	//897 QGlobalSpace::LicensedDeclarative (enum)
    {33, 57, 0, 0, Smoke::mf_static|Smoke::mf_enum, 231, 445},	//898 QGlobalSpace::LicensedSql (enum)
    {33, 51, 0, 0, Smoke::mf_static|Smoke::mf_enum, 225, 446},	//899 QGlobalSpace::LicensedOpenGL (enum)
    {33, 44, 0, 0, Smoke::mf_static|Smoke::mf_enum, 218, 447},	//900 QGlobalSpace::LicensedCore (enum)
    {33, 127, 0, 0, Smoke::mf_static|Smoke::mf_enum, 216, 448},	//901 QGlobalSpace::QtDebugMsg (enum)
    {33, 130, 0, 0, Smoke::mf_static|Smoke::mf_enum, 216, 449},	//902 QGlobalSpace::QtWarningMsg (enum)
    {33, 126, 0, 0, Smoke::mf_static|Smoke::mf_enum, 216, 450},	//903 QGlobalSpace::QtCriticalMsg (enum)
    {33, 128, 0, 0, Smoke::mf_static|Smoke::mf_enum, 216, 451},	//904 QGlobalSpace::QtFatalMsg (enum)
    {33, 129, 0, 0, Smoke::mf_static|Smoke::mf_enum, 216, 452},	//905 QGlobalSpace::QtSystemMsg (enum)
    {33, 48, 0, 0, Smoke::mf_static|Smoke::mf_enum, 222, 453},	//906 QGlobalSpace::LicensedHelp (enum)
    {33, 49, 0, 0, Smoke::mf_static|Smoke::mf_enum, 223, 454},	//907 QGlobalSpace::LicensedMultimedia (enum)
    {33, 53, 0, 0, Smoke::mf_static|Smoke::mf_enum, 228, 455},	//908 QGlobalSpace::LicensedQt3Support (enum)
    {33, 61, 0, 0, Smoke::mf_static|Smoke::mf_enum, 235, 456},	//909 QGlobalSpace::LicensedXmlPatterns (enum)
    {33, 50, 0, 0, Smoke::mf_static|Smoke::mf_enum, 224, 457},	//910 QGlobalSpace::LicensedNetwork (enum)
    {43, 310, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 270, 0},	//911 QObject::metaObject() const
    {43, 534, 1, 1, Smoke::mf_virtual, 327, 0},	//912 QObject::qt_metacast(const char*)
    {43, 271, 1237, 1, Smoke::mf_virtual, 236, 0},	//913 QObject::event(QEvent*)
    {43, 272, 1239, 2, Smoke::mf_virtual, 236, 0},	//914 QObject::eventFilter(QObject*, QEvent*)
    {43, 608, 1242, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//915 QObject::timerEvent(QTimerEvent*)
    {43, 221, 1244, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//916 QObject::childEvent(QChildEvent*)
    {43, 249, 1237, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//917 QObject::customEvent(QEvent*)
    {43, 226, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//918 QObject::connectNotify(const char*)
    {43, 260, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//919 QObject::disconnectNotify(const char*)
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    315,  // QDBusMessage::createError(const QString&, const QString&)
    317,  // QDBusMessage::createError(QDBusError::ErrorType, const QString&)
    0,
    320,  // QDBusMessage::createErrorReply(const QString, const QString&) const
    322,  // QDBusMessage::createErrorReply(QDBusError::ErrorType, const QString&) const
    0,
    260,  // QDBusContext::sendErrorReply(const QString&) const
    261,  // QDBusContext::sendErrorReply(QDBusError::ErrorType) const
    0,
    257,  // QDBusContext::sendErrorReply(const QString&, const QString&) const
    258,  // QDBusContext::sendErrorReply(QDBusError::ErrorType, const QString&) const
    0,
    263,  // QDBusError::QDBusError(const DBusError*)
    264,  // QDBusError::QDBusError(const QDBusMessage&)
    266,  // QDBusError::QDBusError(const QDBusError&)
    0,
    152,  // QDBusConnection::callWithCallback(const QDBusMessage&, QObject*, const char*, int) const
    178,  // QDBusConnection::callWithCallback(const QDBusMessage&, QObject*, const char*, const char*) const
    0,
    169,  // QDBusConnection::connectToBus(QDBusConnection::BusType, const QString&)
    170,  // QDBusConnection::connectToBus(const QString&, const QString&)
    0,
    487,  // QGlobalSpace::operator!=(const QPointF&, const QPointF&)
    496,  // QGlobalSpace::operator!=(const QLatin1String&, const QStringRef&)
    500,  // QGlobalSpace::operator!=(const QRectF&, const QRectF&)
    511,  // QGlobalSpace::operator!=(QChar, QChar)
    533,  // QGlobalSpace::operator!=(QString::Null, QString::Null)
    539,  // QGlobalSpace::operator!=(const QPoint&, const QPoint&)
    553,  // QGlobalSpace::operator!=(const QRect&, const QRect&)
    583,  // QGlobalSpace::operator!=(const QStringRef&, const QStringRef&)
    598,  // QGlobalSpace::operator!=(const QSizeF&, const QSizeF&)
    613,  // QGlobalSpace::operator!=(const QByteArray&, const QByteArray&)
    635,  // QGlobalSpace::operator!=(QBool, QBool)
    646,  // QGlobalSpace::operator!=(const QVariant&, const QVariantComparisonHelper&)
    677,  // QGlobalSpace::operator!=(const QStringRef&, const QLatin1String&)
    712,  // QGlobalSpace::operator!=(const QSize&, const QSize&)
    844,  // QGlobalSpace::operator!=(const QMargins&, const QMargins&)
    0,
    671,  // QGlobalSpace::operator!=(QString::Null, const QString&)
    696,  // QGlobalSpace::operator!=(const QStringRef&, const QString&)
    776,  // QGlobalSpace::operator!=(QBool, bool)
    801,  // QGlobalSpace::operator!=(const QStringRef&, const char*)
    870,  // QGlobalSpace::operator!=(const QByteArray&, const char*)
    0,
    488,  // QGlobalSpace::operator!=(const QString&, const QStringRef&)
    637,  // QGlobalSpace::operator!=(const char*, const QStringRef&)
    698,  // QGlobalSpace::operator!=(bool, QBool)
    707,  // QGlobalSpace::operator!=(const QString&, QString::Null)
    817,  // QGlobalSpace::operator!=(const char*, const QByteArray&)
    0,
    507,  // QGlobalSpace::operator!=(const QDBusSignature&, const QDBusSignature&)
    784,  // QGlobalSpace::operator!=(const QDBusObjectPath&, const QDBusObjectPath&)
    0,
    469,  // QGlobalSpace::operator*(const QSizeF&, double)
    546,  // QGlobalSpace::operator*(const QPointF&, double)
    605,  // QGlobalSpace::operator*(const QPoint&, float)
    659,  // QGlobalSpace::operator*(const QSize&, double)
    790,  // QGlobalSpace::operator*(const QPoint&, double)
    856,  // QGlobalSpace::operator*(const QPoint&, int)
    0,
    599,  // QGlobalSpace::operator*(double, const QSize&)
    727,  // QGlobalSpace::operator*(double, const QPointF&)
    728,  // QGlobalSpace::operator*(int, const QPoint&)
    799,  // QGlobalSpace::operator*(float, const QPoint&)
    800,  // QGlobalSpace::operator*(double, const QPoint&)
    850,  // QGlobalSpace::operator*(double, const QSizeF&)
    0,
    491,  // QGlobalSpace::operator+(const QSize&, const QSize&)
    723,  // QGlobalSpace::operator+(const QPoint&, const QPoint&)
    757,  // QGlobalSpace::operator+(const QPointF&, const QPointF&)
    798,  // QGlobalSpace::operator+(const QByteArray&, const QByteArray&)
    879,  // QGlobalSpace::operator+(const QSizeF&, const QSizeF&)
    0,
    482,  // QGlobalSpace::operator+(QChar, const QString&)
    724,  // QGlobalSpace::operator+(const QByteArray&, const char*)
    751,  // QGlobalSpace::operator+(const QByteArray&, char)
    0,
    490,  // QGlobalSpace::operator+(const QString&, QChar)
    534,  // QGlobalSpace::operator+(const char*, const QByteArray&)
    767,  // QGlobalSpace::operator+(char, const QByteArray&)
    0,
    606,  // QGlobalSpace::operator-(const QPointF&)
    621,  // QGlobalSpace::operator-(const QPoint&)
    0,
    515,  // QGlobalSpace::operator-(const QPointF&, const QPointF&)
    661,  // QGlobalSpace::operator-(const QPoint&, const QPoint&)
    812,  // QGlobalSpace::operator-(const QSize&, const QSize&)
    827,  // QGlobalSpace::operator-(const QSizeF&, const QSizeF&)
    0,
    615,  // QGlobalSpace::operator/(const QSizeF&, double)
    641,  // QGlobalSpace::operator/(const QPointF&, double)
    667,  // QGlobalSpace::operator/(const QPoint&, double)
    813,  // QGlobalSpace::operator/(const QSize&, double)
    0,
    634,  // QGlobalSpace::operator<(const QStringRef&, const QStringRef&)
    769,  // QGlobalSpace::operator<(const QByteArray&, const QByteArray&)
    824,  // QGlobalSpace::operator<(QChar, QChar)
    0,
    480,  // QGlobalSpace::operator<(const QDBusSignature&, const QDBusSignature&)
    590,  // QGlobalSpace::operator<(const QDBusObjectPath&, const QDBusObjectPath&)
    0,
    456,  // QGlobalSpace::operator<<(QDBusArgument&, const QPointF&)
    458,  // QGlobalSpace::operator<<(QDBusArgument&, const QLineF&)
    461,  // QGlobalSpace::operator<<(QDBusArgument&, const QDateTime&)
    464,  // QGlobalSpace::operator<<(QDBusArgument&, const QRectF&)
    470,  // QGlobalSpace::operator<<(QDebug, const QLine&)
    495,  // QGlobalSpace::operator<<(QDebug, const QDate&)
    497,  // QGlobalSpace::operator<<(QDBusArgument&, const QSize&)
    499,  // QGlobalSpace::operator<<(QDebug, const QLineF&)
    516,  // QGlobalSpace::operator<<(QDebug, const QModelIndex&)
    523,  // QGlobalSpace::operator<<(QDataStream&, const QVariant&)
    532,  // QGlobalSpace::operator<<(QDataStream&, const QSizeF&)
    548,  // QGlobalSpace::operator<<(QDebug, const QSizeF&)
    565,  // QGlobalSpace::operator<<(QDataStream&, const QPoint&)
    566,  // QGlobalSpace::operator<<(QTextStream&, QTextStream&(*)(QTextStream&))
    568,  // QGlobalSpace::operator<<(QDebug, const QRect&)
    581,  // QGlobalSpace::operator<<(QDebug, const QDir&)
    597,  // QGlobalSpace::operator<<(QDataStream&, const QLineF&)
    612,  // QGlobalSpace::operator<<(QDebug, const QSize&)
    618,  // QGlobalSpace::operator<<(QDebug, const QPoint&)
    622,  // QGlobalSpace::operator<<(QDebug, const QUrl&)
    628,  // QGlobalSpace::operator<<(QDataStream&, const QPointF&)
    629,  // QGlobalSpace::operator<<(QDebug, const QDBusMessage&)
    639,  // QGlobalSpace::operator<<(QDBusArgument&, const QPoint&)
    645,  // QGlobalSpace::operator<<(QDebug, const QPointF&)
    655,  // QGlobalSpace::operator<<(QDataStream&, const QChar&)
    662,  // QGlobalSpace::operator<<(QTextStream&, QTextStreamManipulator)
    669,  // QGlobalSpace::operator<<(QDataStream&, const QByteArray&)
    670,  // QGlobalSpace::operator<<(QDataStream&, const QEasingCurve&)
    680,  // QGlobalSpace::operator<<(QDataStream&, const QRectF&)
    695,  // QGlobalSpace::operator<<(QDataStream&, const QDateTime&)
    710,  // QGlobalSpace::operator<<(QDebug, const QDateTime&)
    715,  // QGlobalSpace::operator<<(QDBusArgument&, const QTime&)
    721,  // QGlobalSpace::operator<<(QDebug, const QVariant&)
    730,  // QGlobalSpace::operator<<(QDataStream&, const QUrl&)
    732,  // QGlobalSpace::operator<<(QDataStream&, const QTime&)
    733,  // QGlobalSpace::operator<<(QDBusArgument&, const QRect&)
    740,  // QGlobalSpace::operator<<(QDataStream&, const QLocale&)
    745,  // QGlobalSpace::operator<<(QDataStream&, const QBitArray&)
    749,  // QGlobalSpace::operator<<(QDBusArgument&, const QDate&)
    758,  // QGlobalSpace::operator<<(QDataStream&, const QUuid&)
    760,  // QGlobalSpace::operator<<(QDataStream&, const QLine&)
    761,  // QGlobalSpace::operator<<(QDebug, const QDBusError&)
    766,  // QGlobalSpace::operator<<(QDataStream&, const QDate&)
    779,  // QGlobalSpace::operator<<(QDBusArgument&, const QSizeF&)
    782,  // QGlobalSpace::operator<<(QDataStream&, const QRegExp&)
    792,  // QGlobalSpace::operator<<(QDebug, const QPersistentModelIndex&)
    803,  // QGlobalSpace::operator<<(QDebug, const QObject*)
    807,  // QGlobalSpace::operator<<(QDebug, const QRectF&)
    821,  // QGlobalSpace::operator<<(QDBusArgument&, const QLine&)
    836,  // QGlobalSpace::operator<<(QDataStream&, const QRect&)
    838,  // QGlobalSpace::operator<<(QDebug, const QEasingCurve&)
    840,  // QGlobalSpace::operator<<(QDebug, const QTime&)
    852,  // QGlobalSpace::operator<<(QDebug, const QMargins&)
    877,  // QGlobalSpace::operator<<(QDataStream&, const QSize&)
    0,
    478,  // QGlobalSpace::operator<<(QDebug, QFlags<QIODevice::OpenModeFlag>)
    521,  // QGlobalSpace::operator<<(QDataStream&, const QVariant::Type)
    559,  // QGlobalSpace::operator<<(QDataStream&, const QString&)
    704,  // QGlobalSpace::operator<<(QDebug, const QVariant::Type)
    863,  // QGlobalSpace::operator<<(QDebug, QFlags<QDir::Filter>)
    0,
    477,  // QGlobalSpace::operator<<(QDBusArgument&, const QMap<QString,QVariant>&)
    755,  // QGlobalSpace::operator<<(QDBusArgument&, const QList<QVariant>&)
    756,  // QGlobalSpace::operator<<(QDBusArgument&, const QHash<QString,QVariant>&)
    780,  // QGlobalSpace::operator<<(QDataStream&, const QStringList&)
    0,
    485,  // QGlobalSpace::operator<=(const QStringRef&, const QStringRef&)
    545,  // QGlobalSpace::operator<=(QChar, QChar)
    555,  // QGlobalSpace::operator<=(const QByteArray&, const QByteArray&)
    0,
    476,  // QGlobalSpace::operator==(const QVariant&, const QVariantComparisonHelper&)
    479,  // QGlobalSpace::operator==(const QSize&, const QSize&)
    493,  // QGlobalSpace::operator==(const QStringRef&, const QStringRef&)
    503,  // QGlobalSpace::operator==(const QStringRef&, const QLatin1String&)
    549,  // QGlobalSpace::operator==(const QHashDummyValue&, const QHashDummyValue&)
    552,  // QGlobalSpace::operator==(QString::Null, QString::Null)
    574,  // QGlobalSpace::operator==(const QPointF&, const QPointF&)
    681,  // QGlobalSpace::operator==(QBool, QBool)
    702,  // QGlobalSpace::operator==(const QMargins&, const QMargins&)
    717,  // QGlobalSpace::operator==(const QRectF&, const QRectF&)
    741,  // QGlobalSpace::operator==(QChar, QChar)
    763,  // QGlobalSpace::operator==(const QSizeF&, const QSizeF&)
    777,  // QGlobalSpace::operator==(const QByteArray&, const QByteArray&)
    778,  // QGlobalSpace::operator==(const QDBusVariant&, const QDBusVariant&)
    804,  // QGlobalSpace::operator==(const QPoint&, const QPoint&)
    854,  // QGlobalSpace::operator==(const QLatin1String&, const QStringRef&)
    857,  // QGlobalSpace::operator==(const QRect&, const QRect&)
    0,
    647,  // QGlobalSpace::operator==(QString::Null, const QString&)
    691,  // QGlobalSpace::operator==(const QStringRef&, const QString&)
    787,  // QGlobalSpace::operator==(const QStringRef&, const char*)
    864,  // QGlobalSpace::operator==(const QByteArray&, const char*)
    869,  // QGlobalSpace::operator==(QBool, bool)
    0,
    578,  // QGlobalSpace::operator==(const char*, const QByteArray&)
    588,  // QGlobalSpace::operator==(const QString&, QString::Null)
    675,  // QGlobalSpace::operator==(const QString&, const QStringRef&)
    686,  // QGlobalSpace::operator==(bool, QBool)
    719,  // QGlobalSpace::operator==(const char*, const QStringRef&)
    0,
    657,  // QGlobalSpace::operator==(const QDBusObjectPath&, const QDBusObjectPath&)
    866,  // QGlobalSpace::operator==(const QDBusSignature&, const QDBusSignature&)
    0,
    569,  // QGlobalSpace::operator>(const QStringRef&, const QStringRef&)
    614,  // QGlobalSpace::operator>(QChar, QChar)
    739,  // QGlobalSpace::operator>(const QByteArray&, const QByteArray&)
    0,
    543,  // QGlobalSpace::operator>=(QChar, QChar)
    570,  // QGlobalSpace::operator>=(const QByteArray&, const QByteArray&)
    851,  // QGlobalSpace::operator>=(const QStringRef&, const QStringRef&)
    0,
    459,  // QGlobalSpace::operator>>(QDataStream&, QChar&)
    462,  // QGlobalSpace::operator>>(QDataStream&, QLocale&)
    473,  // QGlobalSpace::operator>>(QDataStream&, QRect&)
    489,  // QGlobalSpace::operator>>(const QDBusArgument&, QTime&)
    494,  // QGlobalSpace::operator>>(QDataStream&, QEasingCurve&)
    506,  // QGlobalSpace::operator>>(QDataStream&, QDate&)
    514,  // QGlobalSpace::operator>>(QDataStream&, QUrl&)
    554,  // QGlobalSpace::operator>>(QDataStream&, QUuid&)
    560,  // QGlobalSpace::operator>>(QTextStream&, QTextStream&(*)(QTextStream&))
    567,  // QGlobalSpace::operator>>(const QDBusArgument&, QDateTime&)
    573,  // QGlobalSpace::operator>>(const QDBusArgument&, QLine&)
    596,  // QGlobalSpace::operator>>(QDataStream&, QLineF&)
    602,  // QGlobalSpace::operator>>(const QDBusArgument&, QRect&)
    610,  // QGlobalSpace::operator>>(const QDBusArgument&, QRectF&)
    625,  // QGlobalSpace::operator>>(const QDBusArgument&, QSizeF&)
    626,  // QGlobalSpace::operator>>(const QDBusArgument&, QLineF&)
    632,  // QGlobalSpace::operator>>(const QDBusArgument&, QVariant&)
    633,  // QGlobalSpace::operator>>(const QDBusArgument&, QPointF&)
    653,  // QGlobalSpace::operator>>(QDataStream&, QRectF&)
    658,  // QGlobalSpace::operator>>(QDataStream&, QPointF&)
    664,  // QGlobalSpace::operator>>(QDataStream&, QLine&)
    682,  // QGlobalSpace::operator>>(QDataStream&, QBitArray&)
    684,  // QGlobalSpace::operator>>(QDataStream&, QSize&)
    688,  // QGlobalSpace::operator>>(QDataStream&, QDateTime&)
    697,  // QGlobalSpace::operator>>(const QDBusArgument&, QPoint&)
    705,  // QGlobalSpace::operator>>(QDataStream&, QTime&)
    731,  // QGlobalSpace::operator>>(QDataStream&, QPoint&)
    737,  // QGlobalSpace::operator>>(QDataStream&, QRegExp&)
    743,  // QGlobalSpace::operator>>(const QDBusArgument&, QSize&)
    747,  // QGlobalSpace::operator>>(const QDBusArgument&, QDate&)
    795,  // QGlobalSpace::operator>>(QDataStream&, QVariant&)
    833,  // QGlobalSpace::operator>>(QDataStream&, QByteArray&)
    873,  // QGlobalSpace::operator>>(QDataStream&, QSizeF&)
    0,
    678,  // QGlobalSpace::operator>>(QDataStream&, QString&)
    834,  // QGlobalSpace::operator>>(QDataStream&, QVariant::Type&)
    0,
    455,  // QGlobalSpace::operator|(QFile::Permission, QFile::Permission)
    460,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>)
    465,  // QGlobalSpace::operator|(Qt::WindowType, int)
    474,  // QGlobalSpace::operator|(QDBusServiceWatcher::WatchModeFlag, QDBusServiceWatcher::WatchModeFlag)
    475,  // QGlobalSpace::operator|(Qt::ItemFlag, Qt::ItemFlag)
    483,  // QGlobalSpace::operator|(QDBusConnection::VirtualObjectRegisterOption, QFlags<QDBusConnection::VirtualObjectRegisterOption>)
    498,  // QGlobalSpace::operator|(Qt::ToolBarArea, Qt::ToolBarArea)
    509,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, int)
    517,  // QGlobalSpace::operator|(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>)
    524,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>)
    526,  // QGlobalSpace::operator|(Qt::ItemFlag, QFlags<Qt::ItemFlag>)
    530,  // QGlobalSpace::operator|(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>)
    536,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag)
    544,  // QGlobalSpace::operator|(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>)
    547,  // QGlobalSpace::operator|(QDBusConnection::VirtualObjectRegisterOption, QDBusConnection::VirtualObjectRegisterOption)
    550,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QAbstractFileEngine::FileFlag)
    561,  // QGlobalSpace::operator|(Qt::DropAction, int)
    563,  // QGlobalSpace::operator|(Qt::MatchFlag, int)
    572,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>)
    579,  // QGlobalSpace::operator|(Qt::TextInteractionFlag, Qt::TextInteractionFlag)
    580,  // QGlobalSpace::operator|(QString::SectionFlag, QFlags<QString::SectionFlag>)
    582,  // QGlobalSpace::operator|(Qt::MouseButton, Qt::MouseButton)
    585,  // QGlobalSpace::operator|(Qt::DropAction, Qt::DropAction)
    586,  // QGlobalSpace::operator|(QDBusConnection::RegisterOption, QDBusConnection::RegisterOption)
    587,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, int)
    589,  // QGlobalSpace::operator|(Qt::GestureFlag, QFlags<Qt::GestureFlag>)
    592,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, int)
    594,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag)
    595,  // QGlobalSpace::operator|(QLocale::NumberOption, QLocale::NumberOption)
    600,  // QGlobalSpace::operator|(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>)
    604,  // QGlobalSpace::operator|(Qt::MatchFlag, QFlags<Qt::MatchFlag>)
    607,  // QGlobalSpace::operator|(Qt::AlignmentFlag, int)
    609,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, int)
    616,  // QGlobalSpace::operator|(QDBusConnection::VirtualObjectRegisterOption, int)
    617,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, int)
    627,  // QGlobalSpace::operator|(QDBusConnection::RegisterOption, int)
    630,  // QGlobalSpace::operator|(QDBusServiceWatcher::WatchModeFlag, QFlags<QDBusServiceWatcher::WatchModeFlag>)
    631,  // QGlobalSpace::operator|(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag)
    636,  // QGlobalSpace::operator|(QDBusConnection::RegisterOption, QFlags<QDBusConnection::RegisterOption>)
    643,  // QGlobalSpace::operator|(QTextStream::NumberFlag, int)
    651,  // QGlobalSpace::operator|(QLocale::NumberOption, QFlags<QLocale::NumberOption>)
    652,  // QGlobalSpace::operator|(Qt::GestureFlag, Qt::GestureFlag)
    663,  // QGlobalSpace::operator|(Qt::AlignmentFlag, Qt::AlignmentFlag)
    665,  // QGlobalSpace::operator|(QDir::Filter, QDir::Filter)
    673,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, Qt::ImageConversionFlag)
    676,  // QGlobalSpace::operator|(Qt::WindowState, int)
    685,  // QGlobalSpace::operator|(Qt::KeyboardModifier, Qt::KeyboardModifier)
    687,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QTextStream::NumberFlag)
    694,  // QGlobalSpace::operator|(Qt::KeyboardModifier, int)
    700,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>)
    703,  // QGlobalSpace::operator|(QUrl::FormattingOption, QUrl::FormattingOption)
    706,  // QGlobalSpace::operator|(Qt::DockWidgetArea, int)
    709,  // QGlobalSpace::operator|(Qt::WindowType, Qt::WindowType)
    716,  // QGlobalSpace::operator|(Qt::WindowType, QFlags<Qt::WindowType>)
    718,  // QGlobalSpace::operator|(Qt::WindowState, Qt::WindowState)
    722,  // QGlobalSpace::operator|(QFile::Permission, int)
    738,  // QGlobalSpace::operator|(Qt::InputMethodHint, int)
    748,  // QGlobalSpace::operator|(QUrl::FormattingOption, QFlags<QUrl::FormattingOption>)
    750,  // QGlobalSpace::operator|(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag)
    752,  // QGlobalSpace::operator|(QLibrary::LoadHint, QLibrary::LoadHint)
    754,  // QGlobalSpace::operator|(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>)
    759,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>)
    762,  // QGlobalSpace::operator|(Qt::GestureFlag, int)
    765,  // QGlobalSpace::operator|(QDir::SortFlag, QFlags<QDir::SortFlag>)
    768,  // QGlobalSpace::operator|(QLibrary::LoadHint, int)
    773,  // QGlobalSpace::operator|(Qt::Orientation, Qt::Orientation)
    783,  // QGlobalSpace::operator|(QDir::SortFlag, int)
    789,  // QGlobalSpace::operator|(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>)
    791,  // QGlobalSpace::operator|(QDBusServiceWatcher::WatchModeFlag, int)
    797,  // QGlobalSpace::operator|(Qt::TouchPointState, QFlags<Qt::TouchPointState>)
    805,  // QGlobalSpace::operator|(QFile::Permission, QFlags<QFile::Permission>)
    809,  // QGlobalSpace::operator|(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>)
    810,  // QGlobalSpace::operator|(QDir::SortFlag, QDir::SortFlag)
    815,  // QGlobalSpace::operator|(Qt::TouchPointState, int)
    816,  // QGlobalSpace::operator|(QDir::Filter, int)
    822,  // QGlobalSpace::operator|(QAbstractFileEngine::FileFlag, QFlags<QAbstractFileEngine::FileFlag>)
    825,  // QGlobalSpace::operator|(Qt::MouseButton, QFlags<Qt::MouseButton>)
    826,  // QGlobalSpace::operator|(Qt::DropAction, QFlags<Qt::DropAction>)
    831,  // QGlobalSpace::operator|(Qt::Orientation, int)
    832,  // QGlobalSpace::operator|(Qt::ToolBarArea, int)
    841,  // QGlobalSpace::operator|(QLocale::NumberOption, int)
    842,  // QGlobalSpace::operator|(Qt::TouchPointState, Qt::TouchPointState)
    845,  // QGlobalSpace::operator|(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>)
    847,  // QGlobalSpace::operator|(Qt::WindowState, QFlags<Qt::WindowState>)
    848,  // QGlobalSpace::operator|(Qt::DockWidgetArea, Qt::DockWidgetArea)
    849,  // QGlobalSpace::operator|(QDirIterator::IteratorFlag, int)
    858,  // QGlobalSpace::operator|(QUrl::FormattingOption, int)
    859,  // QGlobalSpace::operator|(Qt::MatchFlag, Qt::MatchFlag)
    860,  // QGlobalSpace::operator|(Qt::InputMethodHint, Qt::InputMethodHint)
    862,  // QGlobalSpace::operator|(Qt::Orientation, QFlags<Qt::Orientation>)
    865,  // QGlobalSpace::operator|(Qt::ItemFlag, int)
    867,  // QGlobalSpace::operator|(Qt::MouseButton, int)
    875,  // QGlobalSpace::operator|(QIODevice::OpenModeFlag, int)
    876,  // QGlobalSpace::operator|(QString::SectionFlag, int)
    880,  // QGlobalSpace::operator|(QDir::Filter, QFlags<QDir::Filter>)
    881,  // QGlobalSpace::operator|(QString::SectionFlag, QString::SectionFlag)
    0,
    593,  // QGlobalSpace::qFuzzyCompare(double, double)
    654,  // QGlobalSpace::qFuzzyCompare(float, float)
    0,
    689,  // QGlobalSpace::qFuzzyIsNull(double)
    835,  // QGlobalSpace::qFuzzyIsNull(float)
    0,
    535,  // QGlobalSpace::qHash(const QBitArray&)
    693,  // QGlobalSpace::qHash(QChar)
    736,  // QGlobalSpace::qHash(const QStringRef&)
    796,  // QGlobalSpace::qHash(const QUrl&)
    839,  // QGlobalSpace::qHash(const QPersistentModelIndex&)
    853,  // QGlobalSpace::qHash(const QByteArray&)
    855,  // QGlobalSpace::qHash(const QModelIndex&)
    0,
    467,  // QGlobalSpace::qHash(unsigned int)
    468,  // QGlobalSpace::qHash(char)
    501,  // QGlobalSpace::qHash(unsigned char)
    513,  // QGlobalSpace::qHash(const QDBusSignature&)
    522,  // QGlobalSpace::qHash(short)
    529,  // QGlobalSpace::qHash(long)
    577,  // QGlobalSpace::qHash(unsigned short)
    603,  // QGlobalSpace::qHash(long long)
    638,  // QGlobalSpace::qHash(unsigned long long)
    672,  // QGlobalSpace::qHash(int)
    714,  // QGlobalSpace::qHash(signed char)
    774,  // QGlobalSpace::qHash(const QString&)
    820,  // QGlobalSpace::qHash(unsigned long)
    837,  // QGlobalSpace::qHash(const QDBusObjectPath&)
    0,
    571,  // QGlobalSpace::qIntCast(float)
    642,  // QGlobalSpace::qIntCast(double)
    0,
    525,  // QGlobalSpace::qIsFinite(double)
    878,  // QGlobalSpace::qIsFinite(float)
    0,
    608,  // QGlobalSpace::qIsInf(float)
    811,  // QGlobalSpace::qIsInf(double)
    0,
    781,  // QGlobalSpace::qIsNaN(float)
    788,  // QGlobalSpace::qIsNaN(double)
    0,
    508,  // QGlobalSpace::qIsNull(float)
    829,  // QGlobalSpace::qIsNull(double)
    0,
    103,  // QDBusArgument::beginMapEntry()
    130,  // QDBusArgument::beginMapEntry() const
    0,
    97,  // QDBusArgument::beginStructure()
    124,  // QDBusArgument::beginStructure() const
    0,
    100,  // QDBusArgument::endArray()
    127,  // QDBusArgument::endArray() const
    0,
    102,  // QDBusArgument::endMap()
    129,  // QDBusArgument::endMap() const
    0,
    104,  // QDBusArgument::endMapEntry()
    131,  // QDBusArgument::endMapEntry() const
    0,
    98,  // QDBusArgument::endStructure()
    125,  // QDBusArgument::endStructure() const
    0,
    91,  // QDBusArgument::operator<<(const QDBusVariant&)
    94,  // QDBusArgument::operator<<(const QDBusUnixFileDescriptor&)
    96,  // QDBusArgument::operator<<(const QByteArray&)
    0,
    81,  // QDBusArgument::operator<<(unsigned char)
    82,  // QDBusArgument::operator<<(bool)
    83,  // QDBusArgument::operator<<(short)
    84,  // QDBusArgument::operator<<(unsigned short)
    85,  // QDBusArgument::operator<<(int)
    86,  // QDBusArgument::operator<<(unsigned int)
    87,  // QDBusArgument::operator<<(long long)
    88,  // QDBusArgument::operator<<(unsigned long long)
    89,  // QDBusArgument::operator<<(double)
    90,  // QDBusArgument::operator<<(const QString&)
    92,  // QDBusArgument::operator<<(const QDBusObjectPath&)
    93,  // QDBusArgument::operator<<(const QDBusSignature&)
    0,
    118,  // QDBusArgument::operator>>(QDBusVariant&) const
    121,  // QDBusArgument::operator>>(QDBusUnixFileDescriptor&) const
    123,  // QDBusArgument::operator>>(QByteArray&) const
    0,
    108,  // QDBusArgument::operator>>(unsigned char&) const
    109,  // QDBusArgument::operator>>(bool&) const
    110,  // QDBusArgument::operator>>(short&) const
    111,  // QDBusArgument::operator>>(unsigned short&) const
    112,  // QDBusArgument::operator>>(int&) const
    113,  // QDBusArgument::operator>>(unsigned int&) const
    114,  // QDBusArgument::operator>>(long long&) const
    115,  // QDBusArgument::operator>>(unsigned long long&) const
    116,  // QDBusArgument::operator>>(double&) const
    117,  // QDBusArgument::operator>>(QString&) const
    119,  // QDBusArgument::operator>>(QDBusObjectPath&) const
    120,  // QDBusArgument::operator>>(QDBusSignature&) const
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {7, 6, 4},	// QDBus::AutoDetect
    {7, 9, 2},	// QDBus::Block
    {7, 10, 3},	// QDBus::BlockWithGui
    {7, 72, 1},	// QDBus::NoBlock
    {8, 81, 12},	// QDBusAbstractAdaptor::QDBusAbstractAdaptor#
    {8, 179, 14},	// QDBusAbstractAdaptor::autoRelaySignals
    {8, 310, 5},	// QDBusAbstractAdaptor::metaObject
    {8, 533, 11},	// QDBusAbstractAdaptor::qt_metacall$$?
    {8, 535, 6},	// QDBusAbstractAdaptor::qt_metacast$
    {8, 584, 13},	// QDBusAbstractAdaptor::setAutoRelaySignals$
    {8, 604, 17},	// QDBusAbstractAdaptor::staticMetaObject
    {8, 610, 15},	// QDBusAbstractAdaptor::tr$
    {8, 611, 7},	// QDBusAbstractAdaptor::tr$$
    {8, 612, 9},	// QDBusAbstractAdaptor::tr$$$
    {8, 614, 16},	// QDBusAbstractAdaptor::trUtf8$
    {8, 615, 8},	// QDBusAbstractAdaptor::trUtf8$$
    {8, 616, 10},	// QDBusAbstractAdaptor::trUtf8$$$
    {8, 628, 18},	// QDBusAbstractAdaptor::~QDBusAbstractAdaptor
    {9, 83, 41},	// QDBusAbstractInterface::QDBusAbstractInterface$$$##
    {9, 167, 65},	// QDBusAbstractInterface::asyncCall$
    {9, 168, 66},	// QDBusAbstractInterface::asyncCall$#
    {9, 169, 67},	// QDBusAbstractInterface::asyncCall$##
    {9, 170, 68},	// QDBusAbstractInterface::asyncCall$###
    {9, 171, 69},	// QDBusAbstractInterface::asyncCall$####
    {9, 172, 70},	// QDBusAbstractInterface::asyncCall$#####
    {9, 173, 71},	// QDBusAbstractInterface::asyncCall$######
    {9, 174, 72},	// QDBusAbstractInterface::asyncCall$#######
    {9, 175, 39},	// QDBusAbstractInterface::asyncCall$########
    {9, 177, 40},	// QDBusAbstractInterface::asyncCallWithArgumentList$?
    {9, 192, 49},	// QDBusAbstractInterface::call$
    {9, 193, 50},	// QDBusAbstractInterface::call$#
    {9, 194, 51},	// QDBusAbstractInterface::call$##
    {9, 195, 52},	// QDBusAbstractInterface::call$###
    {9, 196, 53},	// QDBusAbstractInterface::call$####
    {9, 197, 54},	// QDBusAbstractInterface::call$#####
    {9, 198, 55},	// QDBusAbstractInterface::call$######
    {9, 199, 56},	// QDBusAbstractInterface::call$#######
    {9, 200, 34},	// QDBusAbstractInterface::call$########
    {9, 201, 57},	// QDBusAbstractInterface::call$$
    {9, 202, 58},	// QDBusAbstractInterface::call$$#
    {9, 203, 59},	// QDBusAbstractInterface::call$$##
    {9, 204, 60},	// QDBusAbstractInterface::call$$###
    {9, 205, 61},	// QDBusAbstractInterface::call$$####
    {9, 206, 62},	// QDBusAbstractInterface::call$$#####
    {9, 207, 63},	// QDBusAbstractInterface::call$$######
    {9, 208, 64},	// QDBusAbstractInterface::call$$#######
    {9, 209, 35},	// QDBusAbstractInterface::call$$########
    {9, 211, 36},	// QDBusAbstractInterface::callWithArgumentList$$?
    {9, 216, 38},	// QDBusAbstractInterface::callWithCallback$?#$
    {9, 217, 37},	// QDBusAbstractInterface::callWithCallback$?#$$
    {9, 227, 42},	// QDBusAbstractInterface::connectNotify$
    {9, 232, 27},	// QDBusAbstractInterface::connection
    {9, 261, 43},	// QDBusAbstractInterface::disconnectNotify$
    {9, 284, 30},	// QDBusAbstractInterface::interface
    {9, 286, 73},	// QDBusAbstractInterface::internalConstCall$$
    {9, 287, 46},	// QDBusAbstractInterface::internalConstCall$$?
    {9, 290, 44},	// QDBusAbstractInterface::internalPropGet$
    {9, 292, 45},	// QDBusAbstractInterface::internalPropSet$#
    {9, 303, 26},	// QDBusAbstractInterface::isValid
    {9, 304, 31},	// QDBusAbstractInterface::lastError
    {9, 310, 19},	// QDBusAbstractInterface::metaObject
    {9, 379, 29},	// QDBusAbstractInterface::path
    {9, 533, 25},	// QDBusAbstractInterface::qt_metacall$$?
    {9, 535, 20},	// QDBusAbstractInterface::qt_metacast$
    {9, 567, 28},	// QDBusAbstractInterface::service
    {9, 594, 32},	// QDBusAbstractInterface::setTimeout$
    {9, 604, 74},	// QDBusAbstractInterface::staticMetaObject
    {9, 607, 33},	// QDBusAbstractInterface::timeout
    {9, 610, 47},	// QDBusAbstractInterface::tr$
    {9, 611, 21},	// QDBusAbstractInterface::tr$$
    {9, 612, 23},	// QDBusAbstractInterface::tr$$$
    {9, 614, 48},	// QDBusAbstractInterface::trUtf8$
    {9, 615, 22},	// QDBusAbstractInterface::trUtf8$$
    {9, 616, 24},	// QDBusAbstractInterface::trUtf8$$$
    {9, 629, 75},	// QDBusAbstractInterface::~QDBusAbstractInterface
    {10, 533, 76},	// QDBusAbstractInterfaceBase::qt_metacall$$?
    {10, 630, 77},	// QDBusAbstractInterfaceBase::~QDBusAbstractInterfaceBase
    {11, 5, 136},	// QDBusArgument::ArrayType
    {11, 8, 134},	// QDBusArgument::BasicType
    {11, 63, 139},	// QDBusArgument::MapEntryType
    {11, 64, 138},	// QDBusArgument::MapType
    {11, 84, 78},	// QDBusArgument::QDBusArgument
    {11, 85, 79},	// QDBusArgument::QDBusArgument#
    {11, 141, 137},	// QDBusArgument::StructureType
    {11, 150, 140},	// QDBusArgument::UnknownType
    {11, 153, 135},	// QDBusArgument::VariantType
    {11, 161, 105},	// QDBusArgument::appendVariant#
    {11, 163, 133},	// QDBusArgument::asVariant
    {11, 178, 132},	// QDBusArgument::atEnd
    {11, 182, 126},	// QDBusArgument::beginArray
    {11, 183, 99},	// QDBusArgument::beginArray$
    {11, 184, 128},	// QDBusArgument::beginMap
    {11, 185, 101},	// QDBusArgument::beginMap$$
    {11, 186, -391},	// QDBusArgument::beginMapEntry
    {11, 187, -394},	// QDBusArgument::beginStructure
    {11, 247, 106},	// QDBusArgument::currentSignature
    {11, 248, 107},	// QDBusArgument::currentType
    {11, 262, -397},	// QDBusArgument::endArray
    {11, 263, -400},	// QDBusArgument::endMap
    {11, 264, -403},	// QDBusArgument::endMapEntry
    {11, 265, -406},	// QDBusArgument::endStructure
    {11, 342, -409},	// QDBusArgument::operator<<#
    {11, 346, -413},	// QDBusArgument::operator<<$
    {11, 347, 95},	// QDBusArgument::operator<<?
    {11, 353, 80},	// QDBusArgument::operator=#
    {11, 368, -426},	// QDBusArgument::operator>>#
    {11, 372, -430},	// QDBusArgument::operator>>$
    {11, 373, 122},	// QDBusArgument::operator>>?
    {11, 631, 141},	// QDBusArgument::~QDBusArgument
    {12, 2, 189},	// QDBusConnection::ActivationBus
    {12, 15, 190},	// QDBusConnection::ExportAdaptors
    {12, 16, 205},	// QDBusConnection::ExportAllContents
    {12, 17, 204},	// QDBusConnection::ExportAllInvokables
    {12, 18, 203},	// QDBusConnection::ExportAllProperties
    {12, 19, 206},	// QDBusConnection::ExportAllSignal
    {12, 20, 202},	// QDBusConnection::ExportAllSignals
    {12, 21, 201},	// QDBusConnection::ExportAllSlots
    {12, 22, 207},	// QDBusConnection::ExportChildObjects
    {12, 23, 200},	// QDBusConnection::ExportNonScriptableContents
    {12, 24, 199},	// QDBusConnection::ExportNonScriptableInvokables
    {12, 25, 198},	// QDBusConnection::ExportNonScriptableProperties
    {12, 26, 197},	// QDBusConnection::ExportNonScriptableSignals
    {12, 27, 196},	// QDBusConnection::ExportNonScriptableSlots
    {12, 28, 195},	// QDBusConnection::ExportScriptableContents
    {12, 29, 194},	// QDBusConnection::ExportScriptableInvokables
    {12, 30, 193},	// QDBusConnection::ExportScriptableProperties
    {12, 31, 192},	// QDBusConnection::ExportScriptableSignals
    {12, 32, 191},	// QDBusConnection::ExportScriptableSlots
    {12, 87, 143},	// QDBusConnection::QDBusConnection#
    {12, 88, 142},	// QDBusConnection::QDBusConnection$
    {12, 138, 187},	// QDBusConnection::SessionBus
    {12, 140, 210},	// QDBusConnection::SingleNode
    {12, 142, 211},	// QDBusConnection::SubPath
    {12, 143, 188},	// QDBusConnection::SystemBus
    {12, 146, 212},	// QDBusConnection::UnixFileDescriptorPassing
    {12, 151, 208},	// QDBusConnection::UnregisterNode
    {12, 152, 209},	// QDBusConnection::UnregisterTree
    {12, 165, 182},	// QDBusConnection::asyncCall#
    {12, 166, 154},	// QDBusConnection::asyncCall#$
    {12, 181, 146},	// QDBusConnection::baseService
    {12, 189, 180},	// QDBusConnection::call#
    {12, 190, 181},	// QDBusConnection::call#$
    {12, 191, 153},	// QDBusConnection::call#$$
    {12, 213, 179},	// QDBusConnection::callWithCallback##$
    {12, 214, -17},	// QDBusConnection::callWithCallback##$$
    {12, 215, 151},	// QDBusConnection::callWithCallback##$$$
    {12, 223, 155},	// QDBusConnection::connect$$$$#$
    {12, 224, 156},	// QDBusConnection::connect$$$$$#$
    {12, 225, 157},	// QDBusConnection::connect$$$$?$#$
    {12, 229, -20},	// QDBusConnection::connectToBus$$
    {12, 231, 171},	// QDBusConnection::connectToPeer$$
    {12, 233, 149},	// QDBusConnection::connectionCapabilities
    {12, 253, 158},	// QDBusConnection::disconnect$$$$#$
    {12, 254, 159},	// QDBusConnection::disconnect$$$$$#$
    {12, 255, 160},	// QDBusConnection::disconnect$$$$?$#$
    {12, 257, 172},	// QDBusConnection::disconnectFromBus$
    {12, 259, 173},	// QDBusConnection::disconnectFromPeer$
    {12, 284, 167},	// QDBusConnection::interface
    {12, 288, 168},	// QDBusConnection::internalPointer
    {12, 295, 145},	// QDBusConnection::isConnected
    {12, 304, 147},	// QDBusConnection::lastError
    {12, 305, 174},	// QDBusConnection::localMachineId
    {12, 311, 148},	// QDBusConnection::name
    {12, 315, 163},	// QDBusConnection::objectRegisteredAt$
    {12, 353, 144},	// QDBusConnection::operator=#
    {12, 548, 183},	// QDBusConnection::registerObject$#
    {12, 549, 161},	// QDBusConnection::registerObject$#$
    {12, 551, 165},	// QDBusConnection::registerService$
    {12, 555, 185},	// QDBusConnection::registerVirtualObject$#
    {12, 556, 164},	// QDBusConnection::registerVirtualObject$#$
    {12, 562, 150},	// QDBusConnection::send#
    {12, 566, 177},	// QDBusConnection::sender
    {12, 580, 175},	// QDBusConnection::sessionBus
    {12, 604, 186},	// QDBusConnection::staticMetaObject
    {12, 605, 176},	// QDBusConnection::systemBus
    {12, 621, 184},	// QDBusConnection::unregisterObject$
    {12, 622, 162},	// QDBusConnection::unregisterObject$$
    {12, 624, 166},	// QDBusConnection::unregisterService$
    {12, 632, 213},	// QDBusConnection::~QDBusConnection
    {13, 4, 247},	// QDBusConnectionInterface::AllowReplacement
    {13, 12, 246},	// QDBusConnectionInterface::DontAllowReplacement
    {13, 13, 243},	// QDBusConnectionInterface::DontQueueService
    {13, 67, 233},	// QDBusConnectionInterface::NameAcquired$
    {13, 69, 234},	// QDBusConnectionInterface::NameLost$
    {13, 71, 235},	// QDBusConnectionInterface::NameOwnerChanged$$$
    {13, 131, 244},	// QDBusConnectionInterface::QueueService
    {13, 132, 245},	// QDBusConnectionInterface::ReplaceExistingService
    {13, 134, 248},	// QDBusConnectionInterface::ServiceNotRegistered
    {13, 135, 250},	// QDBusConnectionInterface::ServiceQueued
    {13, 136, 249},	// QDBusConnectionInterface::ServiceRegistered
    {13, 219, 232},	// QDBusConnectionInterface::callWithCallbackFailed##
    {13, 227, 236},	// QDBusConnectionInterface::connectNotify$
    {13, 261, 237},	// QDBusConnectionInterface::disconnectNotify$
    {13, 301, 222},	// QDBusConnectionInterface::isServiceRegistered$
    {13, 310, 214},	// QDBusConnectionInterface::metaObject
    {13, 533, 220},	// QDBusConnectionInterface::qt_metacall$$?
    {13, 535, 215},	// QDBusConnectionInterface::qt_metacast$
    {13, 551, 240},	// QDBusConnectionInterface::registerService$
    {13, 552, 241},	// QDBusConnectionInterface::registerService$$
    {13, 553, 225},	// QDBusConnectionInterface::registerService$$$
    {13, 557, 221},	// QDBusConnectionInterface::registeredServiceNames
    {13, 569, 223},	// QDBusConnectionInterface::serviceOwner$
    {13, 571, 231},	// QDBusConnectionInterface::serviceOwnerChanged$$$
    {13, 573, 226},	// QDBusConnectionInterface::servicePid$
    {13, 575, 229},	// QDBusConnectionInterface::serviceRegistered$
    {13, 577, 227},	// QDBusConnectionInterface::serviceUid$
    {13, 579, 230},	// QDBusConnectionInterface::serviceUnregistered$
    {13, 603, 228},	// QDBusConnectionInterface::startService$
    {13, 604, 242},	// QDBusConnectionInterface::staticMetaObject
    {13, 610, 238},	// QDBusConnectionInterface::tr$
    {13, 611, 216},	// QDBusConnectionInterface::tr$$
    {13, 612, 218},	// QDBusConnectionInterface::tr$$$
    {13, 614, 239},	// QDBusConnectionInterface::trUtf8$
    {13, 615, 217},	// QDBusConnectionInterface::trUtf8$$
    {13, 616, 219},	// QDBusConnectionInterface::trUtf8$$$
    {13, 624, 224},	// QDBusConnectionInterface::unregisterService$
    {14, 89, 251},	// QDBusContext::QDBusContext
    {14, 90, 259},	// QDBusContext::QDBusContext#
    {14, 220, 252},	// QDBusContext::calledFromDBus
    {14, 232, 253},	// QDBusContext::connection
    {14, 296, 255},	// QDBusContext::isDelayedReply
    {14, 309, 254},	// QDBusContext::message
    {14, 564, -7},	// QDBusContext::sendErrorReply$
    {14, 565, -10},	// QDBusContext::sendErrorReply$$
    {14, 590, 256},	// QDBusContext::setDelayedReply$
    {14, 633, 262},	// QDBusContext::~QDBusContext
    {15, 1, 283},	// QDBusError::AccessDenied
    {15, 3, 287},	// QDBusError::AddressInUse
    {15, 7, 280},	// QDBusError::BadAddress
    {15, 11, 288},	// QDBusError::Disconnected
    {15, 33, 276},	// QDBusError::Failed
    {15, 34, 294},	// QDBusError::InternalError
    {15, 35, 289},	// QDBusError::InvalidArgs
    {15, 36, 298},	// QDBusError::InvalidInterface
    {15, 37, 299},	// QDBusError::InvalidMember
    {15, 39, 297},	// QDBusError::InvalidObjectPath
    {15, 40, 296},	// QDBusError::InvalidService
    {15, 41, 292},	// QDBusError::InvalidSignature
    {15, 42, 300},	// QDBusError::LastErrorType
    {15, 62, 282},	// QDBusError::LimitsExceeded
    {15, 73, 274},	// QDBusError::NoError
    {15, 74, 277},	// QDBusError::NoMemory
    {15, 75, 286},	// QDBusError::NoNetwork
    {15, 76, 279},	// QDBusError::NoReply
    {15, 77, 284},	// QDBusError::NoServer
    {15, 78, 281},	// QDBusError::NotSupported
    {15, 79, 275},	// QDBusError::Other
    {15, 91, 273},	// QDBusError::QDBusError
    {15, 92, -13},	// QDBusError::QDBusError#
    {15, 93, 265},	// QDBusError::QDBusError$$
    {15, 137, 278},	// QDBusError::ServiceUnknown
    {15, 144, 291},	// QDBusError::TimedOut
    {15, 145, 285},	// QDBusError::Timeout
    {15, 147, 293},	// QDBusError::UnknownInterface
    {15, 148, 290},	// QDBusError::UnknownMethod
    {15, 149, 295},	// QDBusError::UnknownObject
    {15, 270, 272},	// QDBusError::errorString$
    {15, 303, 271},	// QDBusError::isValid
    {15, 309, 270},	// QDBusError::message
    {15, 311, 269},	// QDBusError::name
    {15, 353, 267},	// QDBusError::operator=#
    {15, 617, 268},	// QDBusError::type
    {15, 634, 301},	// QDBusError::~QDBusError
    {16, 95, 306},	// QDBusInterface::QDBusInterface$$
    {16, 96, 307},	// QDBusInterface::QDBusInterface$$$
    {16, 97, 308},	// QDBusInterface::QDBusInterface$$$#
    {16, 98, 302},	// QDBusInterface::QDBusInterface$$$##
    {16, 310, 303},	// QDBusInterface::metaObject
    {16, 533, 305},	// QDBusInterface::qt_metacall$$?
    {16, 535, 304},	// QDBusInterface::qt_metacast$
    {16, 635, 309},	// QDBusInterface::~QDBusInterface
    {17, 14, 343},	// QDBusMessage::ErrorMessage
    {17, 38, 340},	// QDBusMessage::InvalidMessage
    {17, 65, 341},	// QDBusMessage::MethodCallMessage
    {17, 99, 310},	// QDBusMessage::QDBusMessage
    {17, 100, 311},	// QDBusMessage::QDBusMessage#
    {17, 133, 342},	// QDBusMessage::ReplyMessage
    {17, 139, 344},	// QDBusMessage::SignalMessage
    {17, 162, 337},	// QDBusMessage::arguments
    {17, 180, 335},	// QDBusMessage::autoStartService
    {17, 235, 316},	// QDBusMessage::createError#
    {17, 236, -1},	// QDBusMessage::createError$$
    {17, 238, 321},	// QDBusMessage::createErrorReply#
    {17, 239, -4},	// QDBusMessage::createErrorReply$$
    {17, 241, 314},	// QDBusMessage::createMethodCall$$$$
    {17, 242, 339},	// QDBusMessage::createReply
    {17, 243, 319},	// QDBusMessage::createReply#
    {17, 244, 318},	// QDBusMessage::createReply?
    {17, 246, 313},	// QDBusMessage::createSignal$$$
    {17, 267, 328},	// QDBusMessage::errorMessage
    {17, 268, 327},	// QDBusMessage::errorName
    {17, 284, 325},	// QDBusMessage::interface
    {17, 296, 333},	// QDBusMessage::isDelayedReply
    {17, 299, 331},	// QDBusMessage::isReplyRequired
    {17, 308, 326},	// QDBusMessage::member
    {17, 342, 338},	// QDBusMessage::operator<<#
    {17, 353, 312},	// QDBusMessage::operator=#
    {17, 379, 324},	// QDBusMessage::path
    {17, 567, 323},	// QDBusMessage::service
    {17, 582, 336},	// QDBusMessage::setArguments?
    {17, 586, 334},	// QDBusMessage::setAutoStartService$
    {17, 590, 332},	// QDBusMessage::setDelayedReply$
    {17, 599, 330},	// QDBusMessage::signature
    {17, 617, 329},	// QDBusMessage::type
    {17, 636, 345},	// QDBusMessage::~QDBusMessage
    {18, 101, 351},	// QDBusMetaType::QDBusMetaType
    {18, 102, 352},	// QDBusMetaType::QDBusMetaType#
    {18, 251, 348},	// QDBusMetaType::demarshall#$$
    {18, 307, 347},	// QDBusMetaType::marshall#$$
    {18, 546, 346},	// QDBusMetaType::registerMarshallOperators$$$
    {18, 601, 349},	// QDBusMetaType::signatureToType$
    {18, 619, 350},	// QDBusMetaType::typeToSignature$
    {18, 637, 353},	// QDBusMetaType::~QDBusMetaType
    {19, 104, 354},	// QDBusPendingCall::QDBusPendingCall#
    {19, 266, 360},	// QDBusPendingCall::error
    {19, 277, 363},	// QDBusPendingCall::fromCompletedCall#
    {19, 279, 362},	// QDBusPendingCall::fromError#
    {19, 297, 358},	// QDBusPendingCall::isError
    {19, 298, 356},	// QDBusPendingCall::isFinished
    {19, 303, 359},	// QDBusPendingCall::isValid
    {19, 353, 355},	// QDBusPendingCall::operator=#
    {19, 560, 361},	// QDBusPendingCall::reply
    {19, 625, 357},	// QDBusPendingCall::waitForFinished
    {19, 638, 364},	// QDBusPendingCall::~QDBusPendingCall
    {20, 106, 377},	// QDBusPendingCallWatcher::QDBusPendingCallWatcher#
    {20, 107, 372},	// QDBusPendingCallWatcher::QDBusPendingCallWatcher##
    {20, 275, 374},	// QDBusPendingCallWatcher::finished#
    {20, 310, 365},	// QDBusPendingCallWatcher::metaObject
    {20, 533, 371},	// QDBusPendingCallWatcher::qt_metacall$$?
    {20, 535, 366},	// QDBusPendingCallWatcher::qt_metacast$
    {20, 604, 378},	// QDBusPendingCallWatcher::staticMetaObject
    {20, 610, 375},	// QDBusPendingCallWatcher::tr$
    {20, 611, 367},	// QDBusPendingCallWatcher::tr$$
    {20, 612, 369},	// QDBusPendingCallWatcher::tr$$$
    {20, 614, 376},	// QDBusPendingCallWatcher::trUtf8$
    {20, 615, 368},	// QDBusPendingCallWatcher::trUtf8$$
    {20, 616, 370},	// QDBusPendingCallWatcher::trUtf8$$$
    {20, 625, 373},	// QDBusPendingCallWatcher::waitForFinished
    {20, 639, 379},	// QDBusPendingCallWatcher::~QDBusPendingCallWatcher
    {21, 108, 394},	// QDBusServer::QDBusServer
    {21, 109, 395},	// QDBusServer::QDBusServer$
    {21, 110, 387},	// QDBusServer::QDBusServer$#
    {21, 159, 390},	// QDBusServer::address
    {21, 295, 388},	// QDBusServer::isConnected
    {21, 304, 389},	// QDBusServer::lastError
    {21, 310, 380},	// QDBusServer::metaObject
    {21, 313, 391},	// QDBusServer::newConnection#
    {21, 533, 386},	// QDBusServer::qt_metacall$$?
    {21, 535, 381},	// QDBusServer::qt_metacast$
    {21, 604, 396},	// QDBusServer::staticMetaObject
    {21, 610, 392},	// QDBusServer::tr$
    {21, 611, 382},	// QDBusServer::tr$$
    {21, 612, 384},	// QDBusServer::tr$$$
    {21, 614, 393},	// QDBusServer::trUtf8$
    {21, 615, 383},	// QDBusServer::trUtf8$$
    {21, 616, 385},	// QDBusServer::trUtf8$$$
    {21, 640, 397},	// QDBusServer::~QDBusServer
    {22, 111, 420},	// QDBusServiceWatcher::QDBusServiceWatcher
    {22, 112, 405},	// QDBusServiceWatcher::QDBusServiceWatcher#
    {22, 113, 421},	// QDBusServiceWatcher::QDBusServiceWatcher$#
    {22, 114, 422},	// QDBusServiceWatcher::QDBusServiceWatcher$#$
    {22, 115, 406},	// QDBusServiceWatcher::QDBusServiceWatcher$#$#
    {22, 154, 426},	// QDBusServiceWatcher::WatchForOwnerChange
    {22, 155, 424},	// QDBusServiceWatcher::WatchForRegistration
    {22, 156, 425},	// QDBusServiceWatcher::WatchForUnregistration
    {22, 158, 409},	// QDBusServiceWatcher::addWatchedService$
    {22, 232, 413},	// QDBusServiceWatcher::connection
    {22, 310, 398},	// QDBusServiceWatcher::metaObject
    {22, 533, 404},	// QDBusServiceWatcher::qt_metacall$$?
    {22, 535, 399},	// QDBusServiceWatcher::qt_metacast$
    {22, 559, 410},	// QDBusServiceWatcher::removeWatchedService$
    {22, 571, 417},	// QDBusServiceWatcher::serviceOwnerChanged$$$
    {22, 575, 415},	// QDBusServiceWatcher::serviceRegistered$
    {22, 579, 416},	// QDBusServiceWatcher::serviceUnregistered$
    {22, 588, 414},	// QDBusServiceWatcher::setConnection#
    {22, 596, 412},	// QDBusServiceWatcher::setWatchMode$
    {22, 598, 408},	// QDBusServiceWatcher::setWatchedServices?
    {22, 604, 423},	// QDBusServiceWatcher::staticMetaObject
    {22, 610, 418},	// QDBusServiceWatcher::tr$
    {22, 611, 400},	// QDBusServiceWatcher::tr$$
    {22, 612, 402},	// QDBusServiceWatcher::tr$$$
    {22, 614, 419},	// QDBusServiceWatcher::trUtf8$
    {22, 615, 401},	// QDBusServiceWatcher::trUtf8$$
    {22, 616, 403},	// QDBusServiceWatcher::trUtf8$$$
    {22, 626, 411},	// QDBusServiceWatcher::watchMode
    {22, 627, 407},	// QDBusServiceWatcher::watchedServices
    {22, 641, 427},	// QDBusServiceWatcher::~QDBusServiceWatcher
    {23, 116, 428},	// QDBusUnixFileDescriptor::QDBusUnixFileDescriptor
    {23, 117, 430},	// QDBusUnixFileDescriptor::QDBusUnixFileDescriptor#
    {23, 118, 429},	// QDBusUnixFileDescriptor::QDBusUnixFileDescriptor$
    {23, 273, 433},	// QDBusUnixFileDescriptor::fileDescriptor
    {23, 281, 435},	// QDBusUnixFileDescriptor::giveFileDescriptor$
    {23, 302, 437},	// QDBusUnixFileDescriptor::isSupported
    {23, 303, 432},	// QDBusUnixFileDescriptor::isValid
    {23, 353, 431},	// QDBusUnixFileDescriptor::operator=#
    {23, 592, 434},	// QDBusUnixFileDescriptor::setFileDescriptor$
    {23, 606, 436},	// QDBusUnixFileDescriptor::takeFileDescriptor
    {23, 642, 438},	// QDBusUnixFileDescriptor::~QDBusUnixFileDescriptor
    {25, 119, 451},	// QDBusVirtualObject::QDBusVirtualObject
    {25, 120, 446},	// QDBusVirtualObject::QDBusVirtualObject#
    {25, 283, 448},	// QDBusVirtualObject::handleMessage##
    {25, 294, 447},	// QDBusVirtualObject::introspect$
    {25, 310, 439},	// QDBusVirtualObject::metaObject
    {25, 533, 445},	// QDBusVirtualObject::qt_metacall$$?
    {25, 535, 440},	// QDBusVirtualObject::qt_metacast$
    {25, 604, 452},	// QDBusVirtualObject::staticMetaObject
    {25, 610, 449},	// QDBusVirtualObject::tr$
    {25, 611, 441},	// QDBusVirtualObject::tr$$
    {25, 612, 443},	// QDBusVirtualObject::tr$$$
    {25, 614, 450},	// QDBusVirtualObject::trUtf8$
    {25, 615, 442},	// QDBusVirtualObject::trUtf8$$
    {25, 616, 444},	// QDBusVirtualObject::trUtf8$$$
    {25, 643, 453},	// QDBusVirtualObject::~QDBusVirtualObject
    {33, 43, 894},	// QGlobalSpace::LicensedActiveQt
    {33, 44, 900},	// QGlobalSpace::LicensedCore
    {33, 45, 892},	// QGlobalSpace::LicensedDBus
    {33, 46, 897},	// QGlobalSpace::LicensedDeclarative
    {33, 47, 887},	// QGlobalSpace::LicensedGui
    {33, 48, 906},	// QGlobalSpace::LicensedHelp
    {33, 49, 907},	// QGlobalSpace::LicensedMultimedia
    {33, 50, 910},	// QGlobalSpace::LicensedNetwork
    {33, 51, 899},	// QGlobalSpace::LicensedOpenGL
    {33, 52, 891},	// QGlobalSpace::LicensedOpenVG
    {33, 53, 908},	// QGlobalSpace::LicensedQt3Support
    {33, 54, 889},	// QGlobalSpace::LicensedQt3SupportLight
    {33, 55, 890},	// QGlobalSpace::LicensedScript
    {33, 56, 895},	// QGlobalSpace::LicensedScriptTools
    {33, 57, 898},	// QGlobalSpace::LicensedSql
    {33, 58, 896},	// QGlobalSpace::LicensedSvg
    {33, 59, 893},	// QGlobalSpace::LicensedTest
    {33, 60, 888},	// QGlobalSpace::LicensedXml
    {33, 61, 909},	// QGlobalSpace::LicensedXmlPatterns
    {33, 121, 882},	// QGlobalSpace::Q_COMPLEX_TYPE
    {33, 122, 886},	// QGlobalSpace::Q_DUMMY_TYPE
    {33, 123, 885},	// QGlobalSpace::Q_MOVABLE_TYPE
    {33, 124, 883},	// QGlobalSpace::Q_PRIMITIVE_TYPE
    {33, 125, 884},	// QGlobalSpace::Q_STATIC_TYPE
    {33, 126, 903},	// QGlobalSpace::QtCriticalMsg
    {33, 127, 901},	// QGlobalSpace::QtDebugMsg
    {33, 128, 904},	// QGlobalSpace::QtFatalMsg
    {33, 129, 905},	// QGlobalSpace::QtSystemMsg
    {33, 130, 902},	// QGlobalSpace::QtWarningMsg
    {33, 317, -23},	// QGlobalSpace::operator!=##
    {33, 318, -39},	// QGlobalSpace::operator!=#$
    {33, 319, -45},	// QGlobalSpace::operator!=$#
    {33, 320, -51},	// QGlobalSpace::operator!=$$
    {33, 322, 620},	// QGlobalSpace::operator&##
    {33, 324, -54},	// QGlobalSpace::operator*#$
    {33, 325, -61},	// QGlobalSpace::operator*$#
    {33, 327, -68},	// QGlobalSpace::operator+##
    {33, 328, -74},	// QGlobalSpace::operator+#$
    {33, 329, -78},	// QGlobalSpace::operator+$#
    {33, 330, 775},	// QGlobalSpace::operator+$$
    {33, 332, -82},	// QGlobalSpace::operator-#
    {33, 333, -85},	// QGlobalSpace::operator-##
    {33, 335, -90},	// QGlobalSpace::operator/#$
    {33, 337, -95},	// QGlobalSpace::operator<##
    {33, 338, 472},	// QGlobalSpace::operator<#$
    {33, 339, 540},	// QGlobalSpace::operator<$#
    {33, 340, -99},	// QGlobalSpace::operator<$$
    {33, 343, -102},	// QGlobalSpace::operator<<##
    {33, 344, -157},	// QGlobalSpace::operator<<#$
    {33, 345, -163},	// QGlobalSpace::operator<<#?
    {33, 349, -168},	// QGlobalSpace::operator<=##
    {33, 350, 648},	// QGlobalSpace::operator<=#$
    {33, 351, 611},	// QGlobalSpace::operator<=$#
    {33, 355, -172},	// QGlobalSpace::operator==##
    {33, 356, -190},	// QGlobalSpace::operator==#$
    {33, 357, -196},	// QGlobalSpace::operator==$#
    {33, 358, -202},	// QGlobalSpace::operator==$$
    {33, 360, -205},	// QGlobalSpace::operator>##
    {33, 361, 843},	// QGlobalSpace::operator>#$
    {33, 362, 575},	// QGlobalSpace::operator>$#
    {33, 364, -209},	// QGlobalSpace::operator>=##
    {33, 365, 623},	// QGlobalSpace::operator>=#$
    {33, 366, 814},	// QGlobalSpace::operator>=$#
    {33, 369, -213},	// QGlobalSpace::operator>>##
    {33, 370, -247},	// QGlobalSpace::operator>>#$
    {33, 371, 720},	// QGlobalSpace::operator>>#?
    {33, 375, 871},	// QGlobalSpace::operator^##
    {33, 377, 538},	// QGlobalSpace::operator|##
    {33, 378, -250},	// QGlobalSpace::operator|$$
    {33, 381, 457},	// QGlobalSpace::qAcos$
    {33, 383, 725},	// QGlobalSpace::qAddPostRoutine$
    {33, 384, 463},	// QGlobalSpace::qAppName
    {33, 386, 872},	// QGlobalSpace::qAsin$
    {33, 388, 541},	// QGlobalSpace::qAtan$
    {33, 390, 520},	// QGlobalSpace::qAtan2$$
    {33, 391, 874},	// QGlobalSpace::qBadAlloc
    {33, 393, 713},	// QGlobalSpace::qCeil$
    {33, 395, 656},	// QGlobalSpace::qChecksum$$
    {33, 397, 558},	// QGlobalSpace::qCompress#
    {33, 398, 557},	// QGlobalSpace::qCompress#$
    {33, 399, 771},	// QGlobalSpace::qCompress$$
    {33, 400, 770},	// QGlobalSpace::qCompress$$$
    {33, 402, 742},	// QGlobalSpace::qCos$
    {33, 403, 666},	// QGlobalSpace::qCritical
    {33, 405, 624},	// QGlobalSpace::qDBusReplyFill###
    {33, 406, 601},	// QGlobalSpace::qDebug
    {33, 408, 683},	// QGlobalSpace::qExp$
    {33, 410, 576},	// QGlobalSpace::qFabs$
    {33, 412, 649},	// QGlobalSpace::qFastCos$
    {33, 414, 481},	// QGlobalSpace::qFastSin$
    {33, 416, 640},	// QGlobalSpace::qFlagLocation$
    {33, 418, 772},	// QGlobalSpace::qFloor$
    {33, 420, 786},	// QGlobalSpace::qFree$
    {33, 422, 861},	// QGlobalSpace::qFreeAligned$
    {33, 424, -347},	// QGlobalSpace::qFuzzyCompare$$
    {33, 426, -350},	// QGlobalSpace::qFuzzyIsNull$
    {33, 428, -353},	// QGlobalSpace::qHash#
    {33, 429, -361},	// QGlobalSpace::qHash$
    {33, 430, 734},	// QGlobalSpace::qInf
    {33, 432, 660},	// QGlobalSpace::qInstallMsgHandler$
    {33, 434, -376},	// QGlobalSpace::qIntCast$
    {33, 436, -379},	// QGlobalSpace::qIsFinite$
    {33, 438, -382},	// QGlobalSpace::qIsInf$
    {33, 440, -385},	// QGlobalSpace::qIsNaN$
    {33, 442, -388},	// QGlobalSpace::qIsNull$
    {33, 444, 868},	// QGlobalSpace::qLn$
    {33, 446, 828},	// QGlobalSpace::qMalloc$
    {33, 448, 744},	// QGlobalSpace::qMallocAligned$$
    {33, 450, 785},	// QGlobalSpace::qMemCopy$$$
    {33, 452, 711},	// QGlobalSpace::qMemSet$$$
    {33, 454, 668},	// QGlobalSpace::qPow$$
    {33, 455, 510},	// QGlobalSpace::qQNaN
    {33, 457, 584},	// QGlobalSpace::qRealloc$$
    {33, 459, 562},	// QGlobalSpace::qReallocAligned$$$$
    {33, 461, 726},	// QGlobalSpace::qRegisterStaticPluginInstanceFunction#
    {33, 463, 650},	// QGlobalSpace::qRemovePostRoutine$
    {33, 465, 454},	// QGlobalSpace::qRound$
    {33, 467, 819},	// QGlobalSpace::qRound64$
    {33, 468, 823},	// QGlobalSpace::qSNaN
    {33, 470, 846},	// QGlobalSpace::qSetFieldWidth$
    {33, 472, 512},	// QGlobalSpace::qSetPadChar#
    {33, 474, 793},	// QGlobalSpace::qSetRealNumberPrecision$
    {33, 475, 729},	// QGlobalSpace::qSharedBuild
    {33, 477, 802},	// QGlobalSpace::qSin$
    {33, 479, 564},	// QGlobalSpace::qSqrt$
    {33, 481, 764},	// QGlobalSpace::qStringComparisonHelper#$
    {33, 483, 818},	// QGlobalSpace::qTan$
    {33, 485, 644},	// QGlobalSpace::qUncompress#
    {33, 486, 556},	// QGlobalSpace::qUncompress$$
    {33, 487, 753},	// QGlobalSpace::qVersion
    {33, 488, 591},	// QGlobalSpace::qWarning
    {33, 490, 692},	// QGlobalSpace::qbswap_helper$$$
    {33, 492, 471},	// QGlobalSpace::qgetenv$
    {33, 494, 830},	// QGlobalSpace::qputenv$#
    {33, 495, 794},	// QGlobalSpace::qrand
    {33, 497, 701},	// QGlobalSpace::qsrand$
    {33, 499, 619},	// QGlobalSpace::qstrcmp##
    {33, 500, 527},	// QGlobalSpace::qstrcmp#$
    {33, 501, 542},	// QGlobalSpace::qstrcmp$#
    {33, 502, 531},	// QGlobalSpace::qstrcmp$$
    {33, 504, 537},	// QGlobalSpace::qstrcpy$$
    {33, 506, 528},	// QGlobalSpace::qstrdup$
    {33, 508, 708},	// QGlobalSpace::qstricmp$$
    {33, 510, 808},	// QGlobalSpace::qstrlen$
    {33, 512, 484},	// QGlobalSpace::qstrncmp$$$
    {33, 514, 466},	// QGlobalSpace::qstrncpy$$$
    {33, 516, 735},	// QGlobalSpace::qstrnicmp$$$
    {33, 518, 492},	// QGlobalSpace::qstrnlen$$
    {33, 520, 519},	// QGlobalSpace::qtTrId$
    {33, 521, 518},	// QGlobalSpace::qtTrId$$
    {33, 523, 806},	// QGlobalSpace::qt_assert$$$
    {33, 525, 746},	// QGlobalSpace::qt_assert_x$$$$
    {33, 527, 551},	// QGlobalSpace::qt_check_pointer$$
    {33, 528, 505},	// QGlobalSpace::qt_error_string
    {33, 529, 504},	// QGlobalSpace::qt_error_string$
    {33, 531, 699},	// QGlobalSpace::qt_message_output$$
    {33, 536, 674},	// QGlobalSpace::qt_noop
    {33, 538, 679},	// QGlobalSpace::qt_qFindChild_helper#$#
    {33, 540, 502},	// QGlobalSpace::qt_qFindChildren_helper#$##?
    {33, 542, 690},	// QGlobalSpace::qvariant_cast_helper#$$
    {33, 544, 486},	// QGlobalSpace::qvsnprintf$$$?
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();

static bool initialized = false;
Smoke *qtdbus_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qtdbus_Smoke() {
    init_qtcore_Smoke();
    if (initialized) return;
    qtdbus_Smoke = new Smoke(
        "qtdbus",
        __smokeqtdbus::classes, 61,
        __smokeqtdbus::methods, 920,
        __smokeqtdbus::methodMaps, 575,
        __smokeqtdbus::methodNames, 643,
        __smokeqtdbus::types, 329,
        __smokeqtdbus::inheritanceList,
        __smokeqtdbus::argumentList,
        __smokeqtdbus::ambiguousMethodList,
        __smokeqtdbus::cast );
    initialized = true;
}

void delete_qtdbus_Smoke() { delete qtdbus_Smoke; }

}
