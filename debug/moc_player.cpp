/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created: Thu Aug 29 11:09:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../player.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VLCMainwindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      26,   14,   14,   14, 0x08,
      46,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,
      65,   14,   14,   14, 0x08,
      72,   14,   14,   14, 0x08,
      83,   14,   79,   14, 0x08,
     101,   14,   14,   14, 0x08,
     121,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VLCMainwindow[] = {
    "VLCMainwindow\0\0openFile()\0ShowopenURLDialog()\0"
    "StartPlay()\0play()\0stop()\0mute()\0int\0"
    "changeVolume(int)\0changePosition(int)\0"
    "updateInterface()\0"
};

void VLCMainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VLCMainwindow *_t = static_cast<VLCMainwindow *>(_o);
        switch (_id) {
        case 0: _t->openFile(); break;
        case 1: _t->ShowopenURLDialog(); break;
        case 2: _t->StartPlay(); break;
        case 3: _t->play(); break;
        case 4: _t->stop(); break;
        case 5: _t->mute(); break;
        case 6: { int _r = _t->changeVolume((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->changePosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateInterface(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VLCMainwindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VLCMainwindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VLCMainwindow,
      qt_meta_data_VLCMainwindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VLCMainwindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VLCMainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VLCMainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VLCMainwindow))
        return static_cast<void*>(const_cast< VLCMainwindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VLCMainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
