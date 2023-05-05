#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>


class arduino
{
public:
    arduino();
    int connectArduino();
    int closeArduino();
    int write_to_arduino(QByteArray d);
    QByteArray read_from_arduino();
    QSerialPort* getserial();
    QString getarduino_port_name();

private:
     QSerialPort * serial;
     static const quint16 arduino_uno_vendor_id=6790;
     static const quint16 arduino_uno_producy_id=29987;
     QString arduino_port_name;
     bool arduino_is_available;
     QByteArray data;
};

#endif // ARDUINO_H
