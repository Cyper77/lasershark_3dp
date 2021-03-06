/**
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!
 */

#ifndef _ABSTRACTTWOSTEPJSONSERVER_H_
#define _ABSTRACTTWOSTEPJSONSERVER_H_

#include <jsonrpc/rpc.h>

class AbstractTwoStepJSONServer : public jsonrpc::AbstractServer<AbstractTwoStepJSONServer>
{
    public:
        AbstractTwoStepJSONServer(jsonrpc::AbstractServerConnector* conn) :
            jsonrpc::AbstractServer<AbstractTwoStepJSONServer>(conn) 
        {
            this->bindAndAddMethod(new jsonrpc::Procedure("get100uSDelay", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::get100uSDelayI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getCurrent", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::getCurrentI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getDir", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::getDirI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getEnable", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::getEnableI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getIsMoving", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::getIsMovingI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getMicrosteps", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::getMicrostepsI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getSwitchStatus", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractTwoStepJSONServer::getSwitchStatusI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getTwoStepJSONVersion", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING,  NULL), &AbstractTwoStepJSONServer::getTwoStepJSONVersionI);
            this->bindAndAddMethod(new jsonrpc::Procedure("getVersion", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractTwoStepJSONServer::getVersionI);
            this->bindAndAddNotification(new jsonrpc::Procedure("printText", jsonrpc::PARAMS_BY_NAME, "text",jsonrpc::JSON_STRING, NULL), &AbstractTwoStepJSONServer::printTextI);
            this->bindAndAddMethod(new jsonrpc::Procedure("set100uSDelay", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"value",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::set100uSDelayI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setCurrent", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"value",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::setCurrentI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setDir", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"high",jsonrpc::JSON_BOOLEAN, NULL), &AbstractTwoStepJSONServer::setDirI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setEnable", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"enable", jsonrpc::JSON_BOOLEAN, NULL), &AbstractTwoStepJSONServer::setEnableI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setMicrosteps", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"value",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::setMicrostepsI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setSafeSteps", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"steps",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::setSafeStepsI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setStepUntilSwitch", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::setStepUntilSwitchI);
            this->bindAndAddMethod(new jsonrpc::Procedure("setSteps", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperNum",jsonrpc::JSON_INTEGER,"steps",jsonrpc::JSON_INTEGER, NULL), &AbstractTwoStepJSONServer::setStepsI);
            this->bindAndAddMethod(new jsonrpc::Procedure("start", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperOne",jsonrpc::JSON_BOOLEAN,"stepperTwo",jsonrpc::JSON_BOOLEAN, NULL), &AbstractTwoStepJSONServer::startI);
            this->bindAndAddMethod(new jsonrpc::Procedure("stop", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "stepperOne",jsonrpc::JSON_BOOLEAN,"stepperTwo",jsonrpc::JSON_BOOLEAN, NULL), &AbstractTwoStepJSONServer::stopI);

        }
        
        inline virtual void get100uSDelayI(const Json::Value& request, Json::Value& response) 
        {
            response = this->get100uSDelay(request["stepperNum"].asInt());
        }

        inline virtual void getCurrentI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getCurrent(request["stepperNum"].asInt());
        }

        inline virtual void getDirI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getDir(request["stepperNum"].asInt());
        }

        inline virtual void getEnableI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getEnable(request["stepperNum"].asInt());
        }

        inline virtual void getIsMovingI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getIsMoving(request["stepperNum"].asInt());
        }

        inline virtual void getMicrostepsI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getMicrosteps(request["stepperNum"].asInt());
        }

        inline virtual void getSwitchStatusI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getSwitchStatus();
        }

        inline virtual void getTwoStepJSONVersionI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getTwoStepJSONVersion();
        }

        inline virtual void getVersionI(const Json::Value& request, Json::Value& response) 
        {
            response = this->getVersion();
        }

        inline virtual void printTextI(const Json::Value& request) 
        {
            this->printText(request["text"].asString());
        }

        inline virtual void set100uSDelayI(const Json::Value& request, Json::Value& response) 
        {
            response = this->set100uSDelay(request["stepperNum"].asInt(), request["value"].asInt());
        }

        inline virtual void setCurrentI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setCurrent(request["stepperNum"].asInt(), request["value"].asInt());
        }

        inline virtual void setDirI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setDir(request["stepperNum"].asInt(), request["high"].asBool());
        }

        inline virtual void setEnableI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setEnable(request["stepperNum"].asInt(), request["enable"].asBool());
        }

        inline virtual void setMicrostepsI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setMicrosteps(request["stepperNum"].asInt(), request["value"].asInt());
        }

        inline virtual void setSafeStepsI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setSafeSteps(request["stepperNum"].asInt(), request["steps"].asInt());
        }

        inline virtual void setStepUntilSwitchI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setStepUntilSwitch(request["stepperNum"].asInt());
        }

        inline virtual void setStepsI(const Json::Value& request, Json::Value& response) 
        {
            response = this->setSteps(request["stepperNum"].asInt(), request["steps"].asInt());
        }

        inline virtual void startI(const Json::Value& request, Json::Value& response) 
        {
            response = this->start(request["stepperOne"].asBool(), request["stepperTwo"].asBool());
        }

        inline virtual void stopI(const Json::Value& request, Json::Value& response) 
        {
            response = this->stop(request["stepperOne"].asBool(), request["stepperTwo"].asBool());
        }


        virtual Json::Value get100uSDelay(const int& stepperNum) = 0;
        virtual Json::Value getCurrent(const int& stepperNum) = 0;
        virtual Json::Value getDir(const int& stepperNum) = 0;
        virtual Json::Value getEnable(const int& stepperNum) = 0;
        virtual Json::Value getIsMoving(const int& stepperNum) = 0;
        virtual Json::Value getMicrosteps(const int& stepperNum) = 0;
        virtual Json::Value getSwitchStatus() = 0;
        virtual std::string getTwoStepJSONVersion() = 0;
        virtual Json::Value getVersion() = 0;
        virtual void printText(const std::string& text) = 0;
        virtual Json::Value set100uSDelay(const int& stepperNum, const int& value) = 0;
        virtual Json::Value setCurrent(const int& stepperNum, const int& value) = 0;
        virtual Json::Value setDir(const int& stepperNum, const bool& high) = 0;
        virtual Json::Value setEnable(const int& stepperNum, const bool& enable) = 0;
        virtual Json::Value setMicrosteps(const int& stepperNum, const int& value) = 0;
        virtual Json::Value setSafeSteps(const int& stepperNum, const int& steps) = 0;
        virtual Json::Value setStepUntilSwitch(const int& stepperNum) = 0;
        virtual Json::Value setSteps(const int& stepperNum, const int& steps) = 0;
        virtual Json::Value start(const bool& stepperOne, const bool& stepperTwo) = 0;
        virtual Json::Value stop(const bool& stepperOne, const bool& stepperTwo) = 0;

};
#endif //_ABSTRACTTWOSTEPJSONSERVER_H_
