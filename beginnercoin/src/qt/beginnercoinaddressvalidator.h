// Copyright (c) 2011-2014 The Beginnercoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BEGINNERCOINADDRESSVALIDATOR_H
#define BEGINNERCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BeginnercoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BeginnercoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Beginnercoin address widget validator, checks for a valid beginnercoin address.
 */
class BeginnercoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BeginnercoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BEGINNERCOINADDRESSVALIDATOR_H
