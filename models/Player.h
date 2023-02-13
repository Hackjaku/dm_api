/**
 *
 *  Player.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#ifdef __cpp_impl_coroutine
#include <drogon/orm/CoroMapper.h>
#endif
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}
}
namespace drogon_model
{
namespace dnd
{

class Player
{
  public:
    struct Cols
    {
        static const std::string _Id;
        static const std::string _Name;
        static const std::string _Race;
        static const std::string _Class;
        static const std::string _Str;
        static const std::string _Con;
        static const std::string _Dex;
        static const std::string _Int;
        static const std::string _Wis;
        static const std::string _Cha;
        static const std::string _RolledHp;
        static const std::string _Xp;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    using PrimaryKeyType = int32_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names,
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all
     * columns by an asterisk), please set the offset to -1.
     */
    explicit Player(const drogon::orm::Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit Player(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    Player(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    Player() = default;

    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(const Json::Value &pJson,
                                 const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForCreation(const Json::Value &,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForUpdate(const Json::Value &,
                                          const std::vector<std::string> &pMasqueradingVector,
                                          std::string &err);
    static bool validJsonOfField(size_t index,
                          const std::string &fieldName,
                          const Json::Value &pJson,
                          std::string &err,
                          bool isForCreation);

    /**  For column Id  */
    ///Get the value of the column Id, returns the default value if the column is null
    const int32_t &getValueOfId() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getId() const noexcept;
    ///Set the value of the column Id
    void setId(const int32_t &pId) noexcept;

    /**  For column Name  */
    ///Get the value of the column Name, returns the default value if the column is null
    const std::string &getValueOfName() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getName() const noexcept;
    ///Set the value of the column Name
    void setName(const std::string &pName) noexcept;
    void setName(std::string &&pName) noexcept;
    void setNameToNull() noexcept;

    /**  For column Race  */
    ///Get the value of the column Race, returns the default value if the column is null
    const std::string &getValueOfRace() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getRace() const noexcept;
    ///Set the value of the column Race
    void setRace(const std::string &pRace) noexcept;
    void setRace(std::string &&pRace) noexcept;
    void setRaceToNull() noexcept;

    /**  For column Class  */
    ///Get the value of the column Class, returns the default value if the column is null
    const std::string &getValueOfClass() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getClass() const noexcept;
    ///Set the value of the column Class
    void setClass(const std::string &pClass) noexcept;
    void setClass(std::string &&pClass) noexcept;
    void setClassToNull() noexcept;

    /**  For column Str  */
    ///Get the value of the column Str, returns the default value if the column is null
    const int16_t &getValueOfStr() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getStr() const noexcept;
    ///Set the value of the column Str
    void setStr(const int16_t &pStr) noexcept;

    /**  For column Con  */
    ///Get the value of the column Con, returns the default value if the column is null
    const int16_t &getValueOfCon() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getCon() const noexcept;
    ///Set the value of the column Con
    void setCon(const int16_t &pCon) noexcept;

    /**  For column Dex  */
    ///Get the value of the column Dex, returns the default value if the column is null
    const int16_t &getValueOfDex() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getDex() const noexcept;
    ///Set the value of the column Dex
    void setDex(const int16_t &pDex) noexcept;

    /**  For column Int  */
    ///Get the value of the column Int, returns the default value if the column is null
    const int16_t &getValueOfInt() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getInt() const noexcept;
    ///Set the value of the column Int
    void setInt(const int16_t &pInt) noexcept;

    /**  For column Wis  */
    ///Get the value of the column Wis, returns the default value if the column is null
    const int16_t &getValueOfWis() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getWis() const noexcept;
    ///Set the value of the column Wis
    void setWis(const int16_t &pWis) noexcept;

    /**  For column Cha  */
    ///Get the value of the column Cha, returns the default value if the column is null
    const int16_t &getValueOfCha() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getCha() const noexcept;
    ///Set the value of the column Cha
    void setCha(const int16_t &pCha) noexcept;

    /**  For column RolledHp  */
    ///Get the value of the column RolledHp, returns the default value if the column is null
    const int16_t &getValueOfRolledhp() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int16_t> &getRolledhp() const noexcept;
    ///Set the value of the column RolledHp
    void setRolledhp(const int16_t &pRolledhp) noexcept;

    /**  For column Xp  */
    ///Get the value of the column Xp, returns the default value if the column is null
    const int32_t &getValueOfXp() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getXp() const noexcept;
    ///Set the value of the column Xp
    void setXp(const int32_t &pXp) noexcept;


    static size_t getColumnNumber() noexcept {  return 12;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend drogon::orm::Mapper<Player>;
#ifdef __cpp_impl_coroutine
    friend drogon::orm::CoroMapper<Player>;
#endif
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int32_t> id_;
    std::shared_ptr<std::string> name_;
    std::shared_ptr<std::string> race_;
    std::shared_ptr<std::string> class_;
    std::shared_ptr<int16_t> str_;
    std::shared_ptr<int16_t> con_;
    std::shared_ptr<int16_t> dex_;
    std::shared_ptr<int16_t> int_;
    std::shared_ptr<int16_t> wis_;
    std::shared_ptr<int16_t> cha_;
    std::shared_ptr<int16_t> rolledhp_;
    std::shared_ptr<int32_t> xp_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[12]={ false };
  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql="select * from " + tableName + " where Id = ?";
        return sql;
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql="delete from " + tableName + " where Id = ?";
        return sql;
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql="insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
            sql += "Id,";
            ++parametersCount;
        if(dirtyFlag_[1])
        {
            sql += "Name,";
            ++parametersCount;
        }
        if(dirtyFlag_[2])
        {
            sql += "Race,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "Class,";
            ++parametersCount;
        }
        sql += "Str,";
        ++parametersCount;
        if(!dirtyFlag_[4])
        {
            needSelection=true;
        }
        sql += "Con,";
        ++parametersCount;
        if(!dirtyFlag_[5])
        {
            needSelection=true;
        }
        sql += "Dex,";
        ++parametersCount;
        if(!dirtyFlag_[6])
        {
            needSelection=true;
        }
        sql += "Int,";
        ++parametersCount;
        if(!dirtyFlag_[7])
        {
            needSelection=true;
        }
        sql += "Wis,";
        ++parametersCount;
        if(!dirtyFlag_[8])
        {
            needSelection=true;
        }
        sql += "Cha,";
        ++parametersCount;
        if(!dirtyFlag_[9])
        {
            needSelection=true;
        }
        sql += "RolledHp,";
        ++parametersCount;
        if(!dirtyFlag_[10])
        {
            needSelection=true;
        }
        sql += "Xp,";
        ++parametersCount;
        if(!dirtyFlag_[11])
        {
            needSelection=true;
        }
        needSelection=true;
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";

        sql +="default,";
        if(dirtyFlag_[1])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[2])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[3])
        {
            sql.append("?,");

        }
        if(dirtyFlag_[4])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[5])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[6])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[7])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[8])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[9])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[10])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(dirtyFlag_[11])
        {
            sql.append("?,");

        }
        else
        {
            sql +="default,";
        }
        if(parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        sql.append(1, ')');
        LOG_TRACE << sql;
        return sql;
    }
};
} // namespace dnd
} // namespace drogon_model