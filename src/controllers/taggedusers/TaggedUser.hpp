#pragma once

#include "common/ProviderId.hpp"

#include <QString>

namespace chatterino {
namespace controllers {
namespace taggedusers {

class TaggedUser
{
public:
    TaggedUser(ProviderId provider, const QString &name, const QString &id);

    bool operator<(const TaggedUser &other) const;

    ProviderId provider;
    QString name;
    QString id;
};

}  // namespace taggedusers
}  // namespace controllers
}  // namespace chatterino