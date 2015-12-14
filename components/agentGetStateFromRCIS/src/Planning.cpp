// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Planning.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Planning.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __RoboCompPlanning__Planning__getSolution_name = "getSolution";

const ::std::string __RoboCompPlanning__Planning__getNextAction_name = "getNextAction";

}

namespace
{

const char* __RoboCompPlanning__ServerException_name = "RoboCompPlanning::ServerException";

struct __F__RoboCompPlanning__ServerException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow(const ::std::string&)
    {
        throw ::RoboCompPlanning::ServerException();
    }
};

class __F__RoboCompPlanning__ServerException__Init
{
public:

    __F__RoboCompPlanning__ServerException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::RoboCompPlanning::ServerException", new __F__RoboCompPlanning__ServerException);
    }

    ~__F__RoboCompPlanning__ServerException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::RoboCompPlanning::ServerException");
    }
};

const __F__RoboCompPlanning__ServerException__Init __F__RoboCompPlanning__ServerException__i;

}

RoboCompPlanning::ServerException::ServerException(const ::std::string& __ice_what) :
    ::Ice::UserException(),
    what(__ice_what)
{
}

RoboCompPlanning::ServerException::~ServerException() throw()
{
}

::std::string
RoboCompPlanning::ServerException::ice_name() const
{
    return __RoboCompPlanning__ServerException_name;
}

RoboCompPlanning::ServerException*
RoboCompPlanning::ServerException::ice_clone() const
{
    return new ServerException(*this);
}

void
RoboCompPlanning::ServerException::ice_throw() const
{
    throw *this;
}

void
RoboCompPlanning::ServerException::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::RoboCompPlanning::ServerException", -1, true);
    __os->write(what);
    __os->endWriteSlice();
}

void
RoboCompPlanning::ServerException::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(what);
    __is->endReadSlice();
}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::RoboCompPlanning::upCast(::IceProxy::RoboCompPlanning::Planning* p) { return p; }

void
::IceProxy::RoboCompPlanning::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompPlanning::Planning>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompPlanning::Planning;
        v->__copyFrom(proxy);
    }
}

bool
IceProxy::RoboCompPlanning::Planning::getSolution(const ::std::string& Domain, const ::std::string& Problem, ::RoboCompPlanning::Plan& solution, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __RoboCompPlanning__Planning__getSolution_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__RoboCompPlanning__Planning__getSolution_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::RoboCompPlanning::Planning* __del = dynamic_cast< ::IceDelegate::RoboCompPlanning::Planning*>(__delBase.get());
            return __del->getSolution(Domain, Problem, solution, __ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompPlanning::Planning::begin_getSolution(const ::std::string& Domain, const ::std::string& Problem, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__RoboCompPlanning__Planning__getSolution_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RoboCompPlanning__Planning__getSolution_name, __del, __cookie);
    try
    {
        __result->__prepare(__RoboCompPlanning__Planning__getSolution_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(Domain);
        __os->write(Problem);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

bool
IceProxy::RoboCompPlanning::Planning::end_getSolution(::RoboCompPlanning::Plan& solution, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __RoboCompPlanning__Planning__getSolution_name);
    bool __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::RoboCompPlanning::ServerException&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(solution);
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

bool
IceProxy::RoboCompPlanning::Planning::getNextAction(const ::std::string& Problem, ::RoboCompPlanning::Plan& solution, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __RoboCompPlanning__Planning__getNextAction_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__RoboCompPlanning__Planning__getNextAction_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::RoboCompPlanning::Planning* __del = dynamic_cast< ::IceDelegate::RoboCompPlanning::Planning*>(__delBase.get());
            return __del->getNextAction(Problem, solution, __ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompPlanning::Planning::begin_getNextAction(const ::std::string& Problem, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__RoboCompPlanning__Planning__getNextAction_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RoboCompPlanning__Planning__getNextAction_name, __del, __cookie);
    try
    {
        __result->__prepare(__RoboCompPlanning__Planning__getNextAction_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(Problem);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

bool
IceProxy::RoboCompPlanning::Planning::end_getNextAction(::RoboCompPlanning::Plan& solution, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __RoboCompPlanning__Planning__getNextAction_name);
    bool __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::RoboCompPlanning::ServerException&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(solution);
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::RoboCompPlanning::Planning::ice_staticId()
{
    return ::RoboCompPlanning::Planning::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::RoboCompPlanning::Planning::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::RoboCompPlanning::Planning);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::RoboCompPlanning::Planning::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::RoboCompPlanning::Planning);
}

::IceProxy::Ice::Object*
IceProxy::RoboCompPlanning::Planning::__newInstance() const
{
    return new Planning;
}

bool
IceDelegateM::RoboCompPlanning::Planning::getSolution(const ::std::string& Domain, const ::std::string& Problem, ::RoboCompPlanning::Plan& solution, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __RoboCompPlanning__Planning__getSolution_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(Domain);
        __os->write(Problem);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::RoboCompPlanning::ServerException&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(solution);
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateM::RoboCompPlanning::Planning::getNextAction(const ::std::string& Problem, ::RoboCompPlanning::Plan& solution, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __RoboCompPlanning__Planning__getNextAction_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(Problem);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    bool __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::RoboCompPlanning::ServerException&)
            {
                throw;
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(solution);
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

bool
IceDelegateD::RoboCompPlanning::Planning::getSolution(const ::std::string& Domain, const ::std::string& Problem, ::RoboCompPlanning::Plan& solution, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::std::string& __p_Domain, const ::std::string& __p_Problem, ::RoboCompPlanning::Plan& __p_solution, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_Domain(__p_Domain),
            _m_Problem(__p_Problem),
            _m_solution(__p_solution)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::RoboCompPlanning::Planning* servant = dynamic_cast< ::RoboCompPlanning::Planning*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                _result = servant->getSolution(_m_Domain, _m_Problem, _m_solution, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        bool& _result;
        const ::std::string& _m_Domain;
        const ::std::string& _m_Problem;
        ::RoboCompPlanning::Plan& _m_solution;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __RoboCompPlanning__Planning__getSolution_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, Domain, Problem, solution, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::RoboCompPlanning::ServerException&)
    {
        throw;
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

bool
IceDelegateD::RoboCompPlanning::Planning::getNextAction(const ::std::string& Problem, ::RoboCompPlanning::Plan& solution, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(bool& __result, const ::std::string& __p_Problem, ::RoboCompPlanning::Plan& __p_solution, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_Problem(__p_Problem),
            _m_solution(__p_solution)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::RoboCompPlanning::Planning* servant = dynamic_cast< ::RoboCompPlanning::Planning*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            try
            {
                _result = servant->getNextAction(_m_Problem, _m_solution, _current);
                return ::Ice::DispatchOK;
            }
            catch(const ::Ice::UserException& __ex)
            {
                setUserException(__ex);
                return ::Ice::DispatchUserException;
            }
        }
        
    private:
        
        bool& _result;
        const ::std::string& _m_Problem;
        ::RoboCompPlanning::Plan& _m_solution;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __RoboCompPlanning__Planning__getNextAction_name, ::Ice::Normal, __context);
    bool __result;
    try
    {
        _DirectI __direct(__result, Problem, solution, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::RoboCompPlanning::ServerException&)
    {
        throw;
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Object* RoboCompPlanning::upCast(::RoboCompPlanning::Planning* p) { return p; }

namespace
{
const ::std::string __RoboCompPlanning__Planning_ids[2] =
{
    "::Ice::Object",
    "::RoboCompPlanning::Planning"
};

}

bool
RoboCompPlanning::Planning::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompPlanning__Planning_ids, __RoboCompPlanning__Planning_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompPlanning::Planning::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompPlanning__Planning_ids[0], &__RoboCompPlanning__Planning_ids[2]);
}

const ::std::string&
RoboCompPlanning::Planning::ice_id(const ::Ice::Current&) const
{
    return __RoboCompPlanning__Planning_ids[1];
}

const ::std::string&
RoboCompPlanning::Planning::ice_staticId()
{
    return __RoboCompPlanning__Planning_ids[1];
}

::Ice::DispatchStatus
RoboCompPlanning::Planning::___getSolution(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string Domain;
    ::std::string Problem;
    __is->read(Domain);
    __is->read(Problem);
    __inS.endReadParams();
    ::RoboCompPlanning::Plan solution;
    try
    {
        bool __ret = getSolution(Domain, Problem, solution, __current);
        ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
        __os->write(solution);
        __os->write(__ret);
        __inS.__endWriteParams(true);
        return ::Ice::DispatchOK;
    }
    catch(const ::RoboCompPlanning::ServerException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

::Ice::DispatchStatus
RoboCompPlanning::Planning::___getNextAction(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string Problem;
    __is->read(Problem);
    __inS.endReadParams();
    ::RoboCompPlanning::Plan solution;
    try
    {
        bool __ret = getNextAction(Problem, solution, __current);
        ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
        __os->write(solution);
        __os->write(__ret);
        __inS.__endWriteParams(true);
        return ::Ice::DispatchOK;
    }
    catch(const ::RoboCompPlanning::ServerException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

namespace
{
const ::std::string __RoboCompPlanning__Planning_all[] =
{
    "getNextAction",
    "getSolution",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

::Ice::DispatchStatus
RoboCompPlanning::Planning::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__RoboCompPlanning__Planning_all, __RoboCompPlanning__Planning_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompPlanning__Planning_all)
    {
        case 0:
        {
            return ___getNextAction(in, current);
        }
        case 1:
        {
            return ___getSolution(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
RoboCompPlanning::Planning::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
RoboCompPlanning::Planning::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
RoboCompPlanning::__patch(PlanningPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RoboCompPlanning::PlanningPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RoboCompPlanning::Planning::ice_staticId(), v);
    }
}