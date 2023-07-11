// -*- C++ -*-
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  ACE_INLINE
  Invocation_Adapter::Invocation_Adapter (
      CORBA::Object *target,
      Argument **args,
      int arg_number,
      const char *operation,
      size_t op_len,
      int collocation_opportunity,
      Invocation_Type type,
      Invocation_Mode mode,
      bool has_in_args)
    : target_ (target)
    , args_ (args)
    , number_args_  (arg_number)
    , has_in_args_ (has_in_args)
    , operation_ (operation)
    , op_len_ (op_len)
    , collocation_opportunity_ (collocation_opportunity)
    , type_ (type)
    , mode_ (mode)
    , byte_order_ (TAO_ENCAP_BYTE_ORDER)
  {
// DGM
  myrequest=NULL;
// END-DGM
  }

  ACE_INLINE
  void
  Invocation_Adapter::_tao_byte_order (int byte_order)
  {
    this->byte_order_ = byte_order;
  }

  ACE_INLINE
  int
  Invocation_Adapter::_tao_byte_order ()
  {
    return this->byte_order_;
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL
