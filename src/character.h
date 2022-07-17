#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QString>

class Character : public QObject
{
  public:
    static Character& get();

    const QString &name() const;
    void setName(const QString &newName);

    const QString &species() const;
    void setSpecies(const QString &newSpecies);

    int comfy() const;
    void setComfy(int newComfy);

    int age() const;
    void setAge(int newAge);

private:
    Q_OBJECT;

    QString m_name;
    QString m_species;
    int     m_comfy;
    int     m_age;

    Character() noexcept;
    explicit Character(const Character&)  = delete;
    explicit Character(Character&&)       = delete;
    Character operator=(const Character&) = delete;
    Character operator=(Character&&)      = delete;

  signals:
    void nameChanged();
    void ageChanged();
    void speciesChanged();
    void comfyChanged();
};

#endif // CHARACTER_H
