#include <torch_xla/csrc/generated/LazyIr.h>

#include "tensorflow/compiler/xla/client/lib/logdet.h"
#include "tensorflow/compiler/xla/client/lib/math.h"
#include "torch_xla/csrc/elementwise.h"
#include "torch_xla/csrc/helpers.h"
#include "torch_xla/csrc/matrix.h"

namespace torch_xla {

torch_xla::XlaOpVector Abs::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildAbs(xla_input), loctx);
}

torch_xla::XlaOpVector Acos::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Acos(xla_input), loctx);
}

torch_xla::XlaOpVector Acosh::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Acosh(xla_input), loctx);
}

torch_xla::XlaOpVector Asin::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Asin(xla_input), loctx);
}

torch_xla::XlaOpVector Asinh::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Asinh(xla_input), loctx);
}

torch_xla::XlaOpVector Atan::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Atan(xla_input), loctx);
}

torch_xla::XlaOpVector Atanh::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Atanh(xla_input), loctx);
}

torch_xla::XlaOpVector Ceil::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Ceil(xla_input), loctx);
}

torch_xla::XlaOpVector Cos::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Cos(xla_input), loctx);
}

torch_xla::XlaOpVector Cosh::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Cosh(xla_input), loctx);
}

torch_xla::XlaOpVector Erf::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Erf(xla_input), loctx);
}

torch_xla::XlaOpVector Erfc::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Erfc(xla_input), loctx);
}

torch_xla::XlaOpVector Erfinv::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::ErfInv(xla_input), loctx);
}

torch_xla::XlaOpVector Exp::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Exp(xla_input), loctx);
}

torch_xla::XlaOpVector Expm1::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Expm1(xla_input), loctx);
}

torch_xla::XlaOpVector Floor::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Floor(xla_input), loctx);
}

torch_xla::XlaOpVector Hardsigmoid::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildHardSigmoid(xla_input), loctx);
}

torch_xla::XlaOpVector HardsigmoidBackward::Lower(
    LoweringContext* loctx) const {
  xla::XlaOp xla_grad_output = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(1));
  return ReturnOp(BuildHardSigmoidBackward(xla_grad_output, xla_input), loctx);
}

torch_xla::XlaOpVector Hardswish::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildHardSwish(xla_input), loctx);
}

torch_xla::XlaOpVector HardswishBackward::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_grad_output = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(1));
  return ReturnOp(BuildHardSwishBackward(xla_grad_output, xla_input), loctx);
}

torch_xla::XlaOpVector Inverse::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildInverse(xla_input), loctx);
}

torch_xla::XlaOpVector Logdet::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::LogDet(xla_input), loctx);
}

torch_xla::XlaOpVector LogicalAnd::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_other = loctx->GetOutputOp(operand(1));

  return ReturnOp(
      XlaHelpers::PromotedLogicalBinaryOp(
          xla_input, xla_other,
          [](xla::XlaOp lhs, xla::XlaOp rhs) { return xla::And(lhs, rhs); }),
      loctx);
}

torch_xla::XlaOpVector LogicalNot::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(XlaHelpers::PromotedLogicalUnaryOp(
                      xla_input, [](xla::XlaOp lhs) { return xla::Not(lhs); }),
                  loctx);
}

torch_xla::XlaOpVector LogicalOr::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_other = loctx->GetOutputOp(operand(1));
  return ReturnOp(
      XlaHelpers::PromotedLogicalBinaryOp(
          xla_input, xla_other,
          [](xla::XlaOp lhs, xla::XlaOp rhs) { return xla::Or(lhs, rhs); }),
      loctx);
}

torch_xla::XlaOpVector LogicalXor::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_other = loctx->GetOutputOp(operand(1));
  return ReturnOp(
      XlaHelpers::PromotedLogicalBinaryOp(
          xla_input, xla_other,
          [](xla::XlaOp lhs, xla::XlaOp rhs) { return xla::Xor(lhs, rhs); }),
      loctx);
}

torch_xla::XlaOpVector Maximum::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_other = loctx->GetOutputOp(operand(1));
  auto promoted = XlaHelpers::Promote(xla_input, xla_other);
  return ReturnOp(xla::Max(promoted.first, promoted.second), loctx);
}

torch_xla::XlaOpVector Minimum::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  xla::XlaOp xla_other = loctx->GetOutputOp(operand(1));
  auto promoted = XlaHelpers::Promote(xla_input, xla_other);
  return ReturnOp(xla::Min(promoted.first, promoted.second), loctx);
}

torch_xla::XlaOpVector Reciprocal::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildReciprocal(xla_input), loctx);
}

torch_xla::XlaOpVector Round::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::RoundToEven(xla_input), loctx);
}

torch_xla::XlaOpVector Rsqrt::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Rsqrt(xla_input), loctx);
}

torch_xla::XlaOpVector Sgn::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildSgn(xla_input), loctx);
}

torch_xla::XlaOpVector Sign::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildSign(xla_input), loctx);
}

torch_xla::XlaOpVector Sin::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Sin(xla_input), loctx);
}

torch_xla::XlaOpVector Sinh::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Sinh(xla_input), loctx);
}

/* Blocked on https://github.com/pytorch/xla/issues/3596 */
// torch_xla::XlaOpVector Slogdet::Lower(LoweringContext* loctx) const {
//   xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
//   xla::SignAndLogDet result = xla::SLogDet(xla_input);
//   return ReturnOps({result.sign, result.logdet}, loctx);
// }

torch_xla::XlaOpVector Tan::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Tan(xla_input), loctx);
}

torch_xla::XlaOpVector Tanh::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(xla::Tanh(xla_input), loctx);
}

torch_xla::XlaOpVector Tril::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildTril(xla_input, diagonal), loctx);
}

torch_xla::XlaOpVector Triu::Lower(LoweringContext* loctx) const {
  xla::XlaOp xla_input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildTriu(xla_input, diagonal), loctx);
}

}  // namespace torch_xla
